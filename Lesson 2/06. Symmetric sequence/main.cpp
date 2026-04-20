#include <iostream>
#include <vector>

std::vector<int> prefix_function(std::vector<int>& s) {
    int n = s.size();
    std::vector<int> pi(n);

    for (int i = 1; i < n; i++) {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j]) {
            j = pi[j - 1];
        }
        if (s[i] == s[j]) {
            j++;
        }
        pi[i] = j;
    }

    return pi;
}

int main() {
    int count;
    std::cin >> count;

    std::vector<int> nums(count);
    for (int i = 0; i < count; i++) {
        std::cin >> nums[i];
    }

    std::vector<int> reversNums(nums.rbegin(), nums.rend());

    reversNums.push_back(-1); 
    reversNums.insert(reversNums.end(), nums.begin(), nums.end());

    std::vector<int> pi = prefix_function(reversNums);

    int k = pi.back();

    int add = count - k;
    std::cout << add << std::endl;

    for (int i = add - 1; i >= 0; i--) {
        std::cout << nums[i] << " ";
    }

    return 0;
}