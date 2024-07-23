#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    // 随机生成的随机数，用于给用户猜测
    uint32_t secret_num;

    // 用户的猜测值
    uint32_t guess;

    // 生成随机数
    srand(time(NULL));
    // 生成1-100的随机数
    secret_num = rand() % 100 + 1;

    puts("猜猜我想的是哪一个数(1-100)?");

    do
    {
        puts("请输入你的猜测:");
        scanf("%" PRIu32, &guess);

        // TODO 输入检查
        if (guess < secret_num)
        {
            puts("太小了，再试试看吧");
        }
        else if (guess > secret_num)
        {
            puts("太大了，再试试看吧");
        }
    } while (guess != secret_num);

    puts("你猜对了，很棒！");
}