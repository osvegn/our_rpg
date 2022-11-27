/*
** EPITECH PROJECT, 2022
** our_rpg
** File description:
** construct_vector
*/

#include "vector.h"
#include <stdlib.h>

vector_t *construct_vector(unsigned int element_size)
{
    vector_t *vector = malloc(sizeof(vector_t));

    if (!vector)
        return 0;
    vector->element_size = element_size;
    vector->element_available = 0;
    vector->vector_size = 0;
    vector->pointer = 0;
    return vector;
}
