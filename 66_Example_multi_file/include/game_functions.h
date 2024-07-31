#ifndef GAME_FUNCTIONS_H
#define GAME_FUNCTIONS_H

#include "game_struct.h"

// 函数原型
void create_player(Player* player, const char* name, CharacterClass char_class);

Enemy generateEnemy(EnemyType type, uint32_t level);

void battle(Player* player, Enemy* enemy);

void print_player_info(const Player* player);

void print_enemy_info(const Enemy* enemy);

#endif