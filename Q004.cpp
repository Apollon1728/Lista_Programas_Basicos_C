#include <stdio.h>

int main(void) {
    float Val_hora = 0, INSS = 0, Salario_bruto = 0, Salario_liquido = 0;
    int Qnt_horas_mes = 0;

    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &Val_hora);

    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%d", &Qnt_horas_mes);

    printf("Digite a porcentagem do INSS: ");
    scanf("%f", &INSS);

    Salario_bruto = Val_hora * Qnt_horas_mes;

    INSS = INSS * Salario_bruto / 100;
    
    Salario_liquido = Salario_bruto - INSS;

    printf("Bruto: R$%.2f | INSS: %.2f | Liquido: %.2f", Salario_bruto, INSS, Salario_liquido);

    return 0;
}