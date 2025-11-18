#ifndef TRIFAZICSOURCE_H
#define TRIFAZICSOURCE_H
#include <cmath>
class TriFazicSource{
      private:

        float V_rms;
        float V_peak;
        float omega;

    public:

        TriFazicSource(float V_line, float freq);
        void getVoltages(float t, float &Va, float &Vb, float &Vc);
  
};
#endif