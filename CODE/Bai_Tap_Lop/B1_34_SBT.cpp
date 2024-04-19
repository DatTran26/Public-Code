#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int snt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}
int main()
{
    FILE *a = fopen("D:\\Document\\CODE_VN\\C++\\CODE\\FILE\\in.txt", "r");
    int n, d[100];
    fscanf(a, "%d", &n);
    printf("%d\n", n);
    for (int i = 0; i < n; i++)
    {
        fscanf(a, "%d", &d[i]);
        printf("%d", d[i]);
    }
    fclose(a);
    FILE *b = fopen("D:\\Document\\CODE_VN\\C++\\CODE\\FILE\\in.txt", "a");
    fprintf(b, "\n");
    for (int i = 0; i < n; i++)
    {
        if (snt(d[i]) == 1)
            fprintf(b, "%d ", d[i]);
    }
    fclose(b);
    return 0;
}