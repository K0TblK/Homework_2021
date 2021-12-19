#include "ImgFunctions.h"
#include "BmpStructures.h"

RgbImg toGray(RgbImg const& image)
{
    RgbImg output = copyRgbImg(image);

    for (unsigned long row = 0; row < image.height; ++row)
    {
        for (unsigned long col = 0; col < image.width; ++col)
        {
            RGB const pixel = image.pixels[row][col];
            unsigned char const gray = (char)((pixel.Blue + pixel.Green + pixel.Red) / 3);
            output.pixels[row][col] = { gray, gray, gray };
        }
    }

    return output;
}

int main(int argc, char const* argv[])
{
    RgbImg input = readRgbImg("MARBLES.bmp");
    RgbImg gray = toGray(input);

    writeRgbImg("Marbles_gray.bmp", gray);

    deleteRgbImg(input);
    deleteRgbImg(gray);

    return 0;
}
