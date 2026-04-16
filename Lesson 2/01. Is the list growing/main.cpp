#include <iostream>
#include <climits>

int main()
{
    int num = INT_MIN;
    int curr;
    int i = 0;
    while (std::cin >> curr)
    {
        i++;
        if (num < curr)
        {
            num = curr;
        }
        else
        {
            std::cout << "NO\n";
            return 0;
        }
    }
    std::cout << "YES\n";
}