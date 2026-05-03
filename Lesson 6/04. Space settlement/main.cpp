#include <iostream>
#include <algorithm>

int main()
{
    long long count, w, h, wBase, hBase;
    std::cin >> count >> w >> h >> wBase >> hBase;
    long long l = 0;
    long long r = std::max(wBase, hBase);
    long long m;
    long long res1, res2;
    while (l < r)
    {
        m = (l + r + 1) / 2;
        long long w1 = w + 2 * m;
        long long h1 = h + 2 * m;

        long long x = wBase / w1;
        long long y = hBase / h1;
        bool ok = false;
        if (x > 0 && y > 0)
        {
            if (x>= (count+y-1)/y)
            {
                ok = true;
            }
        }
        x = wBase / h1;
        y = hBase / w1;
        if (x > 0 && y > 0)
        {
            if (x>= (count+y-1)/y)
            {
                ok = true;
            }
        }

        if (ok)
        {
            l = m;
        }
        else
        {
            r = m - 1;
        }
    }

    std::cout << l << std::endl;
}