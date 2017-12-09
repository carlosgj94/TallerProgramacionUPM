#include <stdio.h>

char menuOption();
float getFactorial(float num); 
float getExponential(float num);
void getFibonacci(int num);

int main(void){
    int menu;
    float num;
    do{
        //Calling the menu
        menu = menuOption();

        if(menu == 'a'){
            printf("Introduce un numero: ");
            scanf("%f", &num);
            if(num >= 0.0f && num <= 20.0f){
                //getFactorial(num);
                printf("\nEl factorial es: %f", getFactorial(num));
            }else {
                printf("\nNumero no enter 0 y 20.\n");
            }

        } if(menu == 'b'){
            printf("Introduce un numero: ");
            scanf("%f", &num);
            if(num >= 0.0f && num <= 20.0f){
                printf("\nEl exponencial es: %f", getExponential(num));
            }else {
                printf("\nNumero no enter 0 y 20.\n");
            }

        } if(menu == 'c'){
            printf("Introduce un numero: ");
            scanf("%f", &num);
            if(num >= 0.0f && num <= 20.0f){
                getFibonacci(num);
            }else{
                printf("\nNumero no enter 0 y 20.\n");
            }
        }

    }while(menu!='z');
    return 0;
}

char menuOption(){
    char menu;
    printf("\na. Calcular el factorial de un número.");
    printf("\nb. Calcular la n-ésima potencia de un número.");
    printf("\nc. Escribir los n primeros números de la serie de fibonacci. ");
    printf("\nz. Salir");
    printf("\n\tTeclear opcion: ");
    scanf("%c", &menu);
    return menu;
}

float getFactorial(float num){
    if(num == 0 || num == 1) return 1.0f;
    else return num * getFactorial(num-1.0f);
}
float getExponential(float num){
    printf("No entiendo la pregunta");
    return 0;
    }

void getFibonacci(int num){
    int count = 2;
    int fibNum = 0;
    int fibNumNext = 1;

    int help;
    while(count < num){
        help = fibNum;
        fibNum = fibNumNext;
        fibNumNext = fibNumNext + help;

        count++;
    }
    if(num==0) printf("El numero es el: 0");
    else if(num == 1) printf("El numero es el: 1");
    else printf("El numero es: %d", fibNumNext);
}
