#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int count;
    std::cin >> count;
    std::vector<int> x(count), y(count);
    for (size_t i = 0; i != count; ++i)
    {
        std::cin >> x[i] >> y[i];
    }

    std::vector<int> climbs(count, 0);
    int diff;
    for (size_t i = 1; i != count; ++i)
    {
        diff = std::max(0, y[i] - y[i - 1]);
        climbs[i] = climbs[i - 1] + diff;
    }
    std::vector<int> down(count, 0);
    for (int i = count - 2; i >= 0; --i)
    {
        diff = std::max(0, y[i] - y[i + 1]);
        down[i] = down[i + 1] + diff;
    }
    int countRoute;
    std::cin >> countRoute;
    int start, finish;
    while (countRoute--)
    {
        std::cin >> start >> finish;
        if (start<finish)
        {
            std::cout << climbs[finish-1]-climbs[start-1] << std::endl;
        }
        else
        {
            std::cout << down[finish-1]-down[start-1] << std::endl;
        }
    }
}