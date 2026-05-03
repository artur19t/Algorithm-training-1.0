#include <iostream>
#include <algorithm>

int main()
{
    long long w, h, count;
    std::cin >> w >> h >> count;
    long long l = 0;
    long long r = std::max(w, h) * count;
    long long m;
    while (l < r)
    {
        m = (l + r) / 2;
        if ((m / w) * (m / h) >= count)
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