#include <stdio.h>
#include "game_functions.h"

int main(void)
{
    puts("Welcome to the Text RPG Game!\n");

    Player player;
    create_player(&player, "Hero", Warrior);
    print_player_info(&player);
}