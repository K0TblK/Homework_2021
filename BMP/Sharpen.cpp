#include "BmpStructures.h"
#include "ImgFunctions.h"
#include <iostream>
void KernelFilter()
{
    RgbImg prepImg = readRgbImg("kidsnoise.bmp");
    RgbImg filtered = convolution(prepImg, 5);
    writeRgbImg("Prepared-kidsnoise.bmp", filtered);
    deleteRgbImg(prepImg);
    deleteRgbImg(filtered);
    RgbImg img = readRgbImg("Prepared-kidsnoise.bmp");
    size_t const kern_sz = 3;
    double** kernel = new double* [kern_sz];
    for (int i = 0; i < kern_sz; ++i)
        kernel[i] = new double[kern_sz];
    std::cout << "Input Kernel core" << "\n";
    for (int i = 0; i < kern_sz; ++i)
        for (int j = 0; j < kern_sz; ++j)
        {
            std::cin >> kernel[i][j];
        }
    RgbImg ImgCopy=convolution(img, kern_sz, kernel);
    writeRgbImg("kids_filtered_matrixkernel.bmp", ImgCopy);
    deleteRgbImg(img);
    for (int i = 0; i < kern_sz; ++i) {
        delete[] kernel[i];
    }
    delete[] kernel;
    deleteRgbImg(ImgCopy);
}
int main()
{
    try
    {
        KernelFilter();
    }
    catch (std::exception const& e)
    {
        std::cout << "Error: " << e.what() << "\n";
        return -1;
    }
    return 0;
}
