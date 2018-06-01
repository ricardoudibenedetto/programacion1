#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/**
 *  Agrega una pelicula al archivo binario
 *  @param movie la estructura a ser agregada al archivo
 *  @return retorna 1 o 0 de acuerdo a si pudo agregar la pelicula o no
 */
//int agregarPelicula(EMovie movie);

/**
 *  Borra una pelicula del archivo binario
 *  @param movie la estructura a ser eliminada al archivo
 *  @return retorna 1 o 0 de acuerdo a si pudo eliminar la pelicula o no
 */
//int borrarPelicula(EMovie movie);

/**
 *  Genera un archivo html a partir de las peliculas cargadas en el archivo binario.
 *  @param lista la lista de peliculas a ser agregadas en el archivo.
 *  @param nombre el nombre para el archivo.
 */
//void generarPagina(EMovie lista[], char nombre[]);
typedef struct
{
    char titulo[50];
    char genero[20];
    int duracion;
    char descripcion[150];
    int puntaje;
    char linkImagen[1001];
    int estado;
    int codigoPelicula;
} EMovie;
int setDuracion(EMovie*,int);
int setPuntaje(EMovie*,int);
char* setTitulo(EMovie*, char*);
char* setGenero(EMovie*, char*);
char* setDescipcion(EMovie*, char*);
char* setLinkImagen(EMovie*, char*);
int menuModifica();
void modifica(EMovie* vec, int tam);
void iniciarEstado(EMovie* vec, int tam);
int buscarLibre(EMovie* vec, int tam);
int buscarPelicula(EMovie* vec, int tam, int codigoPelicula);
int validarLargoCadena(char cadena[],int  LargoMaximo);
int validarNumero(char mensaje[]);
void altaPelicula(EMovie* vec,int tam, int contadorPeliculas);
void bajaPelicula(EMovie *vec,int tam, int codigopelicula);
void paginaWeb(FILE *,EMovie*,int);

#endif // FUNCIONES_H_INCLUDED
