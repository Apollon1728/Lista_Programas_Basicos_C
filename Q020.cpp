#include <stdio.h>

int main (void) {

    float altura, largura, area;
    int latas = 15, qnt_latas;

    printf("Digite a altura e largura da parede: ");
    scanf("%f %f", &largura, &altura);

    area = altura * largura;
    qnt_latas = area / latas;

    if (qnt_latas * latas < area) {
        qnt_latas++;
    }

    printf("Area: %.1f m2 || Latas a serem usadas: %d", area, qnt_latas);

    return 0;

}