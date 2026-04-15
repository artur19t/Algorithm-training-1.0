#include <iostream>

int main()
{
    int a, b, c, x;
    x = 0;
    std::cin >> a >> b >> c;

    if (c < 0)
    {
        std::cout << "NO SOLUTION\n";
        return 0;
    }

    if (a == 0)
    {
        if (b == c * c)
        {
            std::cout << "MANY SOLUTIONS\n";
            return 0;
        }
        else
        {
            std::cout << "NO SOLUTION\n";
            return 0;
        }
    }

    x = (c * c - b) / a;
    if ((a * x + b) != c * c)
    {
        std::cout << "NO SOLUTION\n";
        return 0;
    }
    std::cout << x << "\n";
}