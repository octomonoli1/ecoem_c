//Desarrolle un programa en C para calcular el máximo de un conjunto de números
#include <stdio.h>

int main(){

    //Definimos las variables de uso
    int max = 0;
    int n, num;

    do{
        printf("Cuantos numeros desea ingresar?");
        scanf("%d", &n);
    }while(n < 0);
    

    for(int i = 0; i < n; i++){
        printf("Introduce el numero %d ", i+1);
        scanf("%d",&num);
        if(num > max){
            max = num;
        }
    }

    printf("El valor maximo introduce es: %d", max);

    return 0;
}