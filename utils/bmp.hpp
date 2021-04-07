#include <memory>
#include <cstring>

struct bitmap_information_header
{
    unsigned int size;
    unsigned int width;
    unsigned int height;
    unsigned short planes;
    unsigned short bit_count;
    unsigned int compression;
    unsigned int size_image;
    unsigned int x_pels_per_meter;
    unsigned int y_pels_per_meter;
    unsigned int clr_used;
    unsigned int clr_important;
};

unsigned int struct_size(bitmap_information_header *b)
{
    return sizeof(b->size) +
           sizeof(b->width) +
           sizeof(b->height) +
           sizeof(b->planes) +
           sizeof(b->bit_count) +
           sizeof(b->compression) +
           sizeof(b->size_image) +
           sizeof(b->x_pels_per_meter) +
           sizeof(b->y_pels_per_meter) +
           sizeof(b->clr_used) +
           sizeof(b->clr_important);
}

void clear(bitmap_information_header *b)
{
    std::memset(b, 0x00, sizeof(bitmap_information_header));
}