#include <stdio.h>
#define TAM 5

int existeSuma(int [],int, int);

int main(){
    int array[TAM] = {1,4,7,12,15,6};
    int objetivo = 13;

    existeSuma(array, TAM, objetivo);
}

int existeSuma(int num[], int tam, int val){
    for(int i = 0; i < tam; i ++){
        for(int j = i+1; j < tam; j++){
            if(num[i] + num[j] == val){
                printf("Los numeros %d y %d suman %d!", num[i], num[j], val);
                return 1;
            }
        }
    }

    return 0;
}