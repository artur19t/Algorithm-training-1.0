#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_set<int> nums;

    int num, count;
    count = 0;
    while (std::cin >> num)
    {
        if (!(nums.count(num)))
        {
            count++;
            nums.insert(num);
        }
    }

    std::cout << count << std::endl;
}