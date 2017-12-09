#include <stdio.h>
#include <math.h>

//Function declarations
int menuOption();
void quitarCeros();
int esPrimo(int prime);
void MPrimeros(int number);

int main(void){
    //Student number and name
    printf("Numero de matricula: BJ0120 // Gonzalez Juarez, Carlos\n");

    int menu;
    do{
        //Calling the menu
        menu = menuOption();
        if(menu == 1){
            quitarCeros();
        }
        else if(menu == 2){
            int number;
            printf("\nIntroduzca un numero: ");
            scanf("%d", &number);
            number = esPrimo(number);
            if(number == 1)
                printf("\nEs primo. ");
            else
                printf("\nNo es primo. ");
        }
        else if(menu == 3){
            int number1;
            printf("\nIntroduzca un numero: ");
            scanf("%d", &number1);
            MPrimeros(number1);
        }
    }while(menu!=4);

    return 0;
}

int menuOption(){
    int menu;
    printf("\n\n\tMenu general\n");
    printf("\n1. Quitar ceros consecutivos.");
    printf("\n2. Funcion primo.");
    printf("\n3. M numeros primos.\n");
    printf("\n4. Salir");
    printf("\n\tTeclear opcion: ");
    scanf("%d", &menu);
    return menu;
}

void quitarCeros(){
    int numbers[256];
    int i = 0;
    int input;
    //We read all the input values
    printf("\nIntroduce los valores deseados: (acaba en -1) ");
    do{
        scanf("%d", &input);
        numbers[i] = input;
        i+=1;
    }while(input!=-1);

    //Erasing numbers
    int j;
    int pNumber = -1;
    for(j = 0; j<i-1; j++){
        if(pNumber != 0 || numbers[j] != 0){
            printf("%d", numbers[j]);
        }
        pNumber = numbers[j];
    }
}

int esPrimo(int prime){
    if(prime > 1)
        for (int i = 2 ; i <= (int) sqrt((float) prime) ; i++)
            if ( prime%i == 0 )
                return 0;
    return 1;
}

void MPrimeros(int prime){
    if(prime > 0 && prime < 101){
        for (int i=2; i<prime; i++){
            int isPrime=1;
            for (int j=2; j*j<=i; j++)
                if (i%j == 0){
                    isPrime=0;
                    break;    
                }
            if(isPrime == 1) 
                printf("%d ", i);
        }
    }
}
