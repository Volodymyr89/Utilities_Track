#ifndef LIB_H
#define LIB_H 

#include <stdint.h>
#include <stdio.h>

uint8_t choise = 0;
typedef struct Counters{
    float counterWater;
    float counterWaterDistibution;
    float counterGas;
    float counterGasDistibution;
    float counterElectrisity;
    float counterSofiivka;
}Counters_t;

void showOptions(void);
void set_utility_values(void);
void set_counters_all(Counters_t *Counters);
void SetColorGreen(void);
void SetColorPurple(void);
void SetColorCyan(void);
void ResetColor(void);
void SetColorYellow(void);
void SetColorRed(void);
#endif