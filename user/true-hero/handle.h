#ifndef __HANDLE_H
#define __HANDLE_H

#include "sys.h"
#include "delay.h"
#include "led.h"
#include "beep.h"
#include "key.h"
#include "rtos.h"
#include "vegmath.h"
#include "Driver_BSP.h"
#include "Driver_Filter.h"
#include "Driver_Magic.h"
#include "Driver_PID.h"
#include "Driver_DBUS.h"
#include "Driver_CAN.h"
#include "Driver_Motor.h"
#include "Driver_Chassis.h"
#include "mpu6500_driver.h"
#include "Driver_Gyroscope.h"
#include "Driver_Protocol.h"
#include "Driver_Fsm.h"

#ifdef __HANDLE_GLOBALS
#define __HANDLE_EXT
#else
#define __HANDLE_EXT extern
#endif

// TIM
__HANDLE_EXT volatile uint32_t ulHighFrequencyTimerTicks;

// 电机
__HANDLE_EXT Motor_Type Motor_LF, Motor_RF, Motor_RB, Motor_LB;

// 云台
__HANDLE_EXT Motor_Type Motor_Yaw, Motor_Pitch;
__HANDLE_EXT PID_Type PID_Cloud_YawAngle, PID_Cloud_YawSpeed, PID_Cloud_PitchAngle, PID_Cloud_PitchSpeed;
__HANDLE_EXT PID_Type PID_Follow_Angle, PID_Follow_Speed;

// 遥控器
__HANDLE_EXT uint8_t remoteBuffer[DBUS_LENGTH + DBUS_BACK_LENGTH];
__HANDLE_EXT Remote_Type remoteData;
__HANDLE_EXT Keyboard_Type keyboardData;
__HANDLE_EXT Mouse_Type mouseData;

// 陀螺仪
__HANDLE_EXT volatile ImuData_Type       ImuData;
__HANDLE_EXT volatile GyroscopeData_Type Gyroscope_EulerData;

// 调试数据
__HANDLE_EXT MagicHandle_Type magic;
__HANDLE_EXT DebugData_Type DebugData;

// 底盘
__HANDLE_EXT ChassisData_Type ChassisData;
__HANDLE_EXT PID_Type PID_LFCM, PID_LBCM, PID_RBCM, PID_RFCM, PID_YawAngle, PID_YawSpeed;

// 通讯协议
__HANDLE_EXT Protocol_Type Judge, Ps;

// 弹舱盖舵机
__HANDLE_EXT PWM_Type PWM_Magazine_Servo;

//发射机构
__HANDLE_EXT Motor_Type Motor_LeftFrict, Motor_RightFrict, Motor_Stir2006, Motor_Stir3510; // 左/右 摩擦轮 拨弹轮 电机
__HANDLE_EXT PID_Type PID_LeftFrictSpeed, PID_RightFrictSpeed, PID_Stir2006Speed, PID_Stir3510Speed, PID_Stir3510Angle, PID_Stir2006Angle,
    PID_Compensation; // 拨弹轮 速度/角度 PID

// PWM 捕获
__HANDLE_EXT u32 TIM5CH1_CAPTURE_STA, TIM5CH1_CAPTURE_VAL;

// 功能开关
__HANDLE_EXT uint8_t ControlMode;
__HANDLE_EXT uint8_t FrictEnabled, StirEnabled, PsEnabled, UpEnabled, ServoEnabled, StirStop;

/**
 * @brief 初始化结构体
 * @note 该函数将在所有硬件及任务初始化之前执行
 */
void Handle_Init(void);

#endif
