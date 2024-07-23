#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

// 学生的数量 
#define STUDENTS_NUMBER 5

int main(void)
{
    /*
        假如我们有五个学生的成绩，我们需要计算平均成绩，找出最高分、最低分
    */


    // 定义一个数组存储所有学生的成绩
    uint32_t grades[STUDENTS_NUMBER] = {85, 93, 78, 90, 99};

    // 所有学生成绩的和
    uint32_t sum = 0;

    // 最高分
    uint32_t max_grade = grades[0];

    // 最低分
    uint32_t min_grade = grades[0];

    // 平均分
    double average_score;

    // 提示信息
    puts("所有人的成绩单如下:");

    for (uint32_t index = 0; index < STUDENTS_NUMBER; index++)
    {
        printf("%" PRIu32 "号学生的成绩为: %" PRIu32 "\n", index + 1, grades[index]);

        // 计算加和
        sum += grades[index];

        // 寻找最高分
        if (grades[index] > max_grade)
        {
            max_grade = grades[index];
        }

        // 寻找最低分
        if (grades[index] < min_grade)
        {
            min_grade = grades[index];
        }
    }
    // 计算平均分
    average_score = (double) sum / STUDENTS_NUMBER;

    // 输出平均分
    printf("The average score is %lf.\n", average_score);

    // 输出最高分
    printf("最高分: %" PRIu32 "\n", max_grade);

    // 输出最低分
    printf("最低分: %" PRIu32 "\n", min_grade);
}