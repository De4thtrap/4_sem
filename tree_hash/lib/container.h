#pragma once 


typedef int data_t;

typedef struct box 
{
    void (*destroy)(box *box_p);

    
} box;