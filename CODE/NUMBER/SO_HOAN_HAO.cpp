#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // Tiếp tục hoàn thiện mã nguồn
    long long n, tong;
    scanf("%lld", &n);
    tong = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            tong += i;
    }
    if (tong == n)
        printf("YES");
    else
        printf("NO");
    return 0;
}