#include <stdio.h>
#include <math.h>

int main(void) {

    float X_1, Y_1, X_2, Y_2;
    double distancia;

    printf("Digite as coordenadas do ponto 1 (X1, Y1): ");
    scanf("%f %f", &X_1, &Y_1);

    printf("Digite as coordenadas do ponto 2 (X2, Y2): ");
    scanf("%f %f", &X_2, &Y_2);

    distancia = sqrt(pow(X_1 - X_2, 2) + pow(Y_1 - Y_2, 2));

    printf("distancia = %.4f\n", distancia);

    return 0;

}