#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <time.h>
#include <stdlib.h>

// 游戏选项
#define ROCK 1
#define PAPER 2
#define SCISSIORS 3

// 函数声明
void print_instrucions();
uint32_t get_player_move();
uint32_t get_computer_move();
void determine_winner(uint32_t player_move, uint32_t computer_move);
void print_choice(uint32_t choice);


int main(void)
{
    // 初始化随机数生成器
    srand(time(NULL));

    // 打印游戏说明
    print_instrucions();

    // 获取玩家和计算机的选择
    uint32_t computer_move = get_computer_move();
    uint32_t player_move = get_player_move();

    // 展示玩家和计算机的选择
    puts("你选择了");
    print_choice(player_move);
    puts("计算机选择了");
    print_choice(computer_move);

    // 获取游戏结果
    determine_winner(player_move, computer_move);

}

void print_instrucions()
{
    // 打印游戏说明
    puts("石头，剪刀，布，游戏开始！");
    puts("规则：输入数字，确定猜拳。1 (石头) > 3 (剪刀) > 2 (布)");
}

uint32_t get_player_move()
{
    uint32_t choice;

    scanf("%" SCNu32, &choice);

    // 输入范围检查
    while (choice < ROCK ||choice > SCISSIORS)
    {
        puts("输出无效，请重新输入");
        scanf("%" SCNu32, &choice);
    }

    return choice;
}
uint32_t get_computer_move()
{
    return (rand() % (SCISSIORS - ROCK + 1) + ROCK); 
}

void determine_winner(uint32_t player_move, uint32_t computer_move)
{
    /* 使用规则映射的方法判断赢家 */
    // 卫语句判读平局
    if (player_move == computer_move)
    {
        puts("平局");
    }

    // 定义一个胜利的规则映射，其中键是玩家的移动，值是玩家移动可以打败计算机的移动
    // 玩家的数组为 players[4] = {0, ROCK, PAPER, SCISSIORS};
    // 即是{0, 1, 2, 3}
    // 而玩家想要对应获胜，应为 {0, SCISSIORS, ROCK, PAPER};
    // 0是占位符
    uint32_t winner_moves[4] = {0, SCISSIORS, ROCK, PAPER};

    if (computer_move == winner_moves[player_move])
    {
        puts("你赢了");
    }
    else
    {
        puts("你输了");
    }
}
void print_choice(uint32_t choice)
{
    switch (choice)
    {
        case 1:
            puts("石头");
            break;
        case 2:
            puts("布");
            break;
        case 3:
            puts("剪刀");
            break;
        default:
            break;
    }
    
}