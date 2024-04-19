#include <stdio.h>
#include <stdlib.h>
//de quy

int fibinaci(int n)
{
    if (n < 0)
        return 0;
    else if (n == 0 || n == 1)
        return n;
    else
        return fibinaci(n - 1) + fibinaci(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fibinaci(n));
    return 0;
}