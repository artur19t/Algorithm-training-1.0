#include <iostream>
#include <climits>

int main()
{
    int max_1, max_2, max_3, min_1, min_2, num;
    max_1 = INT_MIN;
    max_2 = INT_MIN;
    max_3 = INT_MIN;
    min_1 = INT_MAX;
    min_2 = INT_MAX;
    while (std::cin >> num)
    {
        if (num >= max_1)
        {
            max_3 = max_2;
            max_2 = max_1;
            max_1 = num;
        }
        else if (num >= max_2)
        {
            max_3 = max_2;
            max_2 = num;
        }
        else if (num >= max_3)
        {
            max_3 = num;
        }

        if (num <= min_1)
        {
            min_2 = min_1;
            min_1 = num;
        }
        else if (num <= min_2)
        {
            min_2 = num;
        }
    }
    int res1 = (long long)max_1 * max_2 * max_3;
    int res2 = (long long)max_1 * min_1 * min_2;

    if (res1 > res2)
    {
        std::cout << max_3 << " " << max_2 << " " << max_1 << "\n";
    }
    else
    {
        std::cout << min_1 << " " << min_2 << " " << max_1 << "\n";
    }
}