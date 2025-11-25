#include <stdio.h>

void incrementar_simple(int);
void incrementar_puntero(int*);

int main(){

    int num = 0;
    incrementar_simple(num);
    printf("Tras la llamada a incrementar_simple num vale %d\n", num);

    incrementar_puntero(&num);
    printf("Tras la llamada a incrementar_puntero num vale %d\n", num);

    return 0;
}

void incrementar_simple(int num){
    //Aqui num funciona como una variable local
    num = num +1;
}

void incrementar_puntero(int *pnum){
    //Aqui pnum funciona como una variable global
    *pnum = *pnum + 1;
}