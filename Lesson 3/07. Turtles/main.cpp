#include <iostream>
#include <unordered_set>

int main()
{
    int count = 0;
    std::unordered_set<int> positions;
    std::cin >> count;
    int prev, post, pos, trueCount;
    trueCount = 0;
    for (size_t i = 0; i != count; ++i)
    {
        std::cin >> prev;
        std::cin >> post;
        if (prev < 0 || post < 0)
        {
            continue;
        }
        if (prev + post != count - 1)
        {
            continue;
        }
        
        pos = prev + 1;
        
        if (!(positions.count(pos)))
        {
            trueCount++;
            positions.insert(pos);
        }
    }
    std::cout << trueCount << std::endl;
}