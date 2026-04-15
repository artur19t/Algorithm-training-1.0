#include <iostream>

int main()
{
    int N, K, M, freeM, freeK;
    int resK = 0;
    int resM = 0;
    int res = 0;
    std::cin >> N >> K >> M;
    freeM = 0;
    freeK = N;
    if (N >= K && K >= M)
    {
        while (true)
        {
            freeM = 0;
            resK = freeK / K;
            freeK = freeK - resK * K;

            for (int i = 0; i < resK; i++)
            {
                resM = K / M;
                freeM += K - resM * M;
                res += resM;
            }

            freeK += freeM;
            if (freeK < K)
            {
                break;
            }
        }
    }
    std::cout << res << "\n";
}