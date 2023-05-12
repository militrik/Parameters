#include <cstdint>
#include "Parameters.hpp"
#include <cstdio>

uint16_t minValue = 5;
uint16_t maxValue = 7;

const Parameter_u xTableUserExt = {
        .byName{
                .parametr1 {
                        .name = "Parameter 1",
                        .dimension = "m",
                        .minValue = &minValue,
                        .maxValue = &maxValue,
                        .convertVar = [](uint16_t var) -> char * {
                            static char buf[3];
                            snprintf(buf, sizeof(buf), "%d", var);
                            return buf;
                        },
                },
                .parametr2 {
                        .name = "Parameter 2",
                        .dimension = nullptr,
                        .minValue = new (const uint16_t){0},
                        .maxValue = new (const uint16_t){2},
                        .convertVar = [](uint16_t var) -> char * {
                            const char *const specialValues[] = {"Special1", "Special2", "Special3"};
                            return const_cast<char *>(specialValues[var]);
                        },
                },
                .parametr3 {
                        .name = "Parameter 3",
                        .dimension = nullptr,
                        .minValue = new (const uint16_t){105},
                        .maxValue = &maxValue,
                        .convertVar = [](uint16_t var) -> char * {
                            static char buf[5];
                            snprintf(buf, sizeof(buf), "%.2f", (float) var / 1000.0);
                            return buf;
                        },
                }
        }
};