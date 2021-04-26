#pragma once

#include "../math/vec3.hpp"
#include "../utils/types.hpp"

struct Camera
{
    vec3 position;
    vec3 direction;
    float aspect;
    Camera(){

    }
};

Camera* init_camera(Config* config);
