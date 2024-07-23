#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{
    // 请注意，这里的x,y,z仅仅是测试程序，并无实际意义
    uint8_t x,y,z;

    // 多重赋值
    /****相当于****/
    // z = 10;
    // y = z;
    // x = y;
    x = y = z = 10;

    printf("x: %" PRId8 "\n", x);
    printf("y: %" PRId8 "\n", y);
    printf("z: %" PRId8 "\n", z);
}