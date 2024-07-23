#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
    /*
        假如我们要处理一系列数字
        我们要忽略所有的负数和>100的数
        只能处理0-100之间的数

        对于每一个有效数字，
        如果是偶数，打印一条消息并告知它是偶数
        如果是奇数，打印一条消息并告知它是奇数
        用户输入-1结束此程序
    */

    // 用户输入的数字
    int32_t number;

    // 用户输入的所有合法数字的和
    // 初始值为0
    int32_t summary = 0;
    

    // number / 2 后的余数
    // 余数为1 number为奇数
    // 余数为0 number为偶数
    int32_t remainder;


    puts("请输入0-100之间的数字，输入-1结束程序。");

    while (1)
    {
        puts("请输入一个数字: ");

        scanf("%" PRId32, &number);

        // 输入检查 TODO

        // 卫语句
        // 检查结束条件
        if (number == -1)
        {
            // 结果输出
            printf("The summary is %" PRId32 ".\n", summary);
            // 程序结束提示
            puts("程序结束");
            break;
        }

        // 卫语句
        // 检查是否超出范围
        // 跳过所有负数和大于100的整数
        if (number < 0 || number >100)
        {
            puts("您输入的数字不在范围内，请重新输入。");
            continue;
        }

        // 计算余数
        remainder = number % 2;

        switch (remainder)
        {
            case 0:
                puts("这是一个偶数");
                break;
                
            case 1:
                puts("这是一个奇数");
                break;

            default:
                puts("Some errors happened."); 
                break;
        }

        // 将用户输入的数字加入加和中
        summary += number;
    }
}