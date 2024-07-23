#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

int main()
{
    // 在线购物平台的优惠券系统
    // 根据用户购物车金额和会员等级提供不同的折扣

    // 1. 如果用户是VIP，购物总额超过100，提供20%折扣
    // 2. 如果用户不是VIP，但购物车总额超过50，提供10%折扣
    // 3. 如果用户购物车总额不超过50，没有折扣
    // 特殊情况：如果用户是VIP，但购物车总额不超过100，也提供5%的折扣

    // 用户购物车总额
    double cart_total;

    // 是否是VIP
    bool is_vip;

    // 折扣率
    double discount_rate = 0.0;

    // 设置
    cart_total = 120;

    is_vip = true;

    // 首先判断用户是否为VIP
    if (is_vip)
    {
        // 判断购物车总额是否大于100
        if (cart_total > 100)
        {
            discount_rate = 0.2;
        }
        else
        {
            discount_rate = 0.05;
        }
    }
    // 否则，用户不是VIP
    else
    {
        // 判断购物车总额是否大于50
        if (cart_total > 50)
        {
            discount_rate = 0.1;
        }
        else
        {
            discount_rate = 0.0;
        }
    }

    printf("您的折扣为: %.2f%%", discount_rate * 100.0);

    // 过多的嵌套层次会使得代码难以阅读和维护
    // 在企业中应尽力避免if-else的嵌套
    if (is_vip)
    {
        if (cart_total > 100)
        {
            // ...
        }
        else
        {
            // ...
        }
    }
    else
    {
        if (cart_total > 50)
        {
            // ..
        }
    }

    if ((is_vip && cart_total > 100) || (!is_vip && cart_total > 50 && cart_total <= 100))
    {
        // ...
    }

    // 策略模式 Strategy Pattern
    // 结构体定义策略接口
    // 查表法
    // 使用规则引擎
    // 状态机
    // 函数式编程
    // 可以帮助规避多重if-else嵌套
}