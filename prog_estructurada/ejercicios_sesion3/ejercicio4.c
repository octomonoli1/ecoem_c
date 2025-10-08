//Leer un número entero positivo y calcular su factorial
#include <stdio.h>

int main(){

    int num, fact = 1;

    printf("Introduce un numero");
    scanf("%d",&num);

    while(num > 0){
        fact = fact * num;
        num = num - 1;
    }

    printf("El factorial es ", fact);

    return 0;
}