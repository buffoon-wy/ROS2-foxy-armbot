#Note
##2021.8.10

运行该launch文件突然报错：termios.error: (25, ‘Inappropriate ioctl for device’)

###可能原因
launch文件调用并运行pub.py文件，其中内部代码
	settings = termios.tcgetattr(sys.stdin)
会从终端中读取键盘输入，但是使用launch文件打开会被误认为不在终端中，
而直接使用ros run 命令就可以正常运行

###解决办法
暂无
