#include<stdio.h>

int main(){
    float price;
    int discount;
    int quantity;
    
    printf("Introduce los siguientes valores: ");
    printf("\nPrecio de los pantalones  (dato real): ");
    scanf("%f",&price);
    printf("\nDescuento (dato entero): ");
    scanf("%d", &discount);
    printf("\nCantidad que se quiere comprar (dato entero): ");
    scanf("%d", &quantity);

    float finalPrice = price-(price*discount)/100;
    printf("El precio de cada pantalon es: %.3f", finalPrice);
    printf("\nEl importe total es: %.3f", finalPrice*quantity);
    return 0;
}
