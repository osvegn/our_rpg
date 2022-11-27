/*
** EPITECH PROJECT, 2022
** our_rpg
** File description:
** erase_vector
*/

#include "vector.h"
#include <string.h>

void erase_vector(vector_t *vector, unsigned int index)
{
    void *ptr;

    if (index >= vector->vector_size)
        return;
    ptr = vector->pointer + index * vector->element_size;
    memcpy(ptr, ptr + vector->element_size, (vector->vector_size - (index + 1)) * vector->element_size);
    vector->element_available++;
}
