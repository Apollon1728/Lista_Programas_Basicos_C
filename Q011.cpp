#include <stdio.h>


int main(void) {

    int segundos = 0;
    int horas, minutos, relogio_segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos - (horas * 3600)) / 60;
    relogio_segundos = segundos - (horas * 3600) - (minutos * 60);

    if(horas < 10 || minutos < 10 || relogio_segundos < 10){
        printf("0%d:0%d:0%d\n", horas, minutos, relogio_segundos);
    }else{
    printf("%d:%d:%d\n", horas, minutos, relogio_segundos);
    }

    return 0;

}