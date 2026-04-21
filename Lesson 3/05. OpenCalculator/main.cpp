#include <iostream>
#include <unordered_set>

int main()
{
    char x, y, z;
    std::cin >> x >> y >> z;
    std::string word;
    std::cin >> word;
    std::unordered_set<char> nums;
    int count = 0;
    for (size_t i = 0; i != word.size(); ++i)
    {
        char num = word[i];
        if (num != x && num != y && num != z && !(nums.count(num)))
        {
            nums.insert(num);
            count++;
        }
    }
    std::cout << count << std::endl;
}