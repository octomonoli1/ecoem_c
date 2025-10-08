#include <stdio.h>
#include <stdlib.h>

#define TAM 255

int main(){
    FILE *origen, *destino;
    char nombre[TAM];
    int edad;

    origen = fopen("personas.txt","r");
    destino = fopen("personas_mayores.txt","w");

    while(fscanf(origen, "%s %d",nombre, &edad) != EOF){
        if(edad > 20){
            fprintf(destino, "%s %d\n",nombre, edad);
        }
    }

    fclose(origen);
    fclose(destino);

}