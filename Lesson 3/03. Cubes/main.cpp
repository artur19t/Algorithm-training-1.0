#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

int main()
{
    int countAne, countBorya;
    std::cin >> countAne >> countBorya;
    std::unordered_set<int> numsAne (countAne);
    std::unordered_set<int> numsBorya (countBorya);
    std::unordered_set<int> nums (countAne + countBorya);
    std::vector<int> commonNums, onlyAne, onlyBorya;
    int num, countCommonNums, countOnlyAne, countOnlyBorya;
    countCommonNums = 0;
    countOnlyAne = 0;
    countOnlyBorya = 0;

    for (size_t i = 0; i != countAne; ++i)
    {
        std::cin >> num;
        numsAne.insert(num);
        nums.insert(num);
    }

    for (size_t i = 0; i != countBorya; ++i)
    {
        std::cin >> num;
        numsBorya.insert(num);
        if (nums.count(num))
        {
            commonNums.push_back(num);
            countCommonNums++;
        }
        if (!(numsAne.count(num)))
        {
            onlyBorya.push_back(num);
            countOnlyBorya++;
        }
        nums.insert(num);
    }

    for (const int& x : numsAne)
    {
        if (!(numsBorya.count(x)))
        {
            onlyAne.push_back(x);
            countOnlyAne ++;
        }
    }

    std::sort(commonNums.begin(),commonNums.end());
    std::sort(onlyAne.begin(),onlyAne.end());
    std::sort(onlyBorya.begin(),onlyBorya.end());

    std::cout << countCommonNums << std::endl;
    for (size_t i = 0; i != countCommonNums; ++i)
    {
        std::cout << commonNums[i] << " ";
    }
    std::cout << std::endl;

    std::cout << countOnlyAne << std::endl;
    for (size_t i = 0; i != countOnlyAne; ++i)
    {
        std::cout << onlyAne[i] << " ";
    }
    std::cout << std::endl;

    std::cout << countOnlyBorya << std::endl;
    for (size_t i = 0; i != countOnlyBorya; ++i)
    {
        std::cout << onlyBorya[i] << " ";
    }
    std::cout << std::endl;
}