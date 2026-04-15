#include <iostream>
#include <climits>
#include <algorithm>

int main()
{
    int a1, a2, b1, b2;
    std::cin >> a1 >> b1 >> a2 >> b2;
    int ans = INT_MAX;
    int ansH, ansW;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int w = a1 + a2;
            int h = std::max(b1, b2);
            if (w*h < ans)
            {
                ans = w*h;
                ansW = w;
                ansH = h;
            }

            w = std::max(b1, b2);
            h = a1 + a2;
            if (w*h < ans)
            {
                ans = w*h;
                ansW = w;
                ansH = h;
            }

            std::swap(b1, a1);  
        }
        std::swap(b2, a2);
    }
    std::cout << ansW <<" "<< ansH << std::endl;
}