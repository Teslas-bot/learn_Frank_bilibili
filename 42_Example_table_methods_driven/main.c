#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>
#include <stdbool.h>

char get_credits(uint32_t grade);
bool is_leap_year(uint32_t year);
uint32_t return_days(uint32_t year, uint32_t month);

int main(void)
{
    uint32_t grade;

    // 输入提示信息
    puts("请输入你的成绩(0-100)，我们会给出你的评级");

    // 输入成绩
    scanf("%" SCNu32, &grade);

    printf("你的成绩等级是:%c\n", get_credits(grade));

    // 需要查询的年份
    uint32_t year;
    
    // 需要查询的月份
    uint32_t month;

    // year年 month月的天数
    uint32_t days;

    puts("请输入你想查询的年份和月份，用空格隔开");

    scanf("%" SCNu32 " %"SCNu32, &year ,&month);

    // 计算天数
    days = return_days(year, month);

    printf("%" PRIu32 "年%" PRIu32 "月有%" PRIu32 "天\n", year, month, days);
}

char get_credits(uint32_t grade)
{
    // 多个if-else, 逻辑过于复杂
    // if (grade >= 90)
    // {
    //     return 'A';
    // }
    // else if (grade >= 80)
    // {
    //     return 'B';
    // }
    // else if (grade >= 70)
    // {
    //     return 'C';
    // }
    // else if (grade >= 60)
    // {
    //     return 'D';
    // }
    // else
    // {
    //     return 'F';
    // }

    // 表驱动法
    // 非显式数组
    char grades[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A'};
    return grades[grade / 10];
}

bool is_leap_year(uint32_t year)
{
    return (year % 4 == 0 && year != 0) || year / 400 == 0;
}

uint32_t return_days(uint32_t year, uint32_t month)
{
    uint32_t days[] = { 31, is_leap_year(year) ? 29 : 30, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    return days[month - 1];
}