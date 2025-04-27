#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct compu 
{
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
}typedef pc;
void listarPCs(struct compu pcs[], int cantidad);
void mostrarMasVieja(struct compu pcs[], int cantidad);
void mostrarMasVeloz(struct compu pcs[], int cantidad);
int main (){
    int numpcs=5,i,vel,aniox,cant_Nu;
    srand(time(NULL));
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core","Pentium"};
    pc *pcs=(pc*)malloc(numpcs*sizeof(pc));
    for ( i = 0; i < 5; i++)
    {
        vel=rand() % 3+1;
        aniox=rand() % 10+2015;
        cant_Nu=rand () % 8+1;
        pcs[i]=(pc){vel,aniox,cant_Nu,};
    }
    
}
