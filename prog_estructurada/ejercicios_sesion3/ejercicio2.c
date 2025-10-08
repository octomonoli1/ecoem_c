//Número par o impar: Leer un número entero y determinar si es par o impar
#include <stdio.h>

int main(){
    printf("Introduce un numero: ");
    int num;
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("El numero introducido es par");
    }else{
        printf("El numero es impar");
    }

    return 0;
}