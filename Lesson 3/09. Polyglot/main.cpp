#include <iostream>
#include <unordered_set>
#include <string>

int main()
{
    int countStudent;
    std::cin >> countStudent;

    std::unordered_set<std::string> allStud, anyStud;
    
    for (size_t i = 0; i != countStudent; ++i)
    {
        int countLang;
        std::cin >> countLang;
        std::unordered_set<std::string> curr;
        for (size_t j = 0; j != countLang; ++j)
        {
            std::string currLang;
            std::cin >> currLang;
            anyStud.insert(currLang);
            curr.insert(currLang);
            if (i == 0)
            {
                allStud.insert(currLang);
            }
        }

        
        std::unordered_set<std::string> allCheck;
        for (const std::string & checkLang : allStud)
        {
            if (curr.count(checkLang))
            {
                allCheck.insert(checkLang);
            }
        }
        allStud = allCheck;
    }
    std::cout << allStud.size() << std::endl;
    for (const std::string & checkLang : allStud)
    {
        std::cout << checkLang << std::endl;
    }
    std::cout << anyStud.size() << std::endl;
    for (const std::string & checkLang : anyStud)
    {
        std::cout << checkLang << std::endl;
    }
}