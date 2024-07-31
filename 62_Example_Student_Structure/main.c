#include <stdio.h>
#include <inttypes.h>

// 匿名结构体
typedef struct {
    char name[50];
    uint32_t id;
    float score;
} Student;

void print_stu(Student stu);

void update_score_by_value(Student stu, float new_score);

void update_score_by_ptr(Student* stu, float new_score);

int main(void)
{
    Student stu = {"John Doe", 123, 89.5f};

    puts("Before update:\n");

    print_stu(stu);

    update_score_by_value(stu, 100.0f);
    
    puts("After update by value:");

    print_stu(stu);

    update_score_by_ptr(&stu, 100.f);

    puts("After update by ptr:");

    print_stu(stu);
}

void print_stu(Student stu)
{
    printf("Student Name: %s\n", stu.name);
    printf("Student ID: %" PRIu32 "\n", stu.id);
    printf("Student Score: %.2f\n", stu.score);
}

void update_score_by_value(Student stu, float new_score)
{
    stu.score = new_score;
}

void update_score_by_ptr(Student* stu, float new_score)
{
    stu->score = new_score;
}