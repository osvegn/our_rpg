/*
** EPITECH PROJECT, 2022
** my_my_hunter
** File description:
** resource
*/

#ifndef RESOURCE_H_
#define RESOURCE_H_

/// @brief It's the structure of a resource. All resources are contained in
/// the world. A resource is a data usefull for the world.
/// Only systems can update resource data.
/// Resources are only stores in the world.
/// A resource contains a type and some data.
typedef struct resource_s {

    /// @brief The type of the resource. It is used to know if this component
    /// type already exists in the world. It is also used to know how to cast
    /// data.
    unsigned int type;

    /// @brief The data of the resource. It stores all informations needed by
    /// the resource. Use the type of a resource to know how to cast data to
    /// use it properly.
    void *data;
} resource_t;

#endif /* !RESOURCE_H_ */
