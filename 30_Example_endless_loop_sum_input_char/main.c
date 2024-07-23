#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void)
{
    /*
        写一个计算求整数和的案例

        用户从终端输入一系列数字，用回车隔开，直到用户输入一个单个0作为结束
        然后把所有的数相加，最终计算结果(0-9)

        Tips:   使用0-9是在使用'q'推出程序时的一种妥协方式
                这里使用ASCII码进行数字和字符之间的转换
    */

    // 初始化数字和是0
    int32_t sum = 0;

    // 用户输入的字符
    // 我们会将字符转换成整型，然后做计算
    char input;

    // 每一次用户输入的字符转换成的数字
    int32_t input_num;

    // 初始化提示
    puts("请输入一系列数字，用回车隔开，我们将计算他们的和，输入0结束");

    while (true)
    {
        puts("请输入一个数字");

        // scanf读取字符简介
        /*
            对于字符类型（如 %c），不会跳过前面的空白字符，而是直接读取遇到的第一个字符，包括空格、制表符或换行符（如果之前没有使用其他方式来消耗这些字符）。为了避免这个问题，通常会在%c之前放置一个空格，以跳过前面的任何空白字符。或者使用 fflush(stdin)；用于刷新标准输入缓冲区，将缓冲区内的数据清空并丢弃。
        */
        scanf(" %c", &input);

        if (input == 'q')
        {
            break;
        }
        // 将输入的字符转换为数字，并且加到总和sum中
        // '0' ASCII 48, '0' - '9' 连续的
        
        if (input >= '0' && input <= '9')
        {
            input_num = input - '0';
            sum += input_num;
        }
        else
        {
            printf("无效输入，请输入一个数字或q");
        }
    }
    printf("The summary result is %" PRId32 "\n", sum);
}