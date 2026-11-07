#include <stdio.h>


int main(void) {

    float base, altura, area, perimetro;
    
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    area = base * altura;

    perimetro = 2 * (base + altura);

    printf("Area: %.2f | Perimetro: %.2f\n", area, perimetro);
}