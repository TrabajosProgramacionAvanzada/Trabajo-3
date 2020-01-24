#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Estructura de camino minimo
/*
 
Para obtener el camino mas cercano entre los pesos minimos que existen dentro de la matriz de 
pesos de caminos minimos.

*/

typedef struct torre
{
  int mapa[96][12];
  int pasos[96][3];
  int x;
  int y;
}torre;

//Funcion Para Llenar la matriz 

void llenar_matriz(torre* matrix){
    int y = 0;
    int x = 0;
    int z = 0;
    matrix->y = matrix->x = 0;
    double time1 = clock();
	FILE* document = fopen("M.tex", "r");
    fscanf(document, "%d", &z);
    matrix->mapa[0][0] = z;
    y++;
    //para llenar el documneto
    while (x < 96){
        while (!feof(document) && y < 12){
            fscanf(document, "%d", &z);
            matrix->mapa[x][y] = z; //se guarda en la matriz cada dato
            printf("| %d ", matrix->mapa[x][y]);
            y++;//se avanza en filas
        }
        x++; //se avanza con los datos de la fila
        y = 0;
        matrix->mapa[x][0]=z;
        printf("|\n| %d ",z);
    }
    time1 = (clock() - time1) / CLOCKS_PER_SEC;
	printf("lectura de matriz: %.4lf \n", time1);
    return;
}

//para calcula los caminos minimos y los muestra, se hace la comparacion con la diferencia de los valores
//de referencia que se dejan

void calcular_camino_minimo(torre *matriz){
    int peso = 0;
    int aux = 900000000;
    int aux2 = 0;
    int y;
    int x = 0;
    double time1 = clock();
    while (x < 96){
        y = 0;
        while (y < 12){
            //obtenemos la diferencia de los caminos minimos cada vez que se va avanzando
            peso = abs(matriz->y - y) + matriz->mapa[x][y];
            if (peso < aux){
                //si se cumple la condicion se actualizan los valores
                aux = peso;
                aux2 = y;
            }
            y++;
        }
        //mostrar los pesos 
        printf("(%d, %d) con peso: %d\n", x, aux2 + 1, aux);
        //se actualizan la matriz
        matriz->x = x;
        matriz->y = aux2;
        matriz->pasos[x][0] = x;
        matriz->pasos[x][1] = aux2;
        if(x > 1)
            matriz->pasos[x][2] = aux + matriz->pasos[x-1][2];
        else
            matriz->pasos[x][2] = aux;
        aux = 900000000;
        x++;
    }
    time1 = (clock() - time1) / CLOCKS_PER_SEC;
	printf("recorrido de matriz: %.4lf \n", time1);
    return;
}

int main() {
    srand(time(NULL));
    double t = 0.0;
    int x = 0;
    int y = 0;
    torre camino;
    int f = 1;
    llenar_matriz(&camino);
    FILE *complejidad = fopen("complejidadcamino.csv", "a");
    fclose(complejidad);
    while(t<=20){

        t=clock();
        calcular_camino_minimo(&camino);
        t=clock()-t;
        t=t/CLOCKS_PER_SEC;
        complejidad = fopen("complejidadcamino.csv", "a");
        fprintf(complejidad, "%d, %f\n", f, t);
        fclose(complejidad);
        f=f+5;

    }
    

    printf("peso total: %d\n", camino.pasos[95][2]);
    return 0;
}