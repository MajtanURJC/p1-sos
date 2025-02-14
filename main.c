#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include "lista.h"

int 
main(int argc, char *argv[]) 
{
    int i = 1;
    char espacio = " ";
    char* nombre;
    char* apellido;
    int numero;
    char *endptr;
    ptr headpass = NULL;
    ptr headfail = NULL;
    int nota = 0;
    int count = 0;
    float notamedia;

    
    if ((argc-1)%3 != 0) {
        perror("Wrong number of arguments");
        return EXIT_FAILURE;
    }

    while(i < argc-1){
        nombre = argv[i];
        apellido = argv[i+1];
        char* fullname[] = strcat(strcat(nombre,espacio),apellido);
        numero = strtol(argv[i+2], &endptr, 10);
        if(*endptr != '/0'){
            perror("A calification contains an incorrect formating");
            return EXIT_FAILURE;
        }
        if(numero >= 5){
            insert(headpass,fullname);
        } else {
            insert(headfail,fullname);
        }
        nota += numero;
        count += 1;
        i += 3;
    }
    printf("SUSPENSOS:\n" );
    toPrint(headfail);
    printf("APROBADOS:\n" );
    toPrint(headfail);
    printf("NOTA MEDIA:\n");
    notamedia = nota/count;
    printf("%f\n", notamedia);
}