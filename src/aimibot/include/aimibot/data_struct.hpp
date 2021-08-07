#ifndef __DATA_STRUCT__H
#define __DATA_STRUCT__H

#include "rclcpp/rclcpp.hpp" 
#include "mymsgs/msg/core.hpp"
#include "mymsgs/msg/gpio.hpp"
#include "mymsgs/msg/imu.hpp"
#include "mymsgs/msg/twis.hpp"
#include "mymsgs/msg/version.hpp"
#include "mymsgs/msg/heart.hpp"	
#include "mymsgs/msg/attitued.hpp"	

	
struct Core_data
{
	uint32_t time_boot_ms;
	uint32_t onboard_control_sensors_health;
	uint16_t load;
	uint16_t voltage_battery;
	int16_t current_battery;
	int8_t battery_remaining;
};
struct Version_data
{
    uint32_t hardware_ver;
	uint32_t software_ver;
	uint32_t uiud;

};
struct Gpio_data 
{
	uint32_t time_boot_ms;
	uint32_t output;
	uint32_t input;
};
struct Twis_data 
{
	uint32_t time_boot_ms;
	double vx;
	double vy;
	double vz;
	double wx;
	double wy;
	double wz;
};
struct Imu_data 
{
	uint32_t time_boot_ms;
	int16_t xacc;
	int16_t yacc;
	int16_t zacc;
	int16_t xgyro;
	int16_t ygyro;
	int16_t zgyro;
	int16_t xmag;
	int16_t ymag;
	int16_t zmag;
};

struct Heart_data 
{
	uint32_t error_code;
	uint8_t type;
	uint8_t base_mode;
	uint8_t system_status;
};

struct Attitued_data 
{
	uint32_t time_boot_ms;
	float roll;
	float pitch;
	float yaw;
	float rollspeed;
	float pitchspeed;
	float yawspeed;
};
#endif
