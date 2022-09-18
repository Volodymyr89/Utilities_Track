#include "Lib.h"
#include <stdint.h>
#include <stdio.h>

uint8_t choise;

int main (){

menu();
    while(1){

        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            /* code */
            break;
        case 2:
           set_counters_all(&ptr_CNT);
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
