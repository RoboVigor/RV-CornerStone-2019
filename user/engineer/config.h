/**
 * @brief 机器人参数
 */

// 硬件
#define DEBUG_ENABLED 0          // 调试开关
#define BOARD_VERSION 1          // 开发板型号, 0:旧板, 1:A板
#define USER_POWER_ENABLED 1     // 24V用户电源开关
#define LASER_ENABLED 1          // 激光开关
#define USART3_ENABLED 1         // 串口3开关
#define USART3_BAUD_RATE 9600    // 串口3波特率
#define USART6_ENABLED 1         // 串口6开关
#define USART6_BAUD_RATE 9600    // 串口6波特率
#define SERIAL_DEBUG_PORT USART6 // 串口调试端口

// 陀螺仪
#define BOARD_FRONT_IS_UP 1                     // 板子正面朝上
#define BOARD_SHORT_SIDE_IS_PARALLEL_TO_PITCH 0 // 板子短边朝下
#define GYROSCOPE_START_UP_DELAY_ENABLED 1      //开机解算延迟开关
#define GYROSCOPE_START_UP_DELAY 300            //开机解算延迟量
#define GYROSCOPE_YAW_FILTER_THRESHOLD 0.003f   // 零飘修正阈值  0.003f
#define IMU_GX_BIAS 8.1f                        // GX静态误差,通过平放主控板采样得到  6
#define IMU_GY_BIAS 4.9f                        // GY静态误差  8
#define IMU_GZ_BIAS -12.65f                     // GZ静态误差  -17
#define GYROSCOPE_LSB 16.384f                   // 陀螺仪敏感度 2^16/4000
#define ACCELERATE_LSB 4096.0f                  // 加速度计敏感度 2^16/16

// 底盘
#define CHASSIS_MOTOR_REDUCTION_RATE 19.2f  //底盘电机减速比
#define CHASSIS_MAX_ROTOR_SPEED 5000        //最大轮子转速, 单位rad/s
#define CHASSIS_SIZE_K 0.53f                //测量值, 机器人中心点到XY边缘的距离之和
#define CHASSIS_INVERSE_WHEEL_RADIUS 13.16f //测量值, 麦克纳姆轮半径的倒数

// 视觉
#define PS_ENABLE 0 // 视觉辅助开关
