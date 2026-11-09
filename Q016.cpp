#include <stdio.h>

int main(void) {

    int numero, primeiro, segundo, terceiro, soma;

    printf("Digite um numero entre 100 ate 999: ");
    scanf("%d", &numero);

    primeiro = numero / 100;
    segundo = (numero / 10) % 10;
    terceiro = numero % 10;

    soma = primeiro + segundo + terceiro;

    printf("Soma dos digitos = %d (%d + %d + %d)\n", soma, primeiro, segundo, terceiro);

    return 0;

}