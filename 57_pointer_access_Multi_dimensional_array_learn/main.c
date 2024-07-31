#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void)
{
    int matrix[2][3] = {
        {1, 2, 3}, 
        {4 ,5, 6}
    };

    // 一个指向长度为3的一维数组的指针
    int(*ptr)[3] = matrix;

    // int(*ptr)[3] : ptr是一个指针，它指向一个包含3个int元素的一维数组的指针

    // int* ptr[3] : ptr是一个指针数组，它里面包含3个指向int类型数据的指针
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int* ptr_numbers = numbers;

    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", ptr_numbers[i]);
    }
}