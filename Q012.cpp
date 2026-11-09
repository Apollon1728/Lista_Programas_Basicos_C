#include <stdio.h>

int main(void) {

    int valor = 0, i, quantidade = 0;


    printf("Digite o valor inteiro: ");

    if (scanf("%d", &valor) != 1 || valor < 0) {

        printf("Valor inválido!\n");
        return 1;

    }

    int resto = valor;
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};
    int total_cedulas = 7;

    for (i = 0; i < total_cedulas; i++) {

        quantidade = resto / cedulas[i];
        resto = resto % cedulas[i];

        if (cedulas[i] == 1) {
            printf("%d de R$1", quantidade);
        }else {
            printf("%d de R$%d\n", quantidade, cedulas[i]);
        }

    }

    printf("\n");

    return 0;

}