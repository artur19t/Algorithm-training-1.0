#include <iostream>

int main()
{
    long long bad, satisfactorily, good;
    std::cin >> bad >> satisfactorily >> good;

    long long l = 0;
    long long r = bad + satisfactorily;
    long long m;
    long long count;
    while (l < r)
    {
        m = (l + r) / 2;
        count = bad + satisfactorily + good + m;
        if ((2 * bad + 3 * satisfactorily + 4 * good + 5 * m) * 2 >= 7 * count)
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