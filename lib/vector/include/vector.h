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

vector_t *construct_vector(unsigned int element_size);
void destruct_vector(vector_t *vector);

/// element access

void *at_vector(vector_t *vector, unsigned int index);
void *front_vector(); // to do
void *back_vector(); // to do

/// capacity

void empty(); // to do
unsigned int size_vector(vector_t *vector);
void max_size(); // to do
void shrink_to_fit(); // to do

/// modifier

void clear(); // to do
void insert(); // to do
void emplace(); // to do
void erase_vector(vector_t *vector, unsigned int index);
int push_back_vector(vector_t *vector, void *data);
void emplace_back(); // to do
void pop_back(); // to do
void resize(); // to do
void swap(); // to do

/// print

void print_at(); // to do
void print(); // to do

#endif /* !VECTOR_H_ */
