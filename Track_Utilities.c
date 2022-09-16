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
            /* code */
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
    printf("////////////////////////////////////////////////////////////////////////\n");
    printf("////////////////////////////////////////////////////////////////////////\n\n");
    printf("Показник Вода:\n");
    //scanf("%f", &counterwater)
}

void showOptions(void){
    printf("**************************************************************************************\n");
    printf("**************************************************************************************\n\n");
    printf("                           MENU:\n\n");
    printf("Подивитись Показники Попередній Місяць натиснути - 1\n");
    printf("Записати Показники натиснути - 2\n");
    printf("Записати Оплату Показників натиснути - 3\n");
}