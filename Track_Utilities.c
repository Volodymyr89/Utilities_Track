#include <stdint.h>
#include <stdio.h>

typedef struct Counters{
    float counterwater;
    float counterGas;
    float counterElectrisity;
}Counters_t;

int main (){

    void set_utility_values(void);

    set_utility_values();

    return 0;
}

void set_utility_values(void){
    printf("////////////////////////////////////////////////////////////////////////\n");
    printf("////////////////////////////////////////////////////////////////////////\n\n");
    printf("Показник Вода:\n");
    scanf("%f", &counterwater)
}