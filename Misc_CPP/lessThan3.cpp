#include <iostream>
bool Graphic(double x, double y) {
    return ((x * x + y * y - 1) * (x * x + y * y - 1) * (x * x + y * y - 1) - x * x * y * y * y <= 0);
}
int main()
{
    for (int y = 20; y >= 0; y--)
    {
        for (int x = 0; x < 41; x++)
        {
            if (Graphic(-1.5 + 3. / 40. * (double)x, -1.5 + 3. / 20. * (double)y))
                std::cout << "*";
            else
                std::cout << ".";
        }
        std::cout << std::endl;
    }
    return 0;
}
