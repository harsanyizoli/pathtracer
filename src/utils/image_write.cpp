#include "image_write.hpp"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

int write_image_blocking(char const *filename, int w, int h, int comp, const void *data, int stride_in_bytes){
    std::cout << "write_image_blocking()\n";
    int r = stbi_write_png(filename, w, h, comp, data, stride_in_bytes);
    return r;
}

void write_image_nonblocking(){
    std::cout << "write_image_nonblocking()\n";
}