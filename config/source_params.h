//Fisier pentru variabilele globale configurabile
#ifndef SOURCE_PARAMS_H
#define SOURCE_PARAMS_H
namespace SourceParams
{
    constexpr float V_LINE = 400.0f; //Line to Line RMS Value
    constexpr float FREQ = 50.0f; //Frequency in Hz
    constexpr float DT = 1e-4f; //Time Step for simulation
    
} 



#endif

#ifndef ADC_PARAMS_H
#define ADC_PARAMS_H
namespace ADCParams
{
    constexpr float BIT_RESOLUTION = 12; 
    constexpr float V_REF = 800.0f; 
    
} 
#endif