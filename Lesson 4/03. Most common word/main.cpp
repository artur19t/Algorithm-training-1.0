#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::string word, resWord;
    std::unordered_map<std::string, int> words;
    int max = 0;
    while (std::cin >> word)
    {
        if (!(words.count(word)))
        {
            words[word] = 1;
        }
        else
        {
            words[word]++;
        }
        if (max <= words[word])
        {
            if (max < words[word])
            {
                max = words[word];
                resWord = word;
            }
            else
            {
                if (resWord > word)
                {
                    resWord = word;
                }
            }
        }
    }
    std::cout << resWord << std::endl;
}