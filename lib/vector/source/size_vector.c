/*
** EPITECH PROJECT, 2022
** our_rpg
** File description:
** size_vector
*/

#include "vector.h"

unsigned int size_vector(vector_t *vector)
{
    return vector->vector_size - vector->element_available;
}
