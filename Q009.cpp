#include <stdio.h>


int main(void) {

    int decimal = 0;

    char caractere = ' ';

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    decimal = (int)caractere;

    printf("Char : %c | Dec: %d | Hex : 0x%02X\n", caractere, decimal, (unsigned char)caractere);

    return 0;
}