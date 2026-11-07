#include <stdio.h>

int main(void) {

    float n1, n2, resultado = 0;
    char turma;

    printf("Digite as notas do aluno: ");
    scanf("%f %f", &n1, &n2);

    printf("Digite a turma do aluno: ");
    scanf(" %c", &turma);

    resultado = ((n1*3) + (n2*7)) / (3 + 7);

    printf("A media do aluno da turma %c e: %.2f\n", turma, resultado);
    
    return 0;
}