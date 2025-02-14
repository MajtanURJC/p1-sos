#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct node{
    char* name;
    struct node *next; 
}tnodo;

typedef tnodo *ptr;

void insert(ptr *head, char* addname){
    ptr new;
    new = malloc(sizeof(tnodo));
    new->name=addname;
    new->next= *head;
    *head = new;
}

void toPrint(ptr head){
    while(head != NULL){
        printf("%s\n", head->name);
        head = head->next; 
    }
}