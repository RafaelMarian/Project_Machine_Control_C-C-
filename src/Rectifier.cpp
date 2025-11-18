
#include "../include/Rectifier.h"
float Rectifier::rectifiedVoltage(float va, float vb, float vc){

    float vab = va - vb;
    float vbc = vb - vc;
    float vca = vc - va;

    return std::max({vab, vbc, vca, 0.0f});
}