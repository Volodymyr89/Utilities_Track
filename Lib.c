#include "Lib.h"

void set_utility_values(void){
    printf("\033[0;31m");
    printf("////////////////////////////////////////////////////////////////////////\n");
    printf("////////////////////////////////////////////////////////////////////////\n\n");
    printf("Показник Вода:\n");
    //scanf("%f", &counterwater)
}


 void menu(void){
    ResetColor();
    SetColorYellow();
    printf("*************************************************************************************************************\n");
    printf("*************************************************************************************************************\n");
    printf("*************************************************************************************************************\n");
    SetColorGreen();
    printf("                                                 MENU:\n\n");
    printf("Подивитись Показники/Оплату Попередній Місяць натиснути - 1\n");
    printf("Записати Показники натиснути - 2\n");
    printf("Записати Оплату Показників натиснути - 3\n");
    ResetColor();
}

void set_counters_all(Counters_t *Counters){
    Counters_t *ptr_CNT;

    SetColorPurple();
    printf("Ввести значення Вода:\n");
    scanf("%f", &(Counters->counterWater));
    printf("Ввести значення Вода розподіл:\n");
    scanf("%f", &Counters->counterWaterDistibution);
    printf("Ввести значення Газ:\n");
    scanf("%f", &Counters->counterGas);
    printf("Ввести значення Газ розподіл:\n");
    scanf("%f", &Counters->counterGasDistibution);
    printf("Ввести значення Електрика:\n");
    scanf("%f", &Counters->counterElectrisity);
    printf("Ввести значення СофіЇвка:\n");
    scanf("%f", &Counters->counterSofiivka);
    printf("***********************************Все, записали********************************************\n");
    ResetColor();
}


void SetColorGreen(void){
    printf("\033[1;32m");
}
void SetColorPurple(void){
    printf("\033[0;35m");
}
void SetColorCyan(void){
    printf("\033[0;36m");
}
void SetColorYellow(void){
    printf("\033[0;33m");
}
void SetColorRed(void){
    printf("\033[0;31m");
}
void ResetColor(void){
    printf("\033[0m");
}