/*
** EPITECH PROJECT, 2022
** my_my_hunter
** File description:
** world
*/

#include "world.h"
#include <stddef.h>

int run_systems(world_t *world)
{
    vector_t *ptr = &world->system_list;
    system_t *system = NULL;
    unsigned int size = ptr->size(ptr);

    for (unsigned int i = 0; i < size; i++) {
        system = ptr->at(ptr, i);
        if (system)
            system->run((void *)world);
    }
    return 0;
}

int add_system(world_t *world, system_t system)
{
    for (unsigned int i = 0; i < world->system_list.size(&world->system_list); i++) {
        if (system.type == (*(system_t *)(world->system_list.at(&world->system_list, i))).type) {
            return -1;
        }
    }
    world->system_list.emplace_back(&world->system_list, &system);
    return 0;
}

int remove_system(world_t *world, system_t system)
{
    for (unsigned int i = 0; i < world->system_list.size(&world->system_list); i++) {
        if (system.type == (*(system_t *)(world->system_list.at(&world->system_list, i))).type) {
            world->system_list.erase(&world->system_list, i);
            return 0;
        }
    }
    return -1;
}
