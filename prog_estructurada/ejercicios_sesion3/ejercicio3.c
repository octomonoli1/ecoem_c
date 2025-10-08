// Mayor de tres números: Leer tres números e imprimir cuál es el mayor
#include <stdio.h>

int main(){

    //Definimos las variables arriba
    int a, b, c, mayor;

    printf("Introduce el primer numero");
    scanf("%d",a);

    printf("Introduce el segundo numero");
    scanf("%d",b);

    printf("Introduce el tercer numero");
    scanf("%d",c);

    if(a > b){
        if(a > c){
            mayor = a;
        }else{
            mayor = c;
        }
    }else{
        if(b > c){
            mayor = b;
        }else{
            mayor = c;
        }
    }

    printf("El mayor de los tres numeros es: ", mayor);

    return 0;
}