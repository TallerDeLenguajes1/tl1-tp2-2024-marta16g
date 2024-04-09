#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct
{
    int velocidad;
    int anio;
    char *procesador;
    int nucleos;
} typedef PC;

void cargarDatos(PC almacenamiento);
void mostrarDatos(PC almacenamiento);

int main()
{
    srand(time(NULL));
    PC almacenamiento[5];
    
    cargarDatos(almacenamiento);
    return 0;
}

void cargarDatos(PC almacenamiento)
{
    char tipos[6][10] = {“Intel”, “AMD”, “Celeron”, “Athlon”, “Core”, “Pentium”};
    for (int i = 0; i < 5; i++)
    {
        int indice = rand() % 5;
        almacenamiento[i].anio = (rand() % (2024 - 2015 + 1)) + 2015;
        almacenamiento[i].velocidad = (rand() % (3 - 1 + 1)) + 1;
        almacenamiento[i].nucleos = (rand() % (8 - 1 + 1)) + 1;
        almacenamiento[i]->procesador = &tipos[indice];
        mostrarDatos(almacenamiento[i]);
    }
}

void mostrarDatos(PC almacenamiento)
{
    printf("--PC-- \n");
    printf(" ANIO: %d \n", almacenamiento.anio);
    printf(" VELOCIDAD: %d \n", almacenamiento.velocidad);
    printf("NUCLEOS: %d \n", almacenamiento.nucleos);
    puts(almacenamiento.procesador);
}

// num = (rand()%(upper - lower+1)) + lower