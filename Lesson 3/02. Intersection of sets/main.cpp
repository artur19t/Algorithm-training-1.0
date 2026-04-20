#include <iostream>
#include <unordered_set>
#include <vector>
#include <sstream>
#include <algorithm>

int main()
{
    std::unordered_set<int> firstSet;
    std::unordered_set<int> result;
    std::string line;
    std::getline(std::cin, line);
    std::stringstream ss1(line);
    int num;
    while (ss1 >> num) {
        firstSet.insert(num);
    }

    std::getline(std::cin, line);
    std::stringstream ss2(line);
    while (ss2 >> num) {
        if (firstSet.count(num))
        {
            result.insert(num);
        }
    }

    std::vector<int> ans(result.begin(), result.end());
    std::sort(ans.begin(), ans.end());

    for (size_t i = 0; i != ans.size(); ++i)
    {
        std::cout << ans[i] << " ";
    }
    std::cout<< std::endl;
}