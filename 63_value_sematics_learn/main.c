#include <stdio.h>

// 匿名结构体
typedef struct {
    int x;
    int y;
} Point;

Point get_point(void);

int main(void)
{
    Point my_point = get_point();
    Point your_point = get_point();
    Point frank_point = get_point();

    printf("My point: (%d, %d).\n", my_point.x, my_point.y);
    printf("Your point: (%d, %d).\n", your_point.x, your_point.y);
    printf("Frank's point: (%d, %d).\n", frank_point.x, frank_point.y);

}

Point get_point(void)
{
    // 值语义(Value semantics)
    Point init_point = {10, 20};
    return init_point;
}