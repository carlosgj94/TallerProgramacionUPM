#include<stdio.h>

int main(){
    int a;
    int b;
    int c;

    printf("Escribe un valor para a: ");
    scanf("%d", &a);
    printf("Escribe un valor para b: ");
    scanf("%d", &b);
    printf("Escribe un valor para c: ");
    scanf("%d", &c);

    if(a>b && b>c){
        printf("1"); 
    }
    else{
        printf("0");
    }

    return 0;
}
