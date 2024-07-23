#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
    // 金字塔的层数
    uint32_t level;

    // 提示用户输入金字塔层数
    puts("请输入金字塔的层数");

    // 用户输入
    scanf("%" PRIu32, &level);

    // 输入检查 TODO

    // 输出提示
    puts("得到的金字塔如下");

    for (uint32_t raw = 1; raw <= level; raw++)
    {
        // 计算并提前存储每一层的空格
        uint32_t spaces_num = level - raw;

        // 金字塔前面的空格
        for (uint32_t index = 1; index <= spaces_num; index++)
        {
            printf("  ");
        }

        // 金字塔前半边数字
        for (uint32_t index = 1; index <= raw; index++)
        {
            printf("%" PRIu32" ", index);
        }

        // 金字塔后半边数字
        for(uint32_t index = raw - 1; index >= 1; index--)
        {
            printf("%" PRIu32" ", index);
        }
        
        // 金字塔后面的空格
        for (uint32_t index = 1; index <= spaces_num; index++)
        {
            printf("  ");
        }

        // 一行输出完成后换行
        printf("\n");
    }

    // TODO 
    // 多次使用printf造成了性能的浪费
    // 未来可以进一步优化
}