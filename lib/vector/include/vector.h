/*
** EPITECH PROJECT, 2022
** our_rpg
** File description:
** vector
*/

#ifndef VECTOR_H_
#define VECTOR_H_

typedef struct vector_s {
    unsigned int element_size;
    unsigned int vector_size;
    unsigned int element_available;
    void *pointer;
} vector_t;

void destruct_vector(vector_t *vector);
int push_back_vector(vector_t *vector, void *data);
vector_t *construct_vector(unsigned int element_size);

#endif /* !VECTOR_H_ */
