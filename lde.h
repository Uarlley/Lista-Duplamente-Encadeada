#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node* next;
    struct node* prev;
    int value;
}node;

typedef struct{
    node* head;
    int size;
}dlist;