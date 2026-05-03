#include <iostream>
#include <algorithm>

int main()
{
    int count, time1, time2;
    std::cin >> count >> time1 >> time2;
    int fast, slow;
    fast = std::min(time1, time2);
    slow = std::max(time1, time2);
    long long l = 0;
    long long r = count * std::max(time1, time2);
    long long m;
    while (l < r)
    {
        m = (l + r) / 2;
        if ((((m-fast) / slow) + (m / fast)) >= count)
        {
            r = m;
        }
        else
        {
            l = m + 1;
        }
    }
    std::cout << l << std::endl;
}