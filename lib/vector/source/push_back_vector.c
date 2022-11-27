/*
** EPITECH PROJECT, 2022
** our_rpg
** File description:
** push_back_vector
*/

#include "vector.h"
#include <string.h>
#include <stdlib.h>

int push_back_vector(vector_t *vector, void *data)
{
    void *ptr = 0;

    if (!vector->element_available) {
        vector->pointer = realloc(vector->pointer, (vector->vector_size + 1) * vector->element_size);
        if (!vector->pointer)
            return -1;
        vector->vector_size++;
        vector->element_available++;
    }
    ptr = vector->pointer + (vector->vector_size * vector->element_size) - (vector->element_size * vector->element_available);
    memcpy(ptr, data, vector->element_size);
    vector->element_available--;
    return 0;
}
