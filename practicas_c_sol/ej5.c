// Elabore un programa que abra un fichero, lea los 10 números y los coloque en una tabla
#include <stdio.h>

#define TAM 10

int main(){

    FILE *fichero;
    int tabla_num[TAM];

    //Abrimos el fichero en modo lectura r y controlamos excepcion
    fichero = fopen("numeros.txt", "r");

    //Recorremos el fichero
    for(int i = 0; i < TAM; i++){
        fscanf(fichero, "%d", &tabla_num[i]);
    }

    //Cerramos el fichero
    fclose(fichero);

    //Pintamos la tabla o array
    for(int i = 0; i < TAM; i++){
        printf("%d, ", tabla_num[i]);
    }

    return 0;
}