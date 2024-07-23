#include <stdio.h>

int main(void)
{
    /********** the different means of print different type ***********/
    // 变量初始化
    int sun_flower = 9887;
    printf("1.阳光目前的值是:%d\n", sun_flower);

    // 变量重新赋值
    sun_flower = 8356;
    printf("2.阳光目前的值是:%d\n", sun_flower);

    // 变量重新赋值
    sun_flower = 3345;
    printf("3.阳光目前的值是:%d\n", sun_flower);

    sun_flower = sun_flower - 100;
    printf("4.阳光目前的值是:%d\n", sun_flower);

    int number = 100;

    // 以八进制表示
    printf("Octal:%o\n", number);

    // 以十进制表示
    printf("Decimal:%d\n", number);

    // 以小写十六进制表示
    printf("Hexadecimal(Lowercase):%x\n", number);

    // 以大写十六进制表示
    printf("Hexadecimal(Uppercase):%x\n", number);

    // 以八进制表示并输出
    printf("Octal:%#o\n", number);

    // 以小写十六进制表示并输出
    printf("Hexadecimal(Lowercase):%#x\n", number);

    // 以大写十六进制表示并输出
    printf("Hexadecimal(Uppercase)%#X\n", number);

    /************** the use of ushort type **********/

    // the number of pixels of the screen width
    unsigned short screenWidth = 1920;

    // the number of pixels of the screen height
    unsigned short screenHeight = 1080;

    // the width coordinate
    unsigned short x = 500;

    // the height coordinate
    unsigned short y = 1000;

    // print the size of the screen
    printf("The size of the screen is %hu X %hu\n", screenWidth, screenHeight);

    // print the coordinate
    printf("The coordinate is (%hu, %hu) now\n", x, y);

    return 0;
}