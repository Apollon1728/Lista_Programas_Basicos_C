#include <stdio.h>

int main(void) {

    int km;
    float combustivel_gasto, media = 0;

    printf("Digite a quantidade de km percorridos: ");
    scanf("%d", &km);

    printf("Digite a quantidade de combustivel gasto (em litros): ");
    scanf("%f", &combustivel_gasto);

    media = km / combustivel_gasto;

    printf("Consumo: %.3f km/l\n", media);

    return 0;
}