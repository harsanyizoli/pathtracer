#include <iostream>
#include <vector>
#include <random>
#include <thread>
#include <algorithm>

#include "src/utils/types.hpp"
#include "src/utils/image_write.hpp"

#include "src/utils/camera.hpp"

int main(int argc, char const *argv[])
{
    
    Config config = {
        .width = 16U,
        .height = 9U,
        .position = {0.0, 0.0, 0.0},
        .direction = {0.0, 0.0, -1.0}
    };
    Camera camera = {};
    
    std::vector<pixel> output = {};
    output.resize(config.width * config.height);
    std::fill(output.begin(), output.end(), pixel{230, 35, 232});

    for(int i = 0; i < config.width; i++){
        for(int j = 0; j < config.height; j++){

        }
    }
    write_image_blocking("output.png", config.width, config.height, 3, static_cast<void*>(output.data()), config.width * sizeof(pixel));
    vec3i i = {15, 35, 22};
    std::cout << i.x << " " << i.r << "\n";
    
    return 0;
}