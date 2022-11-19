#include <cstdio>

int main()
{
    int n, amount(0), i=2;
    scanf("%d", &n);

    bool b[3001] = {false};
    int pfactors[3001] = {0};
    while(i <= n)
    {
        if (!b[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                b[j] = true;
                pfactors[j] += 1;
            }
        }

        if (pfactors[i] == 2)
        {
            amount += 1;
        }
    i++;
    }
    printf("%d\n", amount);
    return 0;
}