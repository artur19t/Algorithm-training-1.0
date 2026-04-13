#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int first, second, third, max;
    std::string result;
    std::cin >> first >> second >> third;
    
    max = std::max({first, second, third});
    if(first + second + third - max > max)
    {
        result = "YES";
    }else
    {
        result = "NO";
    }
    std::cout << result;
}