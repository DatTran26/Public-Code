#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    long long b;
    scanf("%lld", &b);
    int tong = 0;
    while (b != 0)

    {
        tong = tong + b % 10;
        b /= 10;
    }

    printf("%d", tong);
    return 0;
}