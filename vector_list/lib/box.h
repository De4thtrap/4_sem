#pragma once 

#include <stdio.h>
#include <stdlib.h>

typedef int data_t;

typedef struct box{
    void (*destroy)(box *boxptr);

    data_t  (*size)                 (box *boxptr);
    data_t  (*get)                  (box *boxptr, int index);
    void    (*set)                  (box *boxptr, int index, data_t value);
    data_t *(*prev)                 (box *boxptr, data_t *cur);
    data_t *(*next)                 (box *boxptr, data_t *cur);
    data_t *(*get_address)          (box *boxptr, int index);
    void    (*insert_after_index)   (box *boxptr, int index, data_t value);
    void    (*insert_after_pointer) (box *boxptr, data_t *cur, data_t value);
    void    (*remove_by_index)      (box *boxptr, int index);
    void    (*remove_by_ptr)        (box *boxptr, data_t *cur);
} box;