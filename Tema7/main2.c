#include <stdio.h>

int creciente(int *num);

int main(void){
    int num;
    int i = 0;
    int result = creciente(&num);

    if(result == 1)
        printf("Es estrictamente creciente");
    else if(result == -1)
        printf("La entrada es vacia");
    else if(result == 0){
        printf("No es estrictamente creciente por el punto: %d", num);
    }
    return 0;
}

int creciente(int *num){
    int ant;
    printf("Escribe numeros: ");
    if(scanf("%d", &ant) == EOF)
        return -1;
    else
        while(scanf("%d", num) != EOF){
            if(ant > *num)
                return 0;
            ant = *num;
        }
    return 1;


}
