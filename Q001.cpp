#include <stdio.h>

int main() {
    int a, b;
    int resultado = 0;
    int resto = 0;

    printf("Escreva dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    if (b == 0) {
        printf("Nao e possivel dividir por zero!\n");
        return 1; //Erro de divisao por zero
    }

    resultado = a / b;
    resto = a % b;

    printf("Quociente: %d, Resto: %d\n", resultado, resto);

    return 0;
}