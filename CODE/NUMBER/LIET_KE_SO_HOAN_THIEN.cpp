#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void nhap(int &a)
{
    scanf("%d", &a);
}
int check_so_hoan_hao(int a)
{
    int tong_uoc;
    tong_uoc = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
            tong_uoc += i;
    }
    if (tong_uoc == a)
        return 1;
    else
        return 0;
}

int main()
{
    // Ti?p t?c hoàn thi?n mã ngu?n
    int a, tich = 1;
    nhap(a);
    if (check_so_hoan_hao(a) == 1)
        printf("Yes\n");
    else
        printf("No\n");

    for (int i = 1; i <= a; i++)
    {
        if (check_so_hoan_hao(i) == 1)
        {
            tich *= i;
            printf("%d ", i);
        }
    }
    printf("\n%d", tich);

    return 0;
}