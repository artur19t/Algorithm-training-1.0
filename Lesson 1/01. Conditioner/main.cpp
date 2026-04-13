#include <iostream>
#include <string>

int main()
{
    int troom, tcond, result;
    std::string mode;
    std::cin >> troom >> tcond >> mode;
    if (mode == "freeze")
    {
        result = std::min(troom,tcond);
    }else if (mode == "heat")
    {
        result = std::max(troom,tcond);
    }else if (mode == "auto")
    {
        result = tcond;
    }else
    {
        result = troom;
    }
    std::cout << result;
}