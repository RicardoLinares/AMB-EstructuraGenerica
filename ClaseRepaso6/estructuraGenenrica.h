typedef struct
{
    char nombre[50];
    //------------ agregar en base lo que se necesite
    // int NumeroNatural
    // int
    int idGenerica;
    int estado;
}eGenerica;


int eGen_siguienteId(eGenerica[], int);

int eGen_init( eGenerica[], int);

int eGen_buscarLugarLibre(eGenerica[],int);

int eGen_buscarPorId(eGenerica[],int, int);

int eGen_alta(eGenerica[],int);

int eGen_baja(eGenerica[],int, char[]);

int eGen_modificacion(eGenerica[],int, char[]);

int eGen_MostrarListado(eGenerica[], int);

int eGen_Mostrar(eGenerica, int);

int eGen_ingresarNombre(eGenerica*);

int eGen_InfoGrid(void);
