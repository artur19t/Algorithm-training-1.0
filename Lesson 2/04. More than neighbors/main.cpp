#include <iostream>

int main()
{
    int firstPrev, secondPrev, curr, result;
    result = 0;

    if (!(std::cin >> firstPrev))
    {
        std::cout << result;
        return 0;
    }
    if (!(std::cin >> secondPrev))
    {
        std::cout << result;
        return 0;
    }
    if (!(std::cin >> curr))
    {
        std::cout << result;
        return 0;
    }
    if (secondPrev > firstPrev && secondPrev > curr)
    {
        result++;
    }
    firstPrev = secondPrev;
    secondPrev = curr;
    while (std::cin >> curr)
    {
        if (secondPrev > firstPrev && secondPrev > curr)
        {
            result++;
        }
        firstPrev = secondPrev;
        secondPrev = curr;
    }
    std::cout << result;
}