#include "../include/ADC.h"

ADC::ADC(int bits, float v_ref) : v_ref(v_ref) {
    resolution = (1 << bits) - 1; // Ex: 2^12 = 4095
}

int ADC::sample(float analogVoltage) {
    if (analogVoltage < 0) analogVoltage = 0;
    if (analogVoltage > v_ref) analogVoltage = v_ref;
    
    return static_cast<int>((analogVoltage / v_ref) * resolution);
}
