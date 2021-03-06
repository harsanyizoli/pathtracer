#pragma once

#include <cstdint>
#include "../math/vec3.hpp"
typedef struct pixel
{
    uint8_t r;
    uint8_t g;
    uint8_t b;
} pixel;

typedef struct Config {
    int width;
    int height;
    vec3f position;
    vec3f direction;
    int max_recursions;
} Config;