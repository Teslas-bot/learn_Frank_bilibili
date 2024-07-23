#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <inttypes.h>

int main(void)
{
    /*
        自动贩卖机
        
        这个机器只支持硬币

        假设只卖一种饮料，每瓶价格是$5
    
        怎样才能给客户饮料呢？

        用户需要一直投币，直到金额足够，这样机器才可以提供饮料哦

        只接受$1, $2, $5的币种
    */

    // 1. 初始化

    // 饮料的价格 常量
    const uint32_t PRICE = 5;
    printf("%" PRIu32 "\n", PRICE);

    // 用户当前投入的金额总数 迭代(每次增加)
    uint32_t balance = 0;
    
    // 每次投入的硬币
    uint32_t coin;

    // 用戶使用提示
    puts("欢迎使用自动贩卖机！本机器只提供一种饮料，价格是$5");
    puts("请投币（只接受$1, $2, $5面值的三种硬币）");

    // 2. 处理循环的条件
    // 什么情况下会一直投币？
    // balance < PRICE
    while (balance < PRICE)
    {
        puts("余额不足, 请投币: 只接受1，2，5三种硬币");

        // 模拟投币，假设用户输入的金额就是投币
        scanf("%d", &coin);

        // 检查每次投币是否有效 1,2,5
        if (coin == 1 || coin == 2 || coin == 5)
        {
            balance += coin;
        }
        else
        {
            printf("对不起，我们不接受%" PRIu32 "面值的硬币，请重新投币\n", coin);
        }
    }
    // 找零
    if (balance > PRICE)
    {
        printf("剩余的$%" PRIu32 "已退回，请收好您的零钱", balance - PRICE);
    }
    
    puts("谢谢惠顾，请取走您的饮料。");
}