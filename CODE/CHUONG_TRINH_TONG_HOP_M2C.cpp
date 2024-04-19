#include <stdio.h>
#define MAX 100

void NhapSL(int &m, int &n)
{
    scanf("%d", &m);
    scanf("%d", &n);
}

void NhapMang2c(int a[][MAX], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void XuatMang2c(int a[][MAX], int m, int n)
{

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d\t", a[i][j]);
        }
        printf("\n");
    }
}
int tonggiatrichan(int a[][MAX], int m, int n)
{
    int tong = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] % 2 == 0)
                tong += a[i][j];
        }
    }
    return tong;
}
void giatrimaxhc(int a[][MAX], int m, int n)
{

    for (int i = 1; i < m; i = i + 2)
    {
        int gtmax = a[i][0];
        for (int j = 0; j < n; j++)
        {
            if (gtmax < a[i][j])
                gtmax = a[i][j];
        }
        printf("Gia tri lon nhat hang %d la %d\n", i + 1, gtmax);
    }
}
int main()
{
    int b[MAX], a[MAX][MAX], m, n;
    NhapSL(m, n);
    NhapMang2c(a, m, n);
    XuatMang2c(a, m, n);
    printf("Tong gia tri chan : %d\n", tonggiatrichan(a, m, n));
    giatrimaxhc(a, m, n);
    return 0;
}