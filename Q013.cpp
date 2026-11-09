#include <stdio.h>

int main(void) {

    int a, b;

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    a = a + b;

    b = a - b;

    a = a - b;

    printf("%d %d\n", a, b);

    return 0;

}