#include <stdio.h>
#include <conio.h>

int menu();
int getSize();
int esgiro (int A[], int B[], int *tamgiro);
void rotar (int N, int mat[N][N]);

int main(void){
  int option, size;
  do{
    size = getSize();
    option = menu();
    if(option == 1){ // rotar function
    }else if(option == 2){ // esgiro function
      int tamgiro, number;

      int A[size], B[size];

      // Starting to read the arrs
      printf("\nEnter the first array: ");
      for(int i=0; i<size; i++){ // Loop the size of the arr
        scanf("%d", &A[i]); // Insert the element into the arr
      }

      printf("\nEnter the second array: ");
      fflush(stdin);
      for(int i=0; i<size; i++){
        scanf("%d", &B[i]); // Insert the element into the arr
      }

      esgiro(A, B, &tamgiro);
    }

    printf("\nPulse una tecla para continuar...");
    getch();
  }while(option!=0);
}

int menu(){
  int option;
  printf("\nMenu:");
  printf("\n1. Call 'esgiro' function");
  printf("\n2. Call 'rotar' function");
  printf("\n\n0. Exit\n");
  scanf("%d", &option);
  fflush(stdin);
  printf("\n");

  return option;
}

int getSize(){
  int size;
  printf("\nEnter the size of N: ");
  scanf("%d", &size);
  fflush(stdin);
  printf("\n");

  return size;
}

/* int esgiro(int A[], int B[], int *tamgiro){ */
/*   *tamgiro = 1; */
/* } */
