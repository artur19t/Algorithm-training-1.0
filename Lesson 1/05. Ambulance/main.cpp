#include <iostream>

int main()
{
    int K1, M, K2, P2, N2;
    std::cin >> K1 >> M >> K2 >> P2 >> N2;

    int p1 = -1;
    int n1 = -1;

    for (int x = 1; x <= 1000000; x++)
    {
        int flatsEntr = x * M;

        int p2_calc = (K2 - 1) / flatsEntr + 1;
        int n2_calc = ((K2 - 1) % flatsEntr) / x + 1;

        if (p2_calc == P2 && n2_calc == N2)
        {
            int p = (K1 - 1) / flatsEntr + 1;
            int n = ((K1 - 1) % flatsEntr) / x + 1;

            if (p1 == -1)
            {
                p1 = p;
                n1 = n;
            }
            else
            {
                if (p1 != p)
                {
                    p1 = 0;
                }
                if (n1 != n)
                {
                    n1 = 0;
                }
            }
        }
    }

    if (p1 == -1)
    {
        std::cout << "-1 -1\n";
    }
    else
    {
        std::cout << p1 << " " << n1 << "\n";
    }
}