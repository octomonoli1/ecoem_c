// Elabore un programa que abra un fichero, lea todos los números y los coloque en una tabla (errores)
#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero_leido;
    int contador = 0;
    FILE *fichero;
    int *tabla_num = NULL;

    //Abrimos el fichero en modo lectura r y controlamos excepcion
    fichero = fopen("numeros.txt", "r");
    if(fichero == NULL){
        printf("ERROR! No se pudo abrir el fichero");
        return 1;
    }

    //Recorremos el fichero
    while(fscanf(fichero, "%d", &numero_leido) != EOF){
        contador ++;
        int *tmp = realloc(tabla_num, contador*sizeof(int));
        if(tmp == NULL){
            printf("ERROR! Los datos leidos no caben en memoria");
            free(tabla_num);
            fclose(fichero);
            return 1;
        }
        tabla_num = tmp;
        tabla_num[contador-1] = numero_leido;
    }

    //Cerramos el fichero
    fclose(fichero);

    //Pintamos la tabla o array
    for(int i = 0; i < contador; i++){
        printf("%d, ", tabla_num[i]);
    }

    free(tabla_num);

    return 0;
}