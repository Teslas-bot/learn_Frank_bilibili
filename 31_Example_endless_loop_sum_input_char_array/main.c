#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <inttypes.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
    // 初始化数字的和，初始时和为0
    int32_t sum = 0;

    // 输入的字符数组（字符串）
    char input[50];

    // 用户的输入提示信息
    puts("请输入一系列数字(不超过50位)，用回车隔开，我们将会计算他们的和，输入q结束求和程序");

    // input数组的尾部指针
    // 用于做strtol()函数的参数输入
    char* end;
    // 死循环，直到用户输入q，break出循环，退出程序
    while (true)
    {
        // 每次循环开始将错误提示信息重置清零
        errno = 0;

        // 提示用户应该输入数字了
        puts("请输入一个数字或输入q退出");

        // scanf重新赋值，将input字符数组重新赋值
        scanf("%49s", &input);

        if (input[0] == 'q' && input[1] == '\0')
        {
            puts("程序退出");
            break;
        }

        // strtol()函数可以检查是否存在错误(非数字，数字和字符混合等)
        // 但是不能检查输入是否超范围
        long number = strtol(input, &end, 10);

        // 非法输入检查
        if (end == input || *end != '\0')
        {
            puts("无效输入，请输入一个数字或'q'");
            
            // 无效输入，需要重新输入，循环重新开始
            continue;
        }
        // 超出范围检查
        if (errno == ERANGE )
        {
            printf("数字超出范围，请输入一个大于等于%" PRId32 "小于等于%" PRId32 "的整数\n", INT32_MIN, INT32_MAX);

            // 超出范围，需要重新输入，循环重新开始
            continue;
        }

        // 经过两道检查都没问题后，执行加和操作
        sum += (int32_t) number;
    }
    printf("The summary is %" PRId32 "\n", sum);
}