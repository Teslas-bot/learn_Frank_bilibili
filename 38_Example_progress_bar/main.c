#include <stdio.h>
#include <stdint.h>

// #define __STDC_FORMAT_MACROS 1

#include <inttypes.h>
#include <windows.h>


int main(void)
{
    // 模拟总数据量
    const uint32_t total_steps = 100;

    // 模拟提示信息
    puts("处理中，请稍后");

    // 模拟进度条
    for (uint32_t index = 0; index <= total_steps; index++)
    {
        printf("\r[");

        // 打印进度条的完整部分
        for (uint32_t completed_index = 0; completed_index < index; completed_index++)
        {
            printf("#");
        }

        // 打印进度条未完成的部分
        for (uint32_t uncompleted_index = index; uncompleted_index < total_steps; uncompleted_index++)
        {
            printf(" ");
        }

        printf("] %" PRIu32 "%%", index * 100 / total_steps);
        // (已经传输的数据量 / 文件总大小) * 100

        // 确保进度条及时显示
        fflush(stdout);

        // 模拟程序运行过程
        Sleep(100);
    }

    // 处理完成提示信息
    puts("\n处理完成");

}