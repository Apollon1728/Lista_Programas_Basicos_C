#include <stdio.h>

int main (void) {

    int posto, avanco, posto_final;

    printf("Digite o posto inicial (0 a 6) e o avanco: ");
    if (scanf("%d %d", &posto, &avanco) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (posto < 0 || posto > 6) {
        printf("O posto inicial deve estar entre 0 e 6.\n");
        return 1;
    }

    posto_final = (posto + (avanco % 7) + 7) % 7;

    printf("Posto Final: %d\n", posto_final);

    return 0;
}