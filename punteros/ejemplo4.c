#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Alumno{
    char nombre[50];
    int edad;
    float nota; 
    struct Alumno * siguiente; //Puntero al siguiente nodo  
} Alumno;

Alumno* crearAlumno(char*, int, float); 
void insertarInicio(Alumno**, char*, int, float);
void recorrerLista(Alumno*);

int main(){

    //Definir la lista vacia
    Alumno *lista = NULL;

    insertarInicio(&lista, "Ana", 16, 8.5);
    insertarInicio(&lista, "Luis", 19, 7.9);
    insertarInicio(&lista, "Carlos", 17, 4.5);

    recorrerLista(lista);

    return 0;
}

Alumno* crearAlumno(char* nombre, int edad, float nota){
    //Lo primero es reservar la memoria que necesitaremos.
    Alumno *nuevo = (Alumno*) malloc(sizeof(Alumno));

    //Comprobamos si se ha podido crear
    if(nuevo == NULL){
        printf("ERROR! No se ha podido asignar memoria");
        exit(1);
    }
    strcpy(nuevo->nombre, nombre); //Usamos strcopy porque no podemos asignar directamente un string
    nuevo->edad = edad;
    nuevo->nota = nota;
    nuevo->siguiente = NULL;

    return nuevo;
}

void insertarInicio(Alumno** cabeza, char* nombre, int edad, float nota){
    Alumno *nuevo = crearAlumno(nombre, edad, nota); //Creamos desde cero un nuevo nodo (Alumno)

    nuevo->siguiente = *cabeza; //Este nuevo adelanta al primero
    *cabeza = nuevo; //Para que el cambio se vea reflejado
}

void recorrerLista(Alumno* cabeza){

    //No podemos modificar la cabeza asi que hacemos una "copia"
    Alumno *actual = cabeza;

    while(actual != NULL){
        printf("Nombre: %s, Edad: %d, Nota: %f\n", actual->nombre, actual->edad, actual->nota);
        actual = actual->siguiente;
    }
}