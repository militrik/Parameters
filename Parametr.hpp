//
// Created by militrik on 09.05.23.
//

#ifndef PARAMETR_PARAMETR_HPP
#define PARAMETR_PARAMETR_HPP

#include <cstdint>

struct Parametr_t {
    const char * const name;
    const char * const dimension;
    const uint16_t * minValue;
    const uint16_t * maxValue;
    //const uint16_t (* pValues)[PROGRAMS_AMOUNT];
    const char * const * const specialNames;
    uint16_t (* specialFunc)(uint16_t);
};

#endif //PARAMETR_PARAMETR_HPP
