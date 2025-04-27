#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
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
    int numpcs=5,i,vel,aniox,cant_Nu,tipox,indice;
    srand(time(NULL));
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core","Pentium"};
    char *tipo_pro;
    pc *pcs=(pc*)malloc(numpcs*sizeof(pc));
    for ( i = 0; i < 5; i++)
    {
        vel=rand() % 3+1;
        aniox=rand() % 10+2015;
        cant_Nu=rand () % 8+1;
        indice=rand () % 6;
        tipo_pro=tipos[indice];
        pcs[i]=(pc){vel,aniox,cant_Nu,tipo_pro};
    }
    listarPCs(pcs,numpcs);
    mostrarMasVieja(pcs,numpcs);
    mostrarMasVeloz(pcs,numpcs);
    
    return 0;
}
void listarPCs(struct compu pcs[], int cantidad){
    int i;
    for ( i = 0; i < cantidad; i++)
    {
        printf("PROCEDOR NUMERO %i:\n",i);
        printf("\nTIPO: \n %s",pcs[i].tipo_cpu);
        printf("\nAÑO DE FABRICACION: \n %d",pcs[i].anio);
        printf("\nCANTIDAD DE NUCLEOS: \n %d",pcs[i].cantidad_nucleos);
        printf("\nVELOCIDAD EN GHz: \n %d",pcs[i].velocidad);
        printf("\n-------\n");
    }
    
}

void mostrarMasVieja(struct compu pcs[], int cantidad){
    int i,indice,chico=444444;
    for ( i = 0; i < cantidad; i++)
    {
        if (pcs[i].anio<chico)
        {
            indice=i;
            chico=pcs[i].anio;
        }
        
    }
    printf("El Procesador mas viejo es el numero %i:\n",indice);
    printf("\nTIPO: \n %s",pcs[indice].tipo_cpu);
    printf("\nAÑO DE FABRICACION: \n %d",pcs[indice].anio);
    printf("\nCANTIDAD DE NUCLEOS: \n %d",pcs[indice].cantidad_nucleos);
    printf("\nVELOCIDAD EN GHz: \n %d",pcs[indice].velocidad);
    printf("\n-------\n");
}
void mostrarMasVeloz(struct compu pcs[], int cantidad){
    int i,indice,chico=0;
    for ( i = 0; i < cantidad; i++)
    {
        if (chico<pcs[i].velocidad)
        {
            indice=i;
            chico=pcs[i].velocidad;
        }
        
    }
    printf("El Procesador mas Veloz es el numero %i:\n",indice);
    printf("\nTIPO: \n %s",pcs[indice].tipo_cpu);
    printf("\nAÑO DE FABRICACION: \n %d",pcs[indice].anio);
    printf("\nCANTIDAD DE NUCLEOS: \n %d",pcs[indice].cantidad_nucleos);
    printf("\nVELOCIDAD EN GHz: \n %d",pcs[indice].velocidad);
    printf("\n-------\n");
}