#include <iostream>
#include <string>
#include <algorithm>


void filterNumber(std::string & num)
{
    num.erase(std::remove(num.begin(), num.end(), '-'), num.end());
    num.erase(std::remove(num.begin(), num.end(), '('), num.end());
    num.erase(std::remove(num.begin(), num.end(), ')'), num.end());
    num.erase(std::remove(num.begin(), num.end(), '+'), num.end());
}

void compare(std:: string num, std::string pNumverD)
{
    if (num.length() == 7)
    {
        num = "8495" + num;
    }
    if (pNumverD.length() == 7)
    {
        pNumverD = "8495" + pNumverD;
    }
    num.erase(0,1);
    pNumverD.erase(0,1);

    if (num == pNumverD)
    {
        std::cout << "YES\n";
    }else{
        std::cout << "NO\n";
    }
}

int main()
{
    std::string pNumberA, pNumberB, pNumberC, pNumberD;
    std::cin>>pNumberD;
    std::cin>>pNumberA;
    std::cin>>pNumberB;
    std::cin>>pNumberC;
    filterNumber(pNumberA);
    filterNumber(pNumberB);
    filterNumber(pNumberC);
    filterNumber(pNumberD);
    compare(pNumberA, pNumberD);
    compare(pNumberB, pNumberD);
    compare(pNumberC, pNumberD);
}
