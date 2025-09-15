#include <stdio.h>

void mergeSort(int [], int, int);
void merge(int [], int, int, int);
void printArray(int [], int);

int main(){
    int num[] = {38,27,43,3,9,82,10};
    int size = sizeof(num)/sizeof(num[0]);

    printf("Array original: ");
    printArray(num, size);

    mergeSort(num, 0, size -1);

    printf("\nArray ordenado: ");
    printArray(num, size);

}

void printArray(int num[], int size){
    printf(" [ ");
    for(int i = 0; i < size; i++){
        printf("%d, ", num[i]);
    }
    printf("]"); 
}

void mergeSort(int num[], int izqd, int dcha){

    if(izqd < dcha){
        //Obtnemos la mitad del array (por donde vamos a dividir). Truncando si hay decimales.
        int medio = izqd + (dcha - izqd) / 2;

        //Ordenamos recursivamente a ambos lados
        mergeSort(num, izqd, medio);
        mergeSort(num, medio + 1, dcha);

        //Mezclamos las mitades ordenadas
        merge(num, izqd, dcha, medio);
    }

}

void merge(int num[], int izqda, int dcha, int medio){

    int tam1 = medio - izqda + 1; //Tamaño del array izquierdo
    int tam2 = dcha - medio; //Tamaño del array derecho

    printf("\n\n-> Ordena mezclando: ");
    printf("i = %d - ", izqda);
    printf("d = %d ", dcha);

    //Creamos los arrays vacios para dividir las dos mitades tempporalmente
    int num_izqd[tam1];
    int num_dcha[tam2];

    //Rellenamos cada uno con los datos del array temporal como corresponda
    for(int i = 0; i < tam1; i ++){
        num_izqd[i] = num[izqda + i];
    }
    for(int j = 0 ; j < tam2; j++){
        num_dcha[j] = num[medio + j + 1];
    }

    printf("\n--> Array_izqd =");
    printArray(num_izqd, tam1);
    printf("\n--> Array_dcha =");
    printArray(num_dcha, tam2);

    //Mezclamos los valores de lo dos arrays de manera ordenada.
    int i = 0, j = 0, k = izqda;

    while (i < tam1 && j < tam2){
        if(num_izqd[i] <= num_dcha[j]){
            num[k] = num_izqd[i];
            i++;
        }else{
            num[k] = num_dcha[j];
            j++;
        }
        k++;
    }

    while(i < tam1){
        num[k] = num_izqd[i];
        i++;
        k++;
    }

    while(j < tam2){
        num[k] = num_dcha[j];
        j++;
        k++;
    }

    printf("\n-> Resultado parcial = ");
    printArray(num, dcha +1);

}