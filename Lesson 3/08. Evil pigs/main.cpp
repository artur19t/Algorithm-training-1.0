#include <iostream>
#include <unordered_set>

int main()
{
    int count;
    std::cin >> count;
    std::unordered_set<int> uniqX;
    int countX = 0;
    int x, y;
    for (size_t i = 0; i != count; ++i)
    {
        std::cin >> x >> y;
        if (!(uniqX.count(x)))
        {
            countX++;
            uniqX.insert(x);
        }
    }
    std::cout << countX << std::endl;
}