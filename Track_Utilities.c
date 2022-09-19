#include "Lib.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

uint8_t choise;

int main (){

    while(1){
        menu();
        scanf("%d", &choise);
    //if(choise != '')
        switch (choise)
        {
        case 1:
            /* code */
            break;
        case 2:
           set_counters_all();
            break;
        case 3:
            set_bill_all();
            break;
        case 4:
            show_counters();
            break;  
        default:
            break;
        }
    }
    return 0;
}
