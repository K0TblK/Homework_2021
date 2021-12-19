#include "BmpStructures.h"
#include "ImgFunctions.h"
#include <iostream>
int main() {
    RGB background = { 255, 255, 255};
    RGB red = { 0, 0, 255 };
    RGB orange = { 0, 128, 255 };
    RGB yellow = { 0, 255 , 255 };
    RGB green = { 0, 255 , 0 };
    RGB lightBlue = { 255, 128 , 0 };
    RGB blue = { 255, 0 , 0 };
    RGB violet = { 255, 0 , 128 };
    try
    {
        
        RgbImg img = createRgbImg(100, 700, background);
        for (size_t row = 0; row < 100; ++row)
            for (size_t col = 0; col < 100; ++col)
            {
                img.pixels[row][col] = red;
            }
        for (size_t row = 0; row < 100; ++row)
            for (size_t col = 100; col < 200; ++col)
            {
                img.pixels[row][col] = orange;
            }
        for (size_t row = 0; row < 100; ++row)
            for (size_t col = 200; col < 300; ++col)
            {
                img.pixels[row][col] = yellow;
            }
        for (size_t row = 0; row < 100; ++row)
            for (size_t col = 300; col < 400; ++col)
            {
                img.pixels[row][col] = green;
            }
        for (size_t row = 0; row < 100; ++row)
            for (size_t col = 400; col < 500; ++col)
            {
                img.pixels[row][col] = lightBlue;
            }
        for (size_t row = 0; row < 100; ++row)
            for (size_t col = 500; col < 600; ++col)
            {
                img.pixels[row][col] = blue;
            }
        for (size_t row = 0; row < 100; ++row)
            for (size_t col = 600; col < 700; ++col)
            {
                img.pixels[row][col] = violet;
            }
        writeRgbImg("RainbowSix.bmp", img);
    }
    catch (std::exception const& e)
    {
        std::cout << "Error: " << e.what() << "\n";
        return -1;
    }
    return 0;
}
