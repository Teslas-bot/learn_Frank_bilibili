#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

int main()
{
    /*
        玩家可以选择进入不同的房间，每一个房间都有不同的进入条件。

        房间A: 玩家需要有VIP身份
        房间B: 玩家需要至少有10个金币，或者是一个特殊道具
        房间C: 玩家需要有VIP身份，并且金币数量不得少于20
        房间D: 玩家需要有VIP或者特殊道具，并且数量不少于5
    */
    // 玩家属性（在真实程序中可能来自于用户输入或者是游戏逻辑）
    bool is_vip = true;
    bool has_special_item = true;
    uint32_t coins_num = 15;

    // 检查房间A的条件
    // 房间A: 玩家需要有VIP身份
    if (is_vip)
    {
        printf("You have access to Room A.\n");
    }
    else
    {
        printf("You don't have access to Room A.\n");
    }

    // 检查房间B的条件
    // 房间B: 玩家需要至少有10个金币，或者是一个特殊道具
    if (coins_num >= 10 || has_special_item)
    {
        printf("You have access to Room B.\n");
    }
    else
    {
        puts("You don't have access to Room B.\n");
    }

    // 检查房间C的条件
    // 房间C: 玩家需要有VIP身份，并且金币数量不得少于20
    if (is_vip && coins_num >= 20)
    {
        printf("You have access to Room C.\n");
    }
    else
    {
        printf("You don't have access to Room C.\n");
    }

    // 检查房间D的条件
    // 房间D: 玩家需要有VIP或者特殊道具，并且数量不少于5
    if ((is_vip || has_special_item) && coins_num >= 5)
    {
        printf("You have access to Room D.\n");
    }
    else
    {
        printf("You don't have access to Room D.\n");
    }
}