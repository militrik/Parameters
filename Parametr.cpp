//
// Created by militrik on 09.05.23.
//

#include <cstdio>
#include "Parametr.hpp"

uint16_t minValue = 25;
uint16_t maxValue = 45;

const Parametr_t myParams[] = {
        {
                .name = "Parameter 1",
                .dimension = "m",
                .minValue = &minValue,
                .maxValue = new (const uint16_t){99},
                .specialNames = (const char *[]) {"Special1", "Special2", "Special3"},
                .specialFunc = nullptr,

        },
        {
                .name = "Parameter 2",
                .dimension = "l",
                .minValue = new (const uint16_t){105},
                .maxValue = &maxValue,
                .specialNames = nullptr,
                .specialFunc = new (fun2(uint16_t var){return var}),
        },
};

union Parametr_u {
    struct {
        Parametr_t parametr1;
        Parametr_t parametr2;
        Parametr_t parametr3;
        Parametr_t parametr4;
        Parametr_t parametr5;
    }params;
    Parametr_t parametrArr[sizeof(params)/ sizeof(Parametr_t)];
};