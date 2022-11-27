/*
** EPITECH PROJECT, 2022
** our_rpg
** File description:
** main
*/

#include "vector.h"
#include <stdio.h>

int main(void)
{
    vector_t *vector = construct_vector(sizeof(int));
    int data = 10;

    while (data < 20) {
        push_back_vector(vector, &data);
        data++;
    }
    erase_vector(vector, 5);
    erase_vector(vector, 5);
    erase_vector(vector, 2);
    for (unsigned int i = 0; i < size_vector(vector); i++) {
        printf("value: %i\n", (int) *(int *)at_vector(vector, i));
    }
    destruct_vector(vector);
    return 0;
}
