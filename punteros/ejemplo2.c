#include <stdio.h>

int main(){

    int edades[] = {21, 45, 60, 73, 19};
    int *ptr = edades; //Observa como simplemente el nombre del array es un puntero al primer elemento;

    printf("El primer elemento del array es %d\n", *ptr);
    printf("Por si no te lo crees %d\n", *edades);
    printf("Metodo clasico %d\n", edades[0]);
    
    //Recorrido clásico
    int tam = sizeof(edades)/sizeof(int);
    printf("Recorrido array[]: ");
    for (int i = 0; i < tam; i ++){
        printf("[%d: %d], ", i, edades[i]);
    }

    //Recorrido usando puntero
    printf("\nRecorrido puntero *(puntero + i): ");
    for(int i = 0; i < tam; i ++){
        printf("[%d: %d], ", i, *(ptr + i));
    }

    return 0;
}