#include <stdio.h>

int main() {

    //SECUENCIA: Ejemplo que pide un nombre al usuario y lo imprime
    char nombre[100];

    printf("Introduce tu nombre: "); 
    //scanf("%s", nombre); // Esto solo lee hasta el primer espacio

    fgets(nombre, sizeof(nombre), stdin); // Lee una línea completa, incluyendo espacios

    printf("Hola, %s\n", nombre);

    //SELECCION: Ejemplo que pide un número y verifica si es par o impar    

    int numero;
    
    printf("Introduce un numero entero: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("El numero %d es par.\n", numero);
    } else {
        printf("El numero %d es impar.\n", numero);
    }

    //ITERACION: Ejemplo que imprime los números del 1 al 10
    printf("Numeros del 1 al 10:\n");
    int i =1; 
    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }
    
    printf("\n");

    return 0;
}