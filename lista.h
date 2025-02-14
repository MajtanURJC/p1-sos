#include <stdio.h>
#include <stdlib.h>

#ifndef LISTA_H
#define LISTA_H

typedef struct node{
    char* nombre;
    struct node *next; 
}tnodo;

typedef tnodo *ptr;

void insert(ptr *head, char* addname);
void toPrint(ptr head);

#endif 