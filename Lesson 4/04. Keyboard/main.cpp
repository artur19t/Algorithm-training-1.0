#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

int main()
{
    std::vector<int> maxPushes;
    std::vector<std::string> res;
    int count, maxPush;
    std::cin >> count;
    for (size_t i = 0; i != count; ++i)
    {
        std::cin >> maxPush;
        maxPushes.push_back(maxPush);
        res.push_back("NO");
    }
    std::cin >> count;
    int numButt;
    for (size_t i = 0; i != count; ++i)
    {
        std::cin >> numButt;
        maxPushes[numButt-1]--;
        if (maxPushes[numButt-1] < 0)
        {
            res[numButt-1] = "YES";
        }
    }
    for (const std::string & resOut : res)
    {
        std::cout << resOut << std::endl;
    }
}