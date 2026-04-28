#include <iostream>
#include <vector>

int main()
{
    int count;
    long long summ;
    std::cin >> count >> summ;
    std::vector<int> nums(count);
    for (size_t i = 0; i != count; ++i)
    {
        std::cin >> nums[i];
    }
    size_t L = 0, R = 0;
    long long resSumm = 0;
    int resCount = 0;
    for (; R < count; ++R)
    {
        resSumm += nums[R];
        while(resSumm > summ)
        {
            resSumm -= nums[L];
            ++L;
        }
        if (resSumm == summ)
        {
            resCount++;
        }
    }
    std::cout << resCount << std::endl;
}