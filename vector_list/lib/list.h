#pragma once
#include "box.h"

#define INIT_CAPACITY 8

typedef struct list
{
    box methods;
    int capacity;
    int size;
    data_t* data;
} list;

box* list_create();