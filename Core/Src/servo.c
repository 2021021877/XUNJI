#include "servo.h"
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