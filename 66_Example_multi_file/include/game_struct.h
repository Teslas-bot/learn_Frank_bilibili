#ifndef GAME_STRUCT_H
#define GAME_STRUCT_H

#include "game_abilities.h"
#include "game_types.h"

typedef struct
{
    char name[50];
    CharacterClass char_class;
    Ability ability;
    uint32_t level;
    uint32_t health;
    uint32_t exp;
} Player;

typedef struct
{
    EnemyType type;
    Ability ability;
    uint32_t level;
    uint32_t health;
} Enemy;

typedef struct {
    char name[50];
    ItemType type;
    int32_t power;
} Item;

#endif