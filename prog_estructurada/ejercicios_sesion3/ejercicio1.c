// 1. Suma de dos numeros: Leer dos numeros enteros e imprimir su suma
#include <stdio.h>

int main(){
    
    printf("Introduzca el primer numero: ");
    int num1;
    scanf("%d", &num1);

    printf("Introduzca el segundo numero: ");
    int num2;
    scanf("%d", &num2);

    int suma = num1 + num2;

    printf("La suma de %d y %d es: %d\n", num1, num2, suma);

    return 0;
}


