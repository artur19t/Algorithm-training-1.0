#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    std::string s, t;
    std::cin >> s >> t;

    std::unordered_set<std::string> pairs_t;

    for (size_t i = 0; i + 1 != t.size(); ++i) {
        pairs_t.insert(t.substr(i, 2));
    }

    int count = 0;

    for (size_t i = 0; i + 1 < s.size(); ++i) {
        std::string pair = s.substr(i, 2);
        if (pairs_t.count(pair)) {
            count++;
        }
    }

    std::cout << count << std::endl;
}