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

void cargarDatos(PC almacenamiento[5]);
void mostrarDatos(PC *almacenamiento);
void masVieja(PC *almacenamiento);
void mayorVelocidad(PC *almacenamiento);

int main()
{
    srand(time(NULL));
    PC almacenamiento[5];
    
    cargarDatos(almacenamiento);
    masVieja(almacenamiento);
    mayorVelocidad(almacenamiento);
    return 0;
}

void cargarDatos(PC almacenamiento[5])
{
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    for (int i = 0; i < 5; i++)
    {
        int indice = rand() % 5;
        printf("--- Computadora %d --- ?\n", i+1);
        almacenamiento[i].anio = (rand() % (2024 - 2015 + 1)) + 2015;
        almacenamiento[i].velocidad = (rand() % (3 - 1 + 1)) + 1;
        almacenamiento[i].nucleos = (rand() % (8 - 1 + 1)) + 1;
        almacenamiento[i].procesador = tipos[indice];
        mostrarDatos(&almacenamiento[i]);
    }
}

void mostrarDatos(PC *almacenamiento)
{
    printf("ANIO: %d \n", almacenamiento->anio);
    printf("VELOCIDAD: %d \n", almacenamiento->velocidad);
    printf("NUCLEOS: %d \n", almacenamiento->nucleos);
    printf("PROCESADOR:%s\n", almacenamiento->procesador);
}

void masVieja(PC *almacenamiento)
{
    int anioMax = 2025;
    int indice = 0;
    for (int i = 0; i < 5; i++)
    {
        if(almacenamiento[i].anio < anioMax)
        {
            indice = i;
            anioMax = almacenamiento[i].anio;
        }
    }

    printf("La computadora mas vieja es la numero %d \n", indice+1);
    
}

void mayorVelocidad(PC *almacenamiento)
{
    int mayor = 0;
    int indice = 0;
    for (int i = 0; i < 5; i++)
    {
        if(almacenamiento[i].velocidad > mayor)
        {
            indice = i;
            mayor = almacenamiento[i].velocidad;
        }
    }

    printf("La computadora mas veloz es la numero %d", indice+1);
    
}
