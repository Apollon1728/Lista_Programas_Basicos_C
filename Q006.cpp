#include <stdio.h>

int main(void) {

    float raio = 0, volume = 0;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    volume += (4.0 / 3.0) * 3.14159 * (raio * raio * raio);

    printf("volume = %.2f\n", volume);

    return 0;
}