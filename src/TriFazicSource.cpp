#include "TriFazicSource.h"

TriFazicSource::TriFazicSource(float V_line, float freq){
    V_rms = V_line/std::sqrt(3.0f);
    V_peak = V_rms*std::sqrt(2.0f);
    omega = 2*3.14159265358979f*freq;
}

void TriFazicSource::getVoltages(float t, float &Va, float &Vb, float &Vc){

    Va = V_peak * std::sin(omega * t);
    Vb = V_peak * std::sin(omega * t - 2 * 3.14159265358979f / 3);
    Vc = V_peak * std::sin(omega * t + 2 * 3.14159265358979f / 3);
}