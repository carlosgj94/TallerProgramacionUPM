#include <stdio.h>

int main(void){
    int repeat;
    do{
    char latin[50];
    int number = 0;

    int j;
    for(j=0;j<50;j++){
        latin[j] = ' ';
    }

    printf("Write the latin numbers: ");
    scanf("%s", latin);
    
    int i;
    for(i=0;i<50;i++){
        char letter = latin[i];
        char pLetter = latin[i-1];

        switch(pLetter){
            case 'I':
                if(letter!='I' && letter!='.')
                    number -= 1;
                else
                    number += 1;
                break;

            case 'V':
                if(letter!='I' && letter!='V' && letter!='.')
                    number -= 5;
                else
                    number += 5;
                break;

            case 'X':
                if(letter!='I' && letter!='V' && letter!='X' && letter!='.')
                    number -= 10;
                else
                    number += 10;
                printf("%d", number);
                break;

            case 'L':
                if(letter!='I' && letter!='V' && letter!='X' && letter!='L' && letter!='.')
                    number -= 50;
                else
                    number += 50;
                break;

            case 'C':
                if(letter=='D' || letter=='M')
                    number -= 100;
                else
                    number +=100;
                break;
            
            case 'D':
                if(letter == 'M')
                    number -= 500;
                else
                    number += 500;
                break;

            case 'M':
                number += 1000;
                break;
        }
    }
    
    printf("\nThe latin: %s", latin);
    printf(" is: %d", number);

    printf("\nDo you want to repeat the execution? (1 or 0)");
    scanf("%d", &repeat);
    }while(repeat==1);
}
