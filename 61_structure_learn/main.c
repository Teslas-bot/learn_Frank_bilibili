#include <stdio.h>
#include <inttypes.h>

// 结构体(Structures)
// 数据类型
// 在单文件编程时，结构体一般定义在函数外
// 在多文件编程时，结构体定义一般放在单独的文件中

// 说白了，我们想要定义什么类型？
// 我们定义了一个表示日期的结构体 Date
// 其中，整个结构体包含了三个int类型的成员
// 显示定义结构体
typedef struct Date {
    uint32_t day;
    uint32_t month;
    uint32_t year;
} Date;

// 创建结构体
struct Person
{
    char name[50];
    uint32_t age;
    float height;
    // ...
};


int main(void)
{
    Date today = {30, 7, 2024};

    // 初始化结构体变量
    struct Person frank = {"frank", 30, 2.83f};

    // 通过.访问成员
    printf("Today's date is: %" PRIu32 "-%" PRIu32 "-%" PRIu32 " (print by .)\n", today.year, today.month, today. day);    

    // 通过指针访问成员
    Date* date_ptr = &today;
    printf("Today's date is %" PRIu32 "-%" PRIu32 "-%" PRIu32 " (print by ptr)\n", date_ptr->year, date_ptr->month, date_ptr->day);

    printf("%s is %" PRIu32 " years old and %.2f feet tall.\n", frank.name, frank.age, frank.height);
}