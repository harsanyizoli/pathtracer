#pragma once

#include "../math/vec3.hpp"
#include "../utils/types.hpp"

struct Camera
{
    vec3f position;
    vec3f direction;
    float aspect;
};

Camera* init_camera(Config* config);
