#include <iostream>
#include <unordered_map>
#include <algorithm>

int main()
{
    int count;
    std::cin >> count;
    std::unordered_map <int, int> block;
    int width, hight;
    for (size_t i = 0; i != count; ++i)
    {
        std::cin >> width >> hight;
        if (!(block.count(width)))
        {
            block[width] = hight;
        }
        else
        {
            if (block[width] < hight)
            {
                block[width] = hight;
            }
        }
    }
    long long maxH = 0;
    for (const auto & res: block)
    {
        maxH += res.second;
    }
    std::cout << maxH << std::endl;
}