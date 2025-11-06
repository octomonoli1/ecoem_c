//Elabore un programa en C que escriba los números del 1 al 9 en un fichero
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fichero;

    fichero = fopen("numeros2.txt","w");
    
    for(int i = 1; i <= 9; i++){
        fprintf(fichero, "%d ", i);
    }

    fclose(fichero);

    printf("Numeros escritos correctamente");

}