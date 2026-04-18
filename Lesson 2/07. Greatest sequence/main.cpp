#include <iostream>
#include <climits>
#include <algorithm>

int main()
{
    int min, max, min_s, max_s;
    min = INT_MAX;
    min_s = INT_MAX;
    max = INT_MIN;
    max_s = INT_MIN;
    int num;
    int first_num, second_num;
    std::cin >> first_num >> second_num;
    min = std::min(first_num, second_num);
    max = std::max(first_num, second_num);
    min_s = max;
    max_s = min;
    while (std::cin >> num)
    {
        if (num <= min)
        {
            min_s = min;
            min = num;
        }
        else if (num < min_s)
        {
            min_s = num;
        }
        if (num >= max)
        {
            max_s = max;
            max = num;
        }
        else if (num > max_s)
        {
            max_s = num;
        }
    }
    if ((long long)min_s * min >= (long long)max_s * max)
    {
        std::cout << min << " ";
        std::cout << min_s << "\n";
    }
    else
    {
        std::cout << max_s << " ";
        std::cout << max << "\n";
    }
}