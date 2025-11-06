//Desarrolle un programa en C que ordene un conjunto de números
#include <stdio.h>
#define TAM 10

int main(){

    //Definir variables de uso
    int numeros[TAM] = {10,7,21,98,0,45,83,1,9,45};

    //Pintarlo sin ordenar
    printf("El arreglo es: ");
    for(int i = 0; i < TAM; i++){
        printf("%d, ", numeros[i]);
    }

    //Ordenarlo (Bubble Sort)
    for(int i = 0; i < TAM - 1; i++){
        for(int j = 0; j < TAM - i -1; j++){
            if(numeros[j] > numeros[j+1]){
                int temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }

    //Y volver a pintarlo
    printf("\nEl arreglo es: ");
    for(int i = 0; i < TAM; i++){
        printf("%d, ", numeros[i]);
    }
}