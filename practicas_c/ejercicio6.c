//Elabore un programa que abra un fichero, lea los 10 números y
// los coloque en una tabla (o array)

#include <stdio.h>
#include <stdlib.h>


int main(){

    FILE *file;
    int numero_leido;
    int *tabla_num = NULL;
    int contador = 0;

    file = fopen("numeros.txt", "r");

    while(fscanf(file, "%d", &numero_leido) != EOF){
        contador++;
        int *tmp = realloc(tabla_num, contador*sizeof(int));
        tabla_num = tmp;
        tabla_num[contador-1] = numero_leido;
    }

    fclose(file);

    for(int i = 0; i < contador; i++){
        printf("%d, ", tabla_num[i]);
    }

    return 0;
}