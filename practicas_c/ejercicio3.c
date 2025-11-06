//Desarrolle un programa en C que realice la operación elegida: media, max, min y semisuma

#include <stdio.h>
#define TAM 10

int calcula_media(int num[]);
int calcula_maximo(int num[]);
int calcula_minimo(int num[]);
int calcula_semisuma(int num[]);

int main(){

    //Definimos variables uso
    int opt;
    int max, min, avg, ssuma;
    int numeros[TAM] = {10,7,21,98,0,45,83,1,9,45};

    do{
        printf("\nElige la opcion que desee: "
            "\n\t1. Media"
            "\n\t2. Maximo"
            "\n\t3. Minimo"
            "\n\t4. Semisuma"
            "\n\t5. Salir");
        scanf("%d",&opt);

        switch (opt)
        {
        case 1:
            avg = calcula_media(numeros);
            printf("La media es: %d", avg);
            break;
        case 2:
            max = calcula_maximo(numeros);
            printf("El maximo es: %d", max);
            break;
        case 3:
            min = calcula_minimo(numeros);
            printf("El minimo es: %d", min);
            break;
        case 4:
            ssuma = calcula_semisuma(numeros);
            printf("La semisuma es: %d", ssuma);
            break;
        case 5:
            printf("Gracias por usar la calculadora. Adios");
            break;
        default:
            printf("Error! La opcion seleccionada no es valida");
            break;
        }

    }while(opt != 5);

}

int calcula_media(int num[]){
    int media = 0;
    
    for(int i = 0; i < TAM; i++){
        media = media + num[i];
    }

    return media/TAM;
}

int calcula_maximo(int num[]){
    int max;
    for(int i = 0; i < TAM; i++){
        if(i==0 || num[i]>max){
            max = num[i];
        }
    }
}

int calcula_minimo(int num[]){
    int min;
    for(int i = 0; i < TAM; i++){
        if(i==0 || num[i]<min){
            min = num[i];
        }
    }
}

int calcula_semisuma(int num[]){
    return (calcula_maximo(num) + calcula_minimo(num))/2;
}