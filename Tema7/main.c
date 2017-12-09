#include <stdio.h>

int main(void){
    int found = 0;
    char letter;
    char pLetter;
    printf("Escribe palabras separadas por espacios y terminando en punto.\n");
    scanf("%c", &letter);
    
    if(letter == '.') found = 1; //The letter has been found
    if(letter != ' ') 
            printf("%c", letter);
    
    while(found == 0){
        pLetter = letter;
        scanf("%c", &letter);
        if(letter != ' ')
            printf("%c", letter);
        if(' ' == letter && pLetter != ' ') {
            printf(" ");
        } 
        else if('.' == letter) found = 1;
    }
    return 0;
}
