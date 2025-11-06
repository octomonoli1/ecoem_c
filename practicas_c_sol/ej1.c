//EJ1. Desarrolle un programa en C para calcular el máximo de un conjunto de números.

#include <stdio.h>

int main(){

    //Definimos las variables de uso
    int n, num;
    int max = 0; //En C no existe el nulo para tipos primitivos

    printf("Cuantos numeros desea ingresar? ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Introduce el numero %d ", i+1);
        scanf("%d", &num);
        if(num > max){
            max = num;
        }
    }

    printf("El valor maximo introducido es %d", max);

}