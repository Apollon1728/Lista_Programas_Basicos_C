#include <stdio.h>


int main(void){

    int x, y, z;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);

    z = x;

    x = y;

    y = z;

    printf("X = %d Y = %d", x, y);


}