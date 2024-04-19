#include <stdio.h>
#include <string.h>
#include <math.h>

void nhap_n(int &n)
{
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if (n < 0 || n > 100)
            printf("Nhap sai ! Xin moi nhap lai.\n");
    } while (n < 0 || n > 100);
}

void nhap_mang(int *ln, int n)
{
    printf("1. Nhap mang.\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", ln + i);
    }
}

void xuat_mang(int *ln, int n)
{
    printf("2. Xuat mang.");
    for (int i = 0; i < n; i++)
    {
        printf("\na[%d]: %d", i, *(ln + i));
    }
}

int tong(int *ln, int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += *(ln + i);
    }
    return tong;
}
int main()
{
    int *ln;
    int n;
    nhap_n(n);
    ln = (int *)malloc(n * sizeof(int));
    nhap_mang(ln, n);
    xuat_mang(ln, n);
    printf("\nTong cac phan tu : %d", tong(ln, n));
    free(ln);
    return 0;
}