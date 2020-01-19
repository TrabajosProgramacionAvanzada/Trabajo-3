#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct torre
{
  int mapa[96][12];
  int pasos[96][3];
  int x;
  int y;
}torre;

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
    while (x < 96){
        while (!feof(document) && y < 12){
            fscanf(document, "%d", &z);
            matrix->mapa[x][y] = z;
            printf("| %d ", matrix->mapa[x][y]);
            y++;
        }
        x++;
        y = 0;
        matrix->mapa[x][0]=z;
        printf("|\n| %d ",z);
    }
    time1 = (clock() - time1) / CLOCKS_PER_SEC;
	printf("lectura de matriz: %.4lf \n", time1);
    return;
}

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
            peso = abs(matriz->y - y) + matriz->mapa[x][y];
            if (peso < aux){
                aux = peso;
                aux2 = y;
            }
            y++;
        }
        printf("(%d, %d) con peso: %d\n", x, aux2 + 1, aux);
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
    int x = 0;
    int y = 0;
    torre camino;
    llenar_matriz(&camino);
    calcular_camino_minimo(&camino);
    printf("peso total: %d\n", camino.pasos[95][2]);
    return 0;
}