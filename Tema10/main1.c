#include <stdio.h>

void leer   (FILE *pf1, int v[], int *longitud);
void grabar (int v[], int longitud,FILE *pf1);

int main(void){
    //Input file
    FILE* fi=fopen("ENT.TXT", "r");
    //Ouput file
    FILE* fo=fopen("./SAL.TXT", "w+");

    //Vector
    int v[20];
    //Array size
    int arrSize;

    leer(fi, v, &arrSize);
    printf("Longitud: %d", arrSize);
    grabar(v, arrSize, fo);

    //Closing the file
    fclose(fi);
    fclose(fo);
}

void leer(FILE *pf1, int v[], int *longitud){
    int buff;
    int cont = 0;
    while(fscanf(pf1, "%d", &buff) != EOF && cont<20){
        v[cont] = buff;
        cont++;
    }
    *longitud = cont;
}

void grabar(int v[], int longitud, FILE *pf1){
    for(int i=0; i<longitud;i++){
        if(v[i] % 5 == 0){
            fprintf(pf1, "%d ", v[i]);
        }
    }
}
