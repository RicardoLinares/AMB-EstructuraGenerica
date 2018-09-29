#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuraGenenrica.h"
#include "menuSystem.h"
#define TAMANIO 10
#define OCUPADO 0
#define LIBRE 1

int main()
{
    eGenerica pendejo[TAMANIO];
    eGen_init(pendejo, TAMANIO);
    int option;
    do
    {
        printf("AMB generico:\n");
        printListStrings(5, "Alta", "Baja", "Modificacion", "Mostrar", "Salir");
        option = waitsForMenuInput(5,"Eliga su opcion: ");

        switch(option)
        {
        case 0:
            eGen_alta(pendejo, TAMANIO);
            break;
        case 1:
            eGen_baja(pendejo, TAMANIO, "Ingrese el id del elemento: ");
            break;
        case 2:
            eGen_modificacion(pendejo, TAMANIO, "Ingrese el id del elemento: ");
            break;
        case 3:
            eGen_MostrarListado(pendejo, 10);
            break;
        case 4:
            printf("Adios!!\n");
            break;
        }
        clearConsole();
    }
    while(option!=4);
    return 0;
}
