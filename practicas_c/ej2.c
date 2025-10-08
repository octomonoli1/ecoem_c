//Desarrolle un programa en C que ordene un conjunto de números

#include <stdio.h>
#define TAM 10

int main(){

    //Definimos las variables de uso
    int n, tmp;

    //Inicializamos arreglo con datos de ejemplo
    int num[TAM] = {27,21,43,12,34,433,32,10,3,98}; 

    //Pintar el array original
    printf("\nEl arreglo es: ");
    for(int i = 0; i < TAM ; i++){
        printf("%d, ", num[i]);
    }

    //Algoritmo de la burbuja: La clave esta en TAM-i-1
    //En cada pasada del algoritmo nos aseguramos que el mayor va al final
    for(int i = 0; i < TAM-1; i++){
        for(int j = 0; j < TAM-i-1; j++){
            if(num[j] > num[j+1]){
                tmp = num[j];
                num[j] = num[j+1];
                num[j+1] = tmp;
            }
        }
    }

    //Pintar el resultado ordenado
    printf("\nEl arreglo ordenado es: ");
    for(int i = 0; i < TAM ; i++){
        printf("%d, ", num[i]);
    }

}