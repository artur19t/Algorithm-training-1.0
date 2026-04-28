#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

int main()
{
    int count1, count2;
    std::cin >> count1;
    std::vector<int> nums1(count1);
    for (size_t i = 0; i != count1; ++i)
    {
        std::cin >> nums1[i];
    }
    std::cin >> count2;
    std::vector<int> nums2(count2);
    for (size_t i = 0; i != count2; ++i)
    {
        std::cin >> nums2[i];
    }

    int i = 0, j = 0;
    int res1 = nums1[0], res2 = nums2[0];
    int minDiff = std::abs(res1 - res2);
    int diff;
    while (i < count1 && j < count2)
    {
        diff = std::abs(nums1[i] - nums2[j]);
        if (diff < minDiff)
        {
            minDiff = diff;
            res1 = nums1[i];
            res2 = nums2[j];
        }
        if (nums1[i] < nums2[j])
        {
            ++i;
        }
        else
        {
            ++j;
        }
    }
    std::cout << res1 << " " << res2 << std::endl;
}