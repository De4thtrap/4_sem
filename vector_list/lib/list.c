#include "list.h"

data_t vector_size (box *boxptr)
{
    vector *obj = (vector*)boxptr;
    return obj->size;
}

data_t vector_get (box* boxptr, int index)
{
    vector *obj = (vector*)boxptr;
    return obj->data[index];
}

void vector_set (box *boxptr, int index, data_t value)
{
    vector *obj = (vector*)boxptr;
    obj->data[index] = value;
}

data_t* vector_prev (box *boxptr, data_t *cur)
{
    vector *obj = (vector*)boxptr;
    int index = cur - obj->data;
    return (index < obj->size - 1 && index > 0) ? cur - 1 : NULL;
}

data_t* vector_next (box *boxptr, data_t *cur)
{
    vector *obj = (vector*)boxptr;
    int index = cur - obj->data;
    return (index < obj->size && index >= 0) ? cur + 1 : NULL;
}

data_t* vector_get_address (box *boxptr, int index)
{
    vector *obj = (vector*)boxptr;
    return obj->data + index;
}

void vector_insert_after_index(box *boxptr, int index, data_t value)
{
     
}