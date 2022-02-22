#include "power.h"

extern double power(double base, int exponet) 
{ 
    double result = base;
    int i = 0;
    
    if (exponet == 0)
        return 1;

    for (i = 1; i < exponet; ++i) {
        result = result * base;
    }

    return result;
    
}