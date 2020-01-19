#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct torre
{
  float mapa[96][12];
  int pasos[96][3];
  int x;
  int y;
}torre;

void llenar_matriz(torre matrix){
    int y, x = 0;
    matrix.y = matrix.x = 0;
    double time1 = clock();
	FILE* document = fopen("M.tex", "r");
    while (1 == fscanf(document, "%f", &matrix.mapa[x][y]) && x < 96 && y < 12){
        fprintf("%f\n",matrix.mapa[x][y]);
        if(y >= 11){
            y = 0;
            x++;
        }else
            y++;
    }
    time1 = (clock() - time1) / CLOCKS_PER_SEC;
	printf("lectura de matriz: %.4lf \n", time1);
    return;
}

void Display(int mapa[96][12]){
    for(int i = 0; i <= 96; i++){
        for(int j = 0; j<=12; j++){
            printf("%d", mapa[i][j]);
        }
    }
 }  

/*
void calcular_camino_minimo(torre matriz){
    int peso = 0;
    int aux = 900000000;
    int aux2 = 0;
    int y;
    int x = 0;
    double time1 = clock();
    while (x < 96){
        y = 0;
        while (y < 12){
            peso = abs(matriz.y - y) + matriz.mapa[x][y];
            if (peso < aux){
                aux = peso;
                aux2 = y;
            }
            y++;
        }
        matriz.x = x;
        matriz.y = aux2;
        matriz.pasos[x][0] = x;
        matriz.pasos[x][1] = aux2;
        if(x > 1)
            matriz.pasos[x][2] = matriz.pasos[x-1][2] + aux;
        else{
            matriz.pasos[x][2] = aux;
        }
        aux = 900000000;
        x++;
    }
    time1 = (clock() - time1) / CLOCKS_PER_SEC;
	printf("recorrido de matriz: %.4lf \n", time1);
    return;
}

*/

int main() {
    int x = 0;
    torre camino;
    llenar_matriz(camino);
    Display(camino.mapa);


    //calcular_camino_minimo(camino);
    while (x < 96){
        printf("el camino tomado es por: (%d , %d)\n", x+1, camino.pasos[x][2]);
        printf("en el %d ° psio el peso acumulado es: %d\n", x+1, camino.pasos[x][1]);
        x++;
        getchar();
    }
    return 0;
}