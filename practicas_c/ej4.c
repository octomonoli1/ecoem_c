//Desarrolle un programa en C que lea una palabra y la escriba al revés.
#include <stdio.h>
#include <string.h>

#define TAM 255

int main(){

    //Decaracion de variables
    int tam_palabra;
    char palabra[TAM];

    printf("Introduce una palabra: ");
    scanf("%s", palabra);

    tam_palabra = strlen(palabra);

    for(int i = tam_palabra-1; i >= 0; i--){
        printf("%c", palabra[i]);
    }

    return 0;
}