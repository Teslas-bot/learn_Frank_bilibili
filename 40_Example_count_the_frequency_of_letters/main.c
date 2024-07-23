#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <ctype.h>

#define LETTER_COUNT 26

int main(void)
{
    // size: 26 每一个格子代表一个字母出现的频率
    uint32_t letters_frequency[LETTER_COUNT] = {0};
    
    // 给定一段需要统计的字符串
    char text[] = "Example text for frequency analysis.";

    // 统计每个字母出现的次数
    for (uint32_t index = 0; text[index] != '\0'; index++)
    {
        // 将读取到的字母转化为小写
        char ch = tolower(text[index]);

        // 将读取到的字母对应的数组的值+1
        // 忽略空格等非26个字母的情况
        if (ch >= 'a' && ch <= 'z')
        {
            letters_frequency[ch - 'a']++;
        }
    }

    // 输出频率数组
    for (uint32_t i = 0; i < LETTER_COUNT; i++)
    {
        printf("The frequency of %c is %" PRIu32 ".\n", i + 'a', letters_frequency[i]);
    }
}