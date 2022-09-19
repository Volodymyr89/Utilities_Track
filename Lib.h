#ifndef LIB_H
#define LIB_H 

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdio.h>

void menu(void);
void set_utility_values(void);
void set_counters_all(void);
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