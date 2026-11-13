#include <stdio.h>

int main (void) {

    int numero, numero_novo;

    printf("Digite um numero inteiro de 4 digitos: ");
    if (scanf("%d", &numero) != 1 || numero < 1000 || numero > 9999) {
        printf("Numero invalido! Digite um numero de 4 digitos.\n");
        return 1; //Erro de entrada
    }

    numero_novo = (numero % 10) * 1000
                + ((numero / 10) % 10) * 100
                + ((numero / 100) % 10) * 10
                + numero / 1000;

    printf("Numero invertido: %04d\n", numero_novo);

    return 0;
}