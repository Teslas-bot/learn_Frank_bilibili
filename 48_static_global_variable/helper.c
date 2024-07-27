#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

// 通过extern关键字声明对外部文件全局变量的访问
extern uint32_t g_static_var;

void try_access_g(void)
{
    g_static_var += 10;
    printf("Inside helper.c try_access_g: %" PRIu32 "\n", g_static_var);
}