#include "Lib.h"
#include "malloc.h"

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

void set_counters_all(void){
    typedef struct Counters{
    float month_year;
    float counterWater;
    float counterWaterDistibution;
    float counterGas;
    float counterGasDistibution;
    float counterElectrisity;
    float counterSofiivka;
}Counters_t;
    Counters_t Counters;
    FILE *fileptr=NULL;
    
    SetColorPurple();
    printf("Ввести місяць і рік:\n");
    scanf("%f", &(Counters.month_year));
    printf("Ввести значення Вода:\n");
    scanf("%f", &(Counters.counterWater));
    printf("Ввести значення Вода розподіл:\n");
    scanf("%f", &(Counters.counterWaterDistibution));
    printf("Ввести значення Газ:\n");
    scanf("%f", &(Counters.counterGas));
    printf("Ввести значення Газ розподіл:\n");
    scanf("%f", &(Counters.counterGasDistibution));
    printf("Ввести значення Електрика:\n");
    scanf("%f", &(Counters.counterElectrisity));
    printf("Ввести значення СофіЇвка:\n");
    scanf("%f", &(Counters.counterSofiivka));

    fileptr = fopen( "C:/Learn_C/Utilities/Utilities_Track/Utilities_Data/File.txt", "r+");
    if (fileptr != NULL){
      fprintf(fileptr, "%f\n", Counters.month_year);
      fprintf(fileptr, "%.2f%.2f%.2f%.2f%.2f%.2f", Counters.counterWater, Counters.counterWaterDistibution, Counters.counterGas, Counters.counterGasDistibution, Counters.counterElectrisity, Counters.counterSofiivka);
      
      fclose(fileptr);
      SetColorYellow();
      printf("*********************************** Все, записали ********************************************\n");
    }
    else{
        printf("Неможливо створити файл!!!\n");
    }
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