#include <iostream>
#include <iomanip>
#include <fstream>
#include "../include/TriFazicSource.h"
#include "../config/source_params.h"
#include "../include/Rectifier.h"
#include "../include/ADC.h"

int main(){

   TriFazicSource source(SourceParams::V_LINE, SourceParams::FREQ);
    Rectifier rectifier;
    ADC adc(ADCParams::BIT_RESOLUTION, ADCParams::V_REF);

   std::ofstream fout("../plots/signals.csv");
   fout<<"t,Va,Vb,Vc\n";

   for(float t = 0;t<=0.04f; t+=SourceParams::DT){

        float Va, Vb, Vc;

        source.getVoltages(t,Va,Vb,Vc);
        //fout << t << "," << Va << "," << Vb << "," << Vc << "\n"; //Pentru a plota semnalele trifazate

        //Semnalul redresat
        float Vdc = rectifier.rectifiedVoltage(Va,Vb,Vc);
        //Semnalul digital
        int adcValue = adc.sample(Vdc);

        fout << t << "," << Va << "," << Vb << "," << Vc << "," << Vdc << "," << adcValue << "\n";
    }

    fout.close();
    std::cout << "Output saved to signals.csv\n";
    return 0;



}