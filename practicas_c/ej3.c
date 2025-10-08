//Desarrolle un programa en C que realice la operación elegida: media, max, min y semisuma
#include <stdio.h>
#define TAM 10

int calcula_suma(int num[]);
int calcula_max(int num[]);
int calcula_min(int num[]);
int calcula_semisuma(int num[]);

int main(){

    //Inicializamos la variable
    int opt;
    int max, min, suma, semisuma;
    int num[TAM] = {1,5,8,4,7,9,9,2,1,0};

    do{
        printf("\nElige la opcion que desee"
            "\na. Media"
            "\nb. Maximo"
            "\nc. Minimo"
            "\nd. Semisuma"
            "\ne. Salir\n");
        scanf(" %c",&opt);

        switch(opt){
            case 'a':
                suma = calcula_suma(num);
                printf("La suma total de num es: %d", suma);
                break;
            case 'b':
                max = calcula_max(num);
                printf("El mayor de num es: %d", max);
                break;
            case 'c':
                min = calcula_min(num);
                printf("El menor de num es: %d", min);
                break;
            case 'd':
                semisuma = calcula_semisuma(num);
                printf("La semisuma de num es: %d", semisuma);
                break;
            case 'e':
                printf("Gracias por usar nuestra calculadora");
                break;
            default:
                printf("ERROR! La opcion introducida %c no es correcta", opt);
                break;
        }
    }while(opt != 'e');

    return 0;
}

int calcula_suma(int num[]){
    int suma = 0;
    for(int i = 0; i < TAM; i++){
        suma += num[i];
    }

    return suma;
}

int calcula_max(int num[]){
    int max;
    for(int i = 0; i < TAM; i++){
        if(i == 0 || num[i] > max){
            max = num[i];
        }
    }

    return max;
}

int calcula_min(int num[]){
    int min;
    for(int i = 0; i < TAM; i++){
        if(i == 0 || num[i] < min){
            min = num[i];
        }
    }

    return min;
}

int calcula_semisuma(int num[]){
    return (calcula_max(num) + calcula_min(num)) / 2;
}