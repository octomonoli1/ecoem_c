#include <stdio.h>
#define TAM 10

int main(){
    
    int numero = 10; //Variable normal de tipo entero
    int *puntero = &numero; //Puntero(*) que guarda la direccion(&) de la variable numero

    printf("1. Pintando la direccion del numero %p\n", &numero);
    printf("1. Pintando el valor de numero %d\n", numero);
    printf("1. Pintado la direccion del puntero %p\n", puntero);
    printf("1. Pintado el valor del puntero %d\n", *puntero);

    numero = 2*numero; //Modificamos directamente el valor de numero

    printf("2. Pintando la direccion del numero %p\n", &numero);
    printf("2. Pintando el valor de numero %d\n", numero);
    printf("2. Pintado la direccion del puntero %p\n", puntero);
    printf("2. Pintado el valor del puntero %d\n", *puntero);

    *puntero = 2*(*puntero); //Ahora modificamos el valor a través de puntero

    printf("3. Pintando la direccion del numero %p\n", &numero);
    printf("3. Pintando el valor de numero %d\n", numero);
    printf("3. Pintado la direccion del puntero %p\n", puntero);
    printf("3. Pintado el valor del puntero %d\n", *puntero);

}