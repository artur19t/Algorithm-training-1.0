#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

int main()
{
    int amount, num, diff, res;
    std::vector<int> nums;
    std::cin >> amount;
    int j;
    for (size_t i = 0; i != amount; ++i)
    {
        std::cin >> j;
        nums.push_back(j);
    }
    std::cin >> num;
    diff = INT_MAX;
    for (size_t i = 0; i != amount; ++i)
    {
        if (std::fabs(nums[i] - num) < diff)
        {
            diff = std::fabs(nums[i] - num);
            res = nums[i];
        }
    }
    std::cout << res;
}