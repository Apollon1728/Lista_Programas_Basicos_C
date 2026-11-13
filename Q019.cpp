#include <stdio.h>

int main (void) {

    long long milissegundos, H, M, S, restante_ms;


    printf("Digite a quantidade de milissegundos: ");
    if (scanf("%lld", &milissegundos) != 1 || milissegundos < 0) {
        printf("Valor invalido. Digite um numero de milissegundos nao negativo.\n");
        return 1;
    }

    H = milissegundos / 3600000;
    M = (milissegundos % 3600000) / 60000;
    S = (milissegundos % 60000) / 1000;
    restante_ms = milissegundos % 1000;

    printf("%02lld:%02lld:%02lld.%03lld\n", H, M, S, restante_ms);

    return 0;
}