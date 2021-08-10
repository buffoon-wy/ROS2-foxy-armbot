import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist
from mymsgs.msg import Control

import sys, select, termios, tty

msg = """
Control Your Aimibot!
---------------------------
Moving around:
   u    i    o
   j    k    l
   m    ,    .

q/z : increase/decrease max speeds by 10%
w/x : increase/decrease only linear speed by 10%
e/c : increase/decrease only angular speed by 10%
space key, k : force stop
anything else : stop smoothly

CTRL-C to quit
	"""	
moveBindings = {
		'i':(0.2,0.0),
		'o':(0.2,-0.2),
		'j':(0.0,0.2),
		'l':(0.0,-0.2),
		'u':(0.2,0.2),
		',':(-0.2,0.0),
		'.':(-0.2,0.2),
		'm':(-0.2,-0.2),
		'k':(0.0,0.0),
		   }

speedBindings={
		'q':(1.1,1.1),
		'z':(.9,.9),
		'w':(1.1,1.0),
		'x':(.9,1.0),
		'e':(1.0,1.1),
		'c':(1.0,.9),
		  }

settings = termios.tcgetattr(sys.stdin)

class KeyPublisher(Node):
	def __init__(self):
		super().__init__('key_publisher')
		self.pub = self.create_publisher(Twist, '/cmd_vel', 5)
		self.con = self.create_publisher(Control, '/aimibot/commands/gpio', 5)


		self.move()
		

	def move(self):
		x = 0
		th = 0
		gpio = 0
		status = 0
		count = 0
		control_speed = 0
		control_turn = 0
		key_last = 0
		flag = 1
		try:
			print(msg)
			while(1):
				key = self.getKey()
				if key in moveBindings.keys():			
					if key_last == key:
						flag = flag+1
						x = moveBindings[key][0] * flag
						th = moveBindings[key][1] *flag
					else:
						flag = 1
						x = moveBindings[key][0] 
						th = moveBindings[key][1] 
					if x > 1:
						x = 1.0
					elif x <-1:
						x = -1.0
					if th > 1:
						th = 1.0
					elif th < -1:
						th = -1.0
					control_speed = x
					control_turn = th
					str = "angular:%f" %(control_turn)
					print(str)
					str = "velocity:%f" %(control_speed)
					print(str)
					key_last = key			
					twist = Twist()
					twist.linear.x = control_speed; twist.linear.y = 0.0; twist.linear.z = 0.0
					twist.angular.x = 0.0; twist.angular.y = 0.0; twist.angular.z = control_turn
					self.pub.publish(twist)
				
				elif key == 'q':
					gpio = 1
					control = Control()
					control.gpio = gpio
					self.con.publish(control) 
					
				elif key == 'w':
					gpio = 2
					control = Control()
					control.gpio = gpio
					self.con.publish(control) 
					
				elif key == ' ':
					x = 0
					th = 0
					gpio = 0
					control_speed = 0
					control_turn = 0
		      
				else:
					if (key == '\x03'):
						break

		except Exception as e:
			print(e)

		finally:
			twist = Twist()
			twist.linear.x = 0.0; twist.linear.y = 0.0; twist.linear.z = 0.0
			twist.angular.x = 0.0; twist.angular.y = 0.0; twist.angular.z = 0.0
			self.pub.publish(twist)

		termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)





	def getKey(self):
		global settings
		tty.setraw(sys.stdin.fileno())
		rlist, _, _ = select.select([sys.stdin], [], [], 0.1)
		if rlist:
			key = sys.stdin.read(1)
		else:
			key = ''

		termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
		return key



	def vels(self,speed,turn):
		return "currently:\tspeed %s\tturn %s " % (speed,turn)



def main(args=None):
    settings = termios.tcgetattr(sys.stdin)
    rclpy.init(args=args)
    key_publisher = KeyPublisher()

    rclpy.spin(key_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()



if __name__ == '__main__':
    main()
