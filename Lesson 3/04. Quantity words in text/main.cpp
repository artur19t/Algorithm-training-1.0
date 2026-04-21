#include <iostream>
#include <unordered_set>
#include <string>

int main()
{
    std::unordered_set<std::string> words;
    std::string word;
    while (std::cin >> word)
    {
        words.insert(word);
    }
    std::cout << words.size() << std::endl;
}