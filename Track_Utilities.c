#include <stdint.h>
#include <stdio.h>

uint8_t choise = 0;
typedef struct Counters{
    float counterWater;
    float counterWaterDistibution;
    float counterGas;
    float counterGasDistibution;
    float counterElectrisity;
}Counters_t;

void showOptions(void);
void set_utility_values(void);
void SetColorGreen(void);
void SetColorPurple(void);
void SetColorCyan(void);
void ResetColor(void);
void SetColorYellow(void);
void SetColorRed(void);

int main (){
    showOptions();

   
    while(1){

        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            /* code */
            break;
        case 2:
            set_counters_all();
            break;
        case 3:
            /* code */
            break;    
        default:
            break;
        }


    }
    return 0;
}

void set_utility_values(void){
    printf("\033[0;31m");
    printf("////////////////////////////////////////////////////////////////////////\n");
    printf("////////////////////////////////////////////////////////////////////////\n\n");
    printf("Показник Вода:\n");
    //scanf("%f", &counterwater)
}

void showOptions(void){
    ResetColor();
    SetColorYellow();
    printf("***********************************************************************************************************************\n");
    printf("***********************************************************************************************************************\n");
    printf("***********************************************************************************************************************\n");
    SetColorGreen();
    printf("                                                 MENU:\n\n");
    printf("Подивитись Показники/Оплату Попередній Місяць натиснути - 1\n");
    printf("Записати Показники натиснути - 2\n");
    printf("Записати Оплату Показників натиснути - 3\n");
    ResetColor();
}

void set_counters_all(){

printf("Ввести значення Вода:\n");

printf("Ввести значення Вода розподіл:\n");

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