#include <stdio.h>

int main(void) {
    
    float c, f, result = 0;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    result = (f - 32) * 5 / 9;

    printf("A temperatura em Celsius e: %.2f C\n", result);

    return 0;
}