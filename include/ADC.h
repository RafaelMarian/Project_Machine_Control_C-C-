#ifndef ADC_H
#define ADC_H

class ADC {
public:
    ADC(int bits, float v_ref);

    int sample(float analogVoltage);

private:
    int resolution;
    float v_ref;
};

#endif
