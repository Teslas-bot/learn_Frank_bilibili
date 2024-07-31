#include <stdio.h>
#include <inttypes.h>

#define EMPLOYEES_COUNT 7

void print_emp(uint32_t* salaries);
void update_salary(uint32_t* salaries, uint32_t increment);
uint32_t* find_hightest_salary(const uint32_t* salaries);
uint32_t calc_bonus(uint32_t salary);

int main(void)
{
    /*
        员工薪资管理系统
        - 批量涨工资
        - 计算并返回员工的年终奖
        - 查找薪资最高的员工
    */

    uint32_t salaries[EMPLOYEES_COUNT] = {3000, 4000, 3500, 4000, 3200, 7000, 2700};

    print_emp(salaries);

    uint32_t increment = 10000;
    
    // update salary
    update_salary(salaries, increment);
    print_emp(salaries);

    uint32_t* highest_salary = find_hightest_salary(salaries);

    printf("最高薪资: %" PRIu32 "\n", *highest_salary);
    printf("最高薪资年终奖是: %" PRIu32 "\n", calc_bonus(*highest_salary));
    
}

void print_emp(uint32_t* salaries)
{
    // 在函数中使用sizeof关键字输出 salaries 的字节数
    // 并不会返回salaries所对应的数组的长度
    // 因为在形参生命时，只知道这是个指针，并不知道这是个数组
    // 所以只会返会指针类型的长度
    // 而在64位系统中，指针类型的长度是8个字节
    // 所以 sizeof(salaries) 的结果是8
    // 因此下面的这行代码并不能在函数中得到salaries这个数组中变量的个数
    // size_t size = sizeof(salaries) / sizeof(uint32_t);
    for (size_t i = 0; i < EMPLOYEES_COUNT; i++)
    {
        printf("%" PRIu32 " ", salaries[i]);
    }
    printf("\n");
}

void update_salary(uint32_t* salaries, uint32_t increment)
{
    for (size_t i = 0; i < EMPLOYEES_COUNT; i++)
    {
        salaries[i] += increment;
    }
}

uint32_t* find_hightest_salary(const uint32_t* salaries)
{
    const uint32_t* highest = salaries;

    for (size_t i = 0; i < EMPLOYEES_COUNT; ++i)
    {
        if (salaries[i] > *highest)
        {
            highest = &salaries[i];
        } 
    }
    
    return (uint32_t*)highest;
}

uint32_t calc_bonus(uint32_t salary)
{
    return salary / 10;
}