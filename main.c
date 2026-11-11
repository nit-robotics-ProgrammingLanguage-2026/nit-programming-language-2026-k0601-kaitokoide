#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
     if (n < 0)
    {
        printf("NG");
    }
    else
    {
        long long total = 0;

        for (long long i = 1; i <= n; i++)
        {
            total += i;
        }

        printf("%lld", total);
    }

    /* TODO: n が負なら NG、そうでなければ 1+2+...+n を for 文で計算して表示 */
    return 0;
}
