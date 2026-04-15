#include <iostream>
#include <algorithm>

int main()
{
    int brickA, brickB, brickC, winA, winB;
    std::cin >> brickA >> brickB >> brickC >> winA >> winB;
    int i = 4;
    int brick[3] = {brickA, brickB, brickC};
    int minWin = std::min(winA, winB);
    int maxWin = std::max(winA, winB);
    for (int j = 0; j < 3; j ++)
    {
        if (brick[j] <= minWin)
        {
            i = j;
        }
    }
    if (i == 4)
    {
        std::cout<<"NO\n";
        return 0;
    }
    for (int j = 0; j < 3; j ++)
    {
        if (brick[j] <= maxWin)
        {
            if (i!=j)
            {
                std::cout<<"YES\n";
                return 0;
            }
        }
    }
    std::cout<<"NO\n";
}