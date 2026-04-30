#include <iostream>
#include <vector>

int main()
{
    int count;
    long long minDistance;
    std::cin >> count >> minDistance;
    std::vector<long long> distances(count);
    for (size_t i = 0; i != count; ++i)
    {
        std::cin >> distances[i];
    }
    long long res = 0;
    int R = 0;

    for (int L = 0; L < count; ++L)
    {
        while (R < count && distances[R] - distances[L] <= minDistance)
        {
            ++R;
        }

        if (R < count)
        {
            res += (count - R);
        }
    }
    std::cout << res << std::endl;
}