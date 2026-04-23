#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

int main()
{
    std::vector<int> places;
    std::unordered_map<std::string, int> words;
    std::string word;
    while (std::cin >> word)
    {
        if (!(words.count(word)))
        {
            places.push_back(0);
            words[word] = 1;
        }
        else
        {
            places.push_back(words[word]);
            words[word]++;
        }
    }
    for (size_t i = 0; i != places.size(); ++i)
    {
        std::cout << places[i] << " ";
    }
    std::cout<< std::endl;
}