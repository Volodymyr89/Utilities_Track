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
    printf("Записати Показники  натиснути - 2\n");
    printf("Записати Оплату Показників натиснути - 3\n");
    printf("Знайти показники за місяць і рік - 4\n");
    ResetColor();
}

void set_counters_all(void){
    typedef struct Counters{
    int month_year;
    float counterWater;
    float counterWaterDistibution;
    float counterGas;
    float counterGasDistibution;
    float counterElectrisity;
    float BillSofiivka;
}Counters_t;

    Counters_t Counters;
    FILE *fileptr=NULL;
    SetColorPurple();
    printf("Ввести місяць і рік за які вносятся покази (напр. 82022)):\n");
    scanf("%f", &(Counters.month_year));
    printf("Ввести покази Вода:\n");
    scanf("%f", &(Counters.counterWater));
    printf("Ввести покази Вода розподіл:\n");
    scanf("%f", &(Counters.counterWaterDistibution));
    printf("Ввести покази Газ:\n");
    scanf("%f", &(Counters.counterGas));
    printf("Ввести покази Газ розподіл:\n");
    scanf("%f", &(Counters.counterGasDistibution));
    printf("Ввести покази Електрика:\n");
    scanf("%f", &(Counters.counterElectrisity));
    printf("Ввести покази СофіЇвка:\n");
    scanf("%f", &(Counters.BillSofiivka));

    fileptr = fopen( "C:/Learn_C/Utilities/Utilities_Track/Utilities_Data/Counters.txt", "r+");
    int c = getc(fileptr);
    if (fileptr != NULL){
        while(c!=EOF){
            c = getc(fileptr);
        }
      fprintf(fileptr, "%s\n", "Counters");
      fprintf(fileptr, "%.4f\n", Counters.month_year);
      fprintf(fileptr, "%.1f%.1f%.1f%.1f%.1f%.1f\n", Counters.counterWater, Counters.counterWaterDistibution, Counters.counterGas, Counters.counterGasDistibution, Counters.counterElectrisity, Counters.BillSofiivka);
      
      fclose(fileptr);
      SetColorYellow();
      printf("*********************************** Все, записали ********************************************\n");
    }
    else{
        printf("Неможливо створити файл!!!\n");
    }
    ResetColor();
}

void set_bill_all(void){
    typedef struct Counters{
    int month_year;
    float BillWater;
    float BillWaterDistibution;
    float BillGas;
    float BillGasDistibution;
    float BillElectrisity;
}Bill_t;

    Bill_t Bills;
    FILE *fileptr=NULL;
    SetColorPurple();
    printf("Ввести місяць і рік за які вносятся покази (напр. 82022):\n");
    scanf("%f", &(Bills.month_year));
    printf("Ввести оплату Вода:\n");
    scanf("%f", &(Bills.BillWater));
    printf("Ввести оплату Вода розподіл:\n");
    scanf("%f", &(Bills.BillWaterDistibution));
    printf("Ввести оплату Газ:\n");
    scanf("%f", &(Bills.BillGas));
    printf("Ввести оплату Газ розподіл:\n");
    scanf("%f", &(Bills.BillGasDistibution));
    printf("Ввести оплату Електрика:\n");
    scanf("%f", &(Bills.BillElectrisity));

    fileptr = fopen( "C:/Learn_C/Utilities/Utilities_Track/Utilities_Data/Bills.txt", "r+");
    int c = getc(fileptr);
    if (fileptr != NULL){
        while(c!=EOF){
            c = getc(fileptr);
        }
      fprintf(fileptr, "%s\n", "Bills");
      fprintf(fileptr, "%.4f\n", Bills.month_year);
      fprintf(fileptr, "%.1f%.1f%.1f%.1f%.1f\n", Bills.BillWater, Bills.BillWaterDistibution, Bills.BillGas, Bills.BillGasDistibution, Bills.BillElectrisity);
      
      fclose(fileptr);
      SetColorYellow();
      printf("*********************************** Все, записали ********************************************\n");
    }
    else{
        printf("Неможливо створити файл!!!\n");
    }
    ResetColor();
}

void show_counters(void){
    int a = 0;
    char *str = "Покази не знайдено";
    int monthyear;
    FILE *fileptr = NULL;
    SetColorPurple();
    printf("Введіть місяць і рік показів (місяць.рік):\n");
    scanf("%d", &monthyear);
    fileptr = fopen( "C:/Learn_C/Utilities/Utilities_Track/Utilities_Data/Counters.txt", "r");
    int c = getc(fileptr);
     while(c != EOF)
     {
        fscanf(fileptr,"%d", &a);
         if(a == monthyear) 
        {
            str = "Знайдено!!!";
        }
        c = getc(fileptr);
    } //end of while loop 
    printf("%s\n", str);
    fclose(fileptr);
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