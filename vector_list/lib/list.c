#include "list.h"

data_t list_size (box *boxptr)
{
    list *obj = (list*)boxptr;
    return obj->size;
}

data_t list_get (box* boxptr, int index)
{
    list *obj = (list*)boxptr;
    return obj->data[index];
}

void list_set (box *boxptr, int index, data_t value)
{
    list *obj = (list*)boxptr;
    obj->data[index] = value;
}

data_t* list_prev (box *boxptr, data_t *cur)
{
    list *obj = (list*)boxptr;
    int index = cur - obj->data;
    return (index < obj->size - 1 && index > 0) ? cur - 1 : NULL;
}

data_t* list_next (box *boxptr, data_t *cur)
{
    list *obj = (list*)boxptr;
    int index = cur - obj->data;
    return (index < obj->size && index >= 0) ? cur + 1 : NULL;
}

data_t* list_get_address (box *boxptr, int index)
{
    list *obj = (list*)boxptr;
    return obj->data + index;
}

void list_insert_after_index(box *boxptr, int index, data_t value)
{
     
}