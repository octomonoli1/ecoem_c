// Elabore un programa que abra un fichero, lea todos los números y los coloque en una tabla
#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero_leido;
    int contador = 0;
    FILE *fichero;
    int *tabla_num = NULL;

    //Abrimos el fichero en modo lectura r y controlamos excepcion
    fichero = fopen("numeros.txt", "r");

    //Recorremos el fichero
    while(fscanf(fichero, "%d", &numero_leido) != EOF){
        contador ++;
        int *tmp = realloc(tabla_num, contador*sizeof(int));
        tabla_num = tmp;
        tabla_num[contador-1] = numero_leido;
    }

    //Cerramos el fichero
    fclose(fichero);

    //Pintamos la tabla o array
    for(int i = 0; i < contador; i++){
        printf("%d, ", tabla_num[i]);
    }

    return 0;
}