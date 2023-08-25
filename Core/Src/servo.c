#include "servo.h"
extern uint8_t flag;
/********************************************
 @名称；start_state
 @功能：初始化机械臂
 @参数：无
 @返回：无
 @作者：董策
*********************************************/
void start_state(void)
{
    __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_1, 900);  // 逆时针是角度小//大臂
    __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_2, 2000); // 顺时针是角度大
    __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_3, 1500); // 底座
    __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_4, 1000); // 爪子
}
/********************************************
 @名称；red_catch
 @功能：抓取红色物体
 @参数：无
 @返回：无
 @作者：董策
*********************************************/
void Red_catch(void)
{
    // 从起始角度到抓取角度
    /***********************************************************************************************************/
    for (int i = 900, j = 2000; i <= 1600 || j >= 1300; i += 10, j -= 10)
    {
        if (i <= 1600)
        {
            __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_1, i);
            HAL_Delay(10);
        }

        if (j >= 1300)
        {
            __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_2, j);
            HAL_Delay(10);
        }
    }
    HAL_Delay(1000);
    // 爪子闭合
    /***********************************************************************************************************/
    __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_4, 550);
    HAL_Delay(2000);
    // 从抓取角度到起始角度
    /***********************************************************************************************************/
    for (int i = 1600, j = 1300; i >= 900 || j <= 2000; i -= 10, j += 10)
    {
        if (i >= 900)
        {
            __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_1, i);
            HAL_Delay(10);
        }
        if (j <= 2000)
        {
            __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_2, j);
            HAL_Delay(10);
        }
    }
    HAL_Delay(1000);
    // 向右旋转90度
    /***********************************************************************************************************/
    for (int i = 1500; i >= 500; i -= 10)
    {
        __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_3, i);
        HAL_Delay(10);
    }
    // 把物体放下
    /***********************************************************************************************************/
    for (int i = 900, j = 2000; i <= 1600 || j >= 1300; i += 10, j -= 10)
    {
        if (i <= 1600)
        {
            __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_1, i);
            HAL_Delay(10);
        }

        if (j >= 1300)
        {
            __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_2, j);
            HAL_Delay(10);
        }
    }
    HAL_Delay(500);
    __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_4, 1000);
    HAL_Delay(1000);
    // 从抓取角度到起始角度
    /***********************************************************************************************************/
    for (int i = 1600, j = 1300; i >= 900 || j <= 2000; i -= 10, j += 10)
    {
        if (i >= 900)
        {
            __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_1, i);
            HAL_Delay(10);
        }
        if (j <= 2000)
        {
            __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_2, j);
            HAL_Delay(10);
        }
    }
    for (int i = 500; i <= 1500; i += 10)
    {
        __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_3, i);
        HAL_Delay(10);
    }
}
/********************************************
 @名称；Blue_catch
 @功能：抓取蓝色物体
 @参数：无
 @返回：无
 @作者：董策
*********************************************/
void Blue_catch(void)
{
    // 从起始角度到抓取角度
    /***********************************************************************************************************/
    for (int i = 900, j = 2000; i <= 1600 || j >= 1300; i += 10, j -= 10)
    {
        if (i <= 1600)
        {
            __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_1, i);
            HAL_Delay(10);
        }

        if (j >= 1300)
        {
            __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_2, j);
            HAL_Delay(10);
        }
    }
    HAL_Delay(1000);
    // 爪子闭合
    /***********************************************************************************************************/
    __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_4, 550);
    HAL_Delay(2000);
    // 从抓取角度到起始角度
    /***********************************************************************************************************/
    for (int i = 1600, j = 1300; i >= 900 || j <= 2000; i -= 10, j += 10)
    {
        if (i >= 900)
        {
            __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_1, i);
            HAL_Delay(10);
        }
        if (j <= 2000)
        {
            __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_2, j);
            HAL_Delay(10);
        }
    }
    HAL_Delay(1000);
    // 向左旋转90度
    /***********************************************************************************************************/
    for (int i = 1500; i <= 2500; i += 10)
    {
        __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_3, i);
        HAL_Delay(10);
    }
    // 把物体放下
    /***********************************************************************************************************/
    for (int i = 900, j = 2000; i <= 1600 || j >= 1300; i += 10, j -= 10)
    {
        if (i <= 1600)
        {
            __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_1, i);
            HAL_Delay(10);
        }

        if (j >= 1300)
        {
            __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_2, j);
            HAL_Delay(10);
        }
    }
    HAL_Delay(500);
    __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_4, 1000);
    HAL_Delay(1000);
    // 从抓取角度到起始角度
    /***********************************************************************************************************/
    for (int i = 1600, j = 1300; i >= 900 || j <= 2000; i -= 10, j += 10)
    {
        if (i >= 900)
        {
            __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_1, i);
            HAL_Delay(10);
        }
        if (j <= 2000)
        {
            __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_2, j);
            HAL_Delay(10);
        }
    }
    for (int i = 2500; i >= 1500; i -= 10)
    {
        __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_3, i);
        HAL_Delay(10);
    }
}
/********************************************
 @名称；转弯程序
 @功能：根据循迹模块转向实现迅即功能
 @参数：无
 @返回：无
 @作者：董策
*********************************************/
void Line_Tracing(void)
{
       if (Read_hw_xunji_1 == 0 && Read_hw_xunji_2 == 1 && Read_hw_xunji_3 == 0 && Read_hw_xunji_4 == 1)
    {
      Go_forward();
    }
    else if (Read_hw_xunji_1 == 0 && Read_hw_xunji_2 == 0 && Read_hw_xunji_3 == 0 && Read_hw_xunji_4 == 1)
    {
      turn_left_little();
    }
    else if (Read_hw_xunji_1 == 0&& Read_hw_xunji_2 == 1 && Read_hw_xunji_3 == 0 && Read_hw_xunji_4 == 0)
    {
     turn_right_little();
    }
    else if (Read_hw_xunji_1 == 0 && Read_hw_xunji_2 == 0 && Read_hw_xunji_3 == 1 && Read_hw_xunji_4 == 0)
    {
      turn_left_big();
    }
    else if (Read_hw_xunji_1 == 1 && Read_hw_xunji_2 == 0 && Read_hw_xunji_3 == 0 && Read_hw_xunji_4 == 0)
    {
      turn_right_big();
    }
}
/********************************************
 @名称；自动抓取
 @功能：根据不同颜色色块来抓取 当看到红色色块的时候会到仓库
 @参数：无
 @返回：无
 @作者：董策
*********************************************/
uint8_t buf[6];
void AutoCatch(void)
{
    if (buf[2] == 'B')
    {
        HAL_Delay(200);
        if (buf[2] == 'B')
        {
            stop();
            HAL_Delay(200);
            Blue_catch();
        }
    }
    if (buf[2] == 'Y')
    {
        HAL_Delay(200);
        if (buf[2] == 'Y')
        {
            stop();
            HAL_Delay(200);
            Red_catch();
        }
    }
    if (buf[2] == 'R')
    {
        HAL_Delay(200);
        if (buf[2] == 'R')
        {
            stop();
            HAL_Delay(200);
            Red_catch();
            while (1)
            {
            }
        }
    }
}
// 定义PID控制参数
float kp = 1.0;  // 比例系数
float ki = 0.1;  // 积分系数
float kd = 0.01; // 微分系数

// 定义PID控制变量
float error = 0;
float integral = 0;
float derivative = 0;
float last_error = 0;

// 直行控制函数
void keep_straight_with_pid(void)
{
    // 计算传感器读数和预期值之间的误差
    error = 3-flag;

    // 计算积分和微分部分
    integral = error;
    derivative = error - last_error;

    // 计算PID输出
    float output = kp * error + ki * integral + kd * derivative;

    // 根据PID输出调整两个轮子的速度

    // 调整左轮速度
    int left_speed = 400 + output;
    if (left_speed < 0)
    {
        left_speed = 0;
    }
    else if (left_speed > 500)
    {
        left_speed = 500;
    }
    __HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, left_speed);
    printf("left_speed  is %d\r\n", left_speed);
    // 调整右轮速度
    int right_speed = 400 - output;
    if (right_speed < 0)
    {
        right_speed = 0;
    }
    else if (right_speed > 500)
    {
        right_speed = 500;
    }
    __HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_2, right_speed);
    printf("right_speed  is %d\r\n", right_speed);
    // 保存当前误差，用于下一次计算微分部分
    last_error = error;
}