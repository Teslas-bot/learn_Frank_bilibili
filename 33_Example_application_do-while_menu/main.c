#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void)
{
    uint8_t choice;
    // 游戏菜单模拟
    do 
    {
        // 显示菜单
        puts("****主菜单****");
        puts("1. 新游戏");
        puts("2. 载入游戏");
        puts("3. 退出");
        puts("****请选择一个选项****");

        // 严谨的程序应该有输入检查，这里是案例，暂不做检查功能了
        scanf("%" PRIu8, &choice);

        // 处理用户的选择
        switch (choice)
        {
            case 1:
                puts("新游戏已经启动");
                // 新游戏的逻辑
                // TODO
                break;
            case 2:
                puts("载入游戏中");
                // 载入游戏的逻辑
                // TODO
                break;
            case 3:
                puts("感谢游玩，再见");
                break;
            default:
                puts("无效选项，请重新选择");
                break;
        }
    } while (choice != 3);  // 只要用户不输入3就一直循环
}