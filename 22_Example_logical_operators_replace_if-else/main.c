#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

int main()
{
    // 天气晴朗和场地可用的情况下，可以举办高尔夫球活动

    // 天气是否晴朗的布尔值
    bool is_weather_sunny;

    // 场地是否可用的布尔值
    bool is_venue_available;

    // 假设天气不晴朗
    is_weather_sunny = false;

    // 假设场地不可用
    is_venue_available = false;

    // // 1. 使用if-else嵌套
    // // 逻辑容易混乱
    // // 后期维护难度大
    // // 若增加判断条件则需要增加if-else嵌套层数
    // if (is_weather_sunny)
    // {
    //     printf("The weather is sunny.\n");
    //     if (is_venue_available)
    //     {
    //         printf("The venue is available.\n");
    //     }
    //     else
    //     {
    //         printf("The venue is unavailable.\n");
    //     }
    // }
    // else
    // {
    //     printf("The weather is not sunny.\n");
    // }

    // 2. 扩展
    // Using logical operators replaces if-else
    // 使用逻辑AND && 来处理if-else的短路行为
    // 类似的
    // 也可以使用逻辑OR || 来处理if-else的短路行为
    if (is_weather_sunny && is_venue_available)
    {
        printf("The game will be played on time.\n");
    }
    else
    {
        printf("The game will be delayed.\n");

        if (!is_weather_sunny)
        {
            printf("Reason: the weather is not sunny.\n");
        }

        if (!is_venue_available)
        {
            printf("Reason: the venue is not available.\n");
        }
    }
}