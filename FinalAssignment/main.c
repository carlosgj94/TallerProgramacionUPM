#include <stdio.h>
// #include <conio.h> // Only available in windows
#include <curses.h> // Only available in windows
// In linux compile it with: $ gcc -o main main.c -lcurses

int menu();
int getSize();
void rotar (int N, int mat[N][N]);
int esgiro (int N, int A[N], int B[N], int *tamgiro);
void printEsgiro (int result, int tamgiro);

int main(void){
  int option, size;
  do{
    size = getSize();
    option = menu();
    if(option == 1){ // rotar function
      int mat[size][size];

      printf("\nEnter the matrix with a jump between rows: \n");
      // Input example for more clarity
      /*
        1 2 3
        1 2 3
        1 2 3
       */
      for(int i=0; i<size; i++){ // Loop the columns
        for(int j=0; j<size; j++){ // Loop the rows
          scanf("%d", &mat[i][j]);
        }
        fflush(stdin);
      }
      rotar(size ,mat);

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

      result = esgiro(size, A, B, &tamgiro);
      printEsgiro(result, tamgiro); //This only prints the result, to clean the main function
    }

    printf("\nPulse una tecla para continuar...");
    getch();
  }while(option!=0);
}


int menu(){
  int option;
  printf("\nMenu:");
  printf("\n1. Call 'rotar' function");
  printf("\n2. Call 'esgiro' function");
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


// 'rotar' function
void rotar(int N, int mat[N][N]){
  /* int auxMat[N][N]; */
  int i, j; //I will be the rows and j will be the columns

  printf("\nThe rotation is: \n");
  for(i=0; i<N; i++){
    for(j=0; j<N; j++) {
      printf("%d ", mat[j][i]); // The rotation is as simple as printing them in the opposite direction
    }
    printf("\n");
  }
}


// 'esgiro' functions
int esgiro(int N, int A[N], int B[N], int *tamgiro){
  // 1. Find the number where they collide
  // 2. Start moving in the array:
  // 3. If the current element is the last, change it to the first
  int first = A[0];
  int i=0;
  while(B[i] != first) {
    if(i==N) return 0; //First number not found --> Different Array
    i++; // Find the number where they collide
  }
  *tamgiro = N - i; //The size of the turn will be the length - the movement
  int j=0;
  while(j != N){
    if(A[j] != B[i]) return 0;

    // Updating counters
    j++;
    i++;
    if(i==N)i=0;
  }

  return 1;
}

void printEsgiro(int result, int tamgiro){
  if(result == 0){
    printf("\nIt is NOT a 'giro' of the array");
  }
  else{
    printf("\nIt IS a 'giro' of: %d elements", tamgiro);
  }
}
