#include <stdio.h>


int main(void) {

    float preco, porcentagem, reajuste;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite a porcentagem de reajuste: ");
    scanf("%f", &porcentagem);

    reajuste = preco * (porcentagem / 100);

    printf("Novo preco: R$ %.2f\n", (preco + reajuste));

    return 0;

}