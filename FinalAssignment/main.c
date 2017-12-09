#include <stdio.h>
#include <conio.h>

int menu();
int getSize();
void rotar (int mat[][]);
int esgiro (int A[], int B[], int *tamgiro);

int main(void){
  int option, size;
  do{
    size = getSize();
    option = menu();
    if(option == 1){ // rotar function
      int mat[size][size];

      for(int i=0; i<size; i++){ // Loop the columns
        for(int j=0; j<size; j++){ // Loop the rows
          scanf("%d", &mat[i][j]);
        }
        fflush(stdin);
      }
      rotar(mat);

    }else if(option == 2){ // esgiro function
      int tamgiro, result;

      int A[size], B[size];

      // Starting to read the arrs
      printf("\nEnter the first array: ");
      for(int i=0; i<size; i++){ // Loop the size of the arr
        scanf("%d", &A[i]); // Insert the element into the arr
      }
      fflush(stdin);

      printf("\nEnter the second array: ");
      for(int i=0; i<size; i++){
        scanf("%d", &B[i]); // Insert the element into the arr
      }
      fflush(stdin);

      result = esgiro(A, B, &tamgiro);
      printEsgiro(result, tamgiro); //This only prints the result, to clean the main function
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


// Helpers
int getSize(){
  int size;
  printf("\nEnter the size of N: ");
  scanf("%d", &size);
  fflush(stdin);
  printf("\n");

  return size;
}


// 'esgiro' functions
int esgiro(int A[], int B[], int *tamgiro){
  *tamgiro = 1;
}

int printEsgiro(int result, int tamgiro){
  if(result == 0){
    printf("\nIt is not a 'giro' of the array");
  }
  else{
    printf("\nIt is a 'giro' of: %d elements", tamgiro);
  }
}
