#include <iostream>
#include <vector>
#include <climits>

int main()
{
    int count, max, cur;
    std::vector<int> meters;
    max = INT_MIN;
    std::cin >> count;
    size_t max_i = 0;

    for (size_t i = 0; i != count; ++i)
    {
        std::cin >> cur;
        if (max < cur)
        {
            max = cur;
            max_i = i;
        }
        meters.push_back(cur);
    }
    std::vector<int> maxVasilyMeters;
    int countVas = 0;
    for (size_t i = max_i; i != count-1; ++i)
    {
        if (meters[i]%10 == 5 && meters[i]>meters[i+1] && meters[i]<=max && i > max_i)
        {
            maxVasilyMeters.push_back(meters[i]);
            countVas++; 
        }
    }
    int maxVasilyMeter = INT_MIN;
    for (size_t i = 0; i != countVas; ++i)
    {
        if (maxVasilyMeter < maxVasilyMeters[i])
        {
            maxVasilyMeter = maxVasilyMeters[i];
        }
    }
    int place = 1;
    for (size_t i = 0; i != count; ++i)
    {
        if (maxVasilyMeter < meters[i])
        {
            place++;
        }
    }
    if (place > count )
    {
        std::cout << 0 << "\n";
        return 0;
    }
    std::cout << place << "\n";
}