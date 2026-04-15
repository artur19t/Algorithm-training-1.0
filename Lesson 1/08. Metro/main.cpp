#include <iostream>
#include <algorithm>

int main()
{
    int firstInterval, secondInterval, firstCount, secondCount;
    std::cin >> firstInterval >> secondInterval >> firstCount >> secondCount;

    int firstTimeMin, firstTimeMax, secondTimeMin, secondTimeMax;

    firstTimeMin = firstCount + ((firstCount-1)*firstInterval);
    secondTimeMin = secondCount + ((secondCount-1)*secondInterval);
    firstTimeMax = firstCount + ((firstCount+1)*firstInterval);
    secondTimeMax = secondCount + ((secondCount+1)*secondInterval);

    int maxOfMin = std::max(firstTimeMin, secondTimeMin);
    int minOfMax = std::min(firstTimeMax, secondTimeMax);
    if (maxOfMin <= minOfMax)
    {
        std::cout<< maxOfMin << " " << minOfMax;
        return 0;
    }
    std::cout << -1 << "\n";
}