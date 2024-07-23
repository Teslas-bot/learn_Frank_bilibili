#include <stdio.h>
#include <stdint.h>

// 枚举
typedef enum
{
    red_light,      // 0
    green_light,    // 1
    yellow_light    // 2
}Traffic_Light;

void traffic_light_control(Traffic_Light traffic_light_state);

int main()
{
    // 状态机
    // 管理复杂状态的转换， 使用switch case

    // 默认状态为红灯
    Traffic_Light traffic_light_state = red_light;

    traffic_light_control(traffic_light_state);
}

void traffic_light_control(Traffic_Light traffic_light_state)
{
    switch (traffic_light_state)
    {
        case red_light:
            puts("红灯");
            traffic_light_state = green_light;
            break;
        case green_light:
            puts("绿灯");
            traffic_light_state = yellow_light;
            break;
        case yellow_light:
            puts("黄灯");
            traffic_light_state = red_light;
            break;
        default:
            puts("What the fuck?");
            break;
    }
}