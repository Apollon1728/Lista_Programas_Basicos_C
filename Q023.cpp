#include <stdio.h>
#include <limits.h>

int main(void) {

    int A, B;
    int soma;

    printf("Digite dois numero inteiros para soma: ");

    if(scanf("%d %d", A, B); A + B >= INT_MAX) {

        printf("OVERFLOW DETECTADO!");
    }else {

        printf("Resultado: %d", A + B);

    }

    return 0;
}