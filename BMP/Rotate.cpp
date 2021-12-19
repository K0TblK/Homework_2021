#include "BmpStructures.h"
#include "ImgFunctions.h"
#include <iostream>
int main() {
    int angle;
    std::cout << "Enter the angle:  "; std::cin >> angle;
    RgbImg input_image = readRgbImg("RainbowSix.bmp");
    size_t height = input_image.height, width = input_image.width;
    if (angle % 90 != 0) {
        std::cout << "Can't turn on this angle\n";
        return -1;
    }
    if (angle % 360 == 0) {
        RgbImg output_image = copyRgbImg(input_image);
        writeRgbImg("Rotated.bmp", output_image);
        deleteRgbImg(input_image);
        deleteRgbImg(output_image);
    }
    else if (angle % 270 == 0) {
        RgbImg output_image = createRgbImg(width, height, { 0, 0, 0 });
        for (size_t row = 0; row < width; row++)
        {
            for (size_t col = 0; col < height; col++)
            {
                output_image.pixels[row][height - 1 - col] = input_image.pixels[col][row];
            }
        }
        writeRgbImg("Rotated_rainbow.bmp", output_image);
        deleteRgbImg(input_image);
        deleteRgbImg(output_image);
    }
    else if (angle % 180 == 0) {
        RgbImg output_image = createRgbImg(width, height, { 0, 0, 0 });
        for (size_t row = 0; row < width; row++)
        {
            for (size_t col = 0; col < height; col++)
            {
                output_image.pixels[col][row] = input_image.pixels[height - col - 1][width - row - 1];
            }
        }
        writeRgbImg("Rotated_rainbow.bmp", output_image);
        deleteRgbImg(input_image);
        deleteRgbImg(output_image);
    }
    else if (angle % 90 == 0)
    {
        RgbImg output_image = createRgbImg(width, height, { 0, 0, 0 });
        for (size_t row = 0; row < width; row++)
        {
            for (size_t col = 0; col < height; col++)
            {
                output_image.pixels[width - 1 - row][col] = input_image.pixels[col][row];
            }
        }
        writeRgbImg("Rotated_rainbow.bmp", output_image);
        deleteRgbImg(input_image);
        deleteRgbImg(output_image);
    }
    return 0;
}
