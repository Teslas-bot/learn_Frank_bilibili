#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void increment_counter(void);

int main(void)
{
    // 静态变量 static  variables

    for (uint32_t i = 0; i < 4; i++)
    {
        increment_counter();
    }

    // 静态局部变量的可见性只在它声明的函数当中
    // 在main函数中访问在increment_counter()函数中声明的counter变量的值是找不到的
    printf("The value of counter: %" PRIu32 "\n", counter);

    return 0;
}

void increment_counter(void)
{
    // 静态局部变量
    static uint32_t counter = 0;
    // 静态变量在函数内部声明，并且程序期间只初始化一次。即使函数执行结束，它的值也不会消失，而是保持到下次函数的调用。跨函数保持着状态和计数，直到程序结束。

    counter++;

    printf("Counter: %" PRIu32 "\n", counter);
}