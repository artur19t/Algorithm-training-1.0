#include <iostream>
#include <unordered_map>
#include <string>

int main()
{
    int count;
    std::cin >> count;
    std::unordered_map<std::string, std::string> first;
    std::unordered_map<std::string, std::string> second;
    std::string firstW, secondW;

    for (size_t i = 0; i != count; ++i)
    {
        std::cin >> firstW >> secondW;
        first.insert({firstW, secondW});
        second.insert({secondW, firstW});
    }

    std::string search;
    std::cin >> search;

    if (first.count(search))
    {
        auto res = first.find(search);
        std::cout << first[search] << std::endl;
    }
    else
    {
        auto res = second.find(search);
        std::cout << second[search] << std::endl;
    }
}