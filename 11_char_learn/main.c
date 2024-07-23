#include <stdio.h>

int main()
{
    char mych = 97;
    unsigned char myuch = 255;

    printf("mych: %c\n", mych);
    printf("myuch: %c\n", myuch);

    // 转义序列
    // 回车
    // 换行
    // 响铃
    // ""
    // \\
    
    printf("f\ooo w");
}