#include <stdio.h>


int main(void) {

    int segundos = 0;
    int horas, minutos, relogio_segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    relogio_segundos = (segundos % 3600) % 60;

    
    printf("%02d:%02d:%02d\n", horas, minutos, relogio_segundos);
    

    return 0;

}