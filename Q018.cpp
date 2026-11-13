#include <stdio.h>
#include <math.h>

int main (void) {

    double aporte = 0, montante_final = 0;
    double i, prazo_meses;

    printf("Digite o aporte inicial: ");
    if (scanf("%lf", &aporte) != 1) {
        printf("Valor invalido. Use ponto para casas decimais.\n");
        return 1;
    }

    printf("Digite a taxa de juros mensais em decimal (ex.: 0.015 para 1.5%%): ");
    if (scanf("%lf", &i) != 1) {
        printf("Taxa invalida. Use ponto para casas decimais.\n");
        return 1;
    }
    printf("Digite o prazo em meses: ");
    if (scanf("%lf", &prazo_meses) != 1) {
        printf("Prazo invalido.\n");
        return 1;
    }

    montante_final = aporte * pow(1 + i, prazo_meses);

    printf("Montante = R$ %.2f\n", montante_final);

    return 0;
}