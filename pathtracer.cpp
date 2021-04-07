#include <iostream>
#include <vector>
#include <cstdint>

int main(int argc, char const *argv[])
{
    /* code */
    struct scene
    {
        const int width = 2U;
        const int height = 2U;
    } scene;
    typedef struct pixel
    {
        uint8_t r;
        uint8_t g;
        uint8_t b;
    } pixel;
    
    std::vector<pixel> pixels = {};
    pixels.reserve(scene.width*scene.height);
    std::cout << sizeof(pixel) << "\n";
    return 0;
}

