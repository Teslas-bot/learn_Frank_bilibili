#include <stdio.h>

void demo_reg_var(void);

int main(void)
{
    demo_reg_var();

    return 0;
}

void demo_reg_var(void)
{
    // 声明寄存器变量
    // 我们建议编译器，尽可能将counter放在寄存器中
    register int counter;
    // 不能使用 &counter 获取counter的地址
    // 因为counter不在内存中，没有地址
    // 在现代编译器良好的优化下，已经很少有场景需要程序员主动告诉编译器需要将某个变量放在寄存器中，大部分情况下，编译器会做出良好的判断。

    for (counter = 0; counter < 10; counter++)
    {
        printf("%d\n", counter);
    }
}

