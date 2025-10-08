//Desarrolle un programa que copie un fichero en otro.
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *origen, *destino;
    char caracter;

    origen = fopen("origen.txt", "r");
    destino = fopen("destino.txt", "w");

    while((caracter = fgetc(origen)) != EOF){
        fputc(caracter, destino);
    }

    fclose(origen);
    fclose(destino);

    printf("Operación de copia completada correctamente");
}