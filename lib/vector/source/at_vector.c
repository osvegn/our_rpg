/*
** EPITECH PROJECT, 2022
** our_rpg
** File description:
** at_vector
*/

#include "vector.h"

void *at_vector(vector_t *vector, unsigned int index)
{
    void *ptr;

    if (index >= vector->vector_size) {
        return 0;
    }
    ptr = vector->pointer + index * vector->element_size;
    return ptr;
}
