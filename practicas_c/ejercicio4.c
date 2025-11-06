//Desarrolle un programa en C que lea una palabra y la escriba al revés.
#include <stdio.h>
#include <string.h>

#define TAM 250

int main(){

    char palabra[TAM];
    int tam_palabra;

    printf("Introduce una palabra: ");
    scanf("%s", palabra);

    //['H','O','L','A',\0,_,_,...]
    tam_palabra = strlen(palabra);

    for(int i = tam_palabra-1; i >= 0; i--){
        printf("%c", palabra[i]);
    }

    return 0;
}