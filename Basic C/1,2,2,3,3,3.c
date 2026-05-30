#include <stdio.h>

long long n, ans, giua, kq;

long long chat(long long dau, long long cuoi)
{
    while (dau <= cuoi)
    {
        giua = (dau + cuoi) / 2;
        ans = giua * (giua + 1) / 2;
        if (ans >= n)
        {
            kq = giua;
            cuoi = giua - 1;
        }
        else dau = giua + 1;
    }
    return kq;
}

int main()
{
    scanf("%lld", &n);
    printf("%lld\n", chat(1, 1000000000LL));
    return 0;
}