#ifndef GAME_ABILITIES_H
#define GAME_ALILITIES_H

#include <stdint.h>

typedef union
{
    uint32_t strength;   // 用于战士的力量
    float mana;         // 用于法师的魔力
    uint32_t stealth;   // 用于流氓的藏匿能力
} Ability;


#endif