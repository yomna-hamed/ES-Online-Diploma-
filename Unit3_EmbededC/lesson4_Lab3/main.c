/*
    Unit 3 Lesson 4 (Lab 3)
    Eng : Yomna Hamed
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>

#define SYSCTL_RCGR2_R (*((volatile unsigned long*)0x400FE108))
#define GPIO_PORTF_DEN_R (*((volatile unsigned long*)0x4002551C))
#define GPIO_PORTF_DIR_R (*((volatile unsigned long*)0x40025400))
#define GPTO_PORTF_DATA_R (*((volatile unsigned long*)0x400253FC))

int main() {
    volatile unsigned long clock_time,delay;
    SYSCTL_RCGR2_R = 0x00000020;
    for(clock_time = 0;clock_time<200;clock_time++);
    GPIO_PORTF_DIR_R |= 1<<3;    // set pin 3 as output 
    GPIO_PORTF_DEN_R |= 1<<3;    // enable pin 3 port f
    while (1) {
        GPTO_PORTF_DATA_R |= 1<<3;
        for (int delay = 0;delay<200000;delay++);
        GPTO_PORTF_DATA_R &= ~(1<<3);
        for (int delay = 0;delay<200000;delay++);
    }
    
    return 0;
}

