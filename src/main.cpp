#include <iostream>
#include <iomanip>
#include <fstream>
#include "../include/TriFazicSource.h"
#include "../config/source_params.h"


int main(){

   TriFazicSource source(SourceParams::V_LINE, SourceParams::FREQ);

   std::ofstream fout("../plots/trifazic_output.csv");
   fout<<"t,Va,Vb,Vc\n";

   for(float t = 0;t<=0.04f;t+=SourceParams::DT){

        float Va, Vb, Vc;
        source.getVoltages(t,Va,Vb,Vc);
        fout << t << "," << Va << "," << Vb << "," << Vc << "\n";
    }

    fout.close();
    std::cout << "Output saved to trifazic_output.csv\n";
    return 0;



}