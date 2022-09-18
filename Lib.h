#ifndef LIB_H
#define LIB_H 

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdio.h>

typedef struct Counters{
    float counterWater;
    float counterWaterDistibution;
    float counterGas;
    float counterGasDistibution;
    float counterElectrisity;
    float counterSofiivka;
}Counters_t;

void menu(void);
void set_utility_values(void);
void set_counters_all(Counters_t *Counters);
void SetColorGreen(void);
void SetColorPurple(void);
void SetColorCyan(void);
void ResetColor(void);
void SetColorYellow(void);
void SetColorRed(void);

#ifdef __cplusplus
}
#endif

#endif