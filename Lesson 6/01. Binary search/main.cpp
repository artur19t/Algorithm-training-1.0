#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int N, K;
    std::cin >> N >> K;
    std::vector<int> numsN(N);
    for (size_t i = 0; i != N; ++i)
    {
        std::cin >> numsN[i];
    }
    std::sort(numsN.begin(), numsN.end());
    int l, r, m, num;
    for (size_t i = 0; i != K; ++i)
    {
        std::cin >> num;
        l = 0;
        r = N;
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
        if (numsN[l] == num && l < N)
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }
}