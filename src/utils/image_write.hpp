#pragma once

#include <iostream>

int write_image_blocking(char const *filename, int w, int h, int comp, const void *data, int stride_in_bytes);

void write_image_nonblocking(void);