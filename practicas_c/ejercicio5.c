//Elabore un programa que abra un fichero, lea los 10 números y
// los coloque en una tabla (o array)

#include <stdio.h>

#define TAM 12

int main(){

    FILE *file;
    int tabla_num[TAM];

    file = fopen("numeros.txt", "r");

    for(int i = 0; i < TAM; i++){
        fscanf(file, "%d", &tabla_num[i]);
    }

    fclose(file);

    for(int i = 0; i < TAM; i++){
        printf("%d, ", tabla_num[i]);
    }

    return 0;
}