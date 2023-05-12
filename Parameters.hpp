#ifndef PARAMETR_PARAMETERS_HPP
#define PARAMETR_PARAMETERS_HPP

#include <cstdint>

struct Parameter_t {
    const char * const name;
    const char * const dimension;
    const uint16_t * minValue;
    const uint16_t * maxValue;
    char * (* convertVar)(uint16_t);
};

union Parameter_u {
    struct {
        Parameter_t parametr1;
        Parameter_t parametr2;
        Parameter_t parametr3;
    } byName;
    Parameter_t byPosition[sizeof(byName)];
};

extern const Parameter_u xTableUserExt;

#endif //PARAMETR_PARAMETERS_HPP
