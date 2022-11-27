/*
** EPITECH PROJECT, 2022
** our_rpg
** File description:
** destruct_vector
*/

#include "vector.h"
#include <stdlib.h>

void destruct_vector(vector_t *vector)
{
    if (vector && vector->pointer)
        free(vector->pointer);
    if (vector)
        free(vector);
}
