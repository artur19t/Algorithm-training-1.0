#include <iostream>
#include <climits>

int main()
{
    int prev, cur;
    bool isConst = true;
    bool isAscending = true;
    bool isWeaklyAscending = true;
    bool isDescending = true;
    bool isWeaklyDescending = true;
    bool isRandom = true;
    std::cin >> cur;
    prev = cur;
    if (cur == -2000000000)
    {
        std::cout << "RANDOM\n";
        return 0;
    }
    while (true)
    {
        std::cin >> cur;
        if (cur == -2000000000)
        {
            break;
        }
        if (prev != cur)
        {
            isConst = false;
        }
        if (prev >= cur)
        {
            isAscending = false;
        }
        if (prev > cur)
        {
            isWeaklyAscending = false;
        }
        if (prev <= cur)
        {
            isDescending = false;
        }
        if (prev < cur)
        {
            isWeaklyDescending = false;
        }
        prev = cur;
    }
    if (isConst)
    {
        std::cout << "CONSTANT\n";
        return 0;
    }
    if (isAscending)
    {
        std::cout << "ASCENDING\n";
        return 0;
    }
    if (isWeaklyAscending)
    {
        std::cout << "WEAKLY ASCENDING\n";
        return 0;
    }
    if (isDescending)
    {
        std::cout << "DESCENDING\n";
        return 0;
    }
    if (isWeaklyDescending)
    {
        std::cout << "WEAKLY DESCENDING\n";
        return 0;
    }

    std::cout << "RANDOM\n";
    return 0;
}
