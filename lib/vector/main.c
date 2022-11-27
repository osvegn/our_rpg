/*
** EPITECH PROJECT, 2022
** our_rpg
** File description:
** main
*/

#include "vector.h"

int main(void)
{
    vector_t *vector = construct_vector(sizeof(int));
    int data = 10;

    push_back_vector(vector, &data);
    data = 15;
    push_back_vector(vector, &data);
    destruct_vector(vector);
    return 0;
}
