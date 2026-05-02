#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{
    int N, K;
    std::cin >> N >> K;
    std::vector<int> numsN(N);
    for (size_t i = 0; i != N; ++i)
    {
        std::cin >> numsN[i];
    }
    int num, l, r, m, nearLeft, nearRight, res;
    for (size_t i = 0; i != K; ++i)
    {
        std::cin >> num;
        l = 0;
        r = N-1;
        while (l < r)
        {
            m = (l + r) / 2;
            if (numsN[m] >= num)
            {
                r = m;
            }
            else
            {
                l = m + 1;
            }
        }
        if (l < N)
        {
            nearRight = numsN[l];
        }
        else
        {
            nearRight = numsN[N - 1];
        }
        
        l = 0;
        r = N-1;
        while (l < r)
        {
            m = (l + r + 1) / 2;
            if (numsN[m] <= num)
            {
                l = m;
            }
            else
            {
                r = m - 1;
            }
        }
        nearLeft = numsN[l];
        if (std::abs(num-nearRight)>=std::abs(num-nearLeft))
        {
            std::cout << nearLeft << std::endl;
        }
        else
        {
            std::cout << nearRight << std::endl;
        }
    }
}