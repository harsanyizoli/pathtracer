#include "camera.hpp"

Camera* init_camera(Config* config){
    auto c = new Camera {};
    c->position = config->position;
    c->direction = config->direction;
    c->aspect = (float)config->width/config->height;
}