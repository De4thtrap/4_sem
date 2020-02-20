#pragma once
#include "box.h"

#define INIT_CAPACITY 8

typedef struct vector
{
    box methods;
    int capacity;
    int size;
    data_t* data;
} vector;

box* vector_create();