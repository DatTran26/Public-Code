#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void nhap_n(int &n, int &x)
{
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if (n <= 0)
            printf("Nhap lai !\n");
    } while (n <= 0);
    printf("Nhap x: ");
    scanf("%d", &x);
}
void nhap_mang(int a[], int n)
{
    if (n == 0)
        return;
    nhap_mang(a, n - 1);
    printf("Nhap a[%d]: ", n - 1);
    scanf("%d", &a[n - 1]);
}
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
int min_snt(int a[], int n)
{
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (snt(a[i]) == 1 && a[i] < min)
            min = a[i];
    }
    return min;
}
int sl_snt_x(int a[], int n, int x)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (snt(a[i]) == 1 && a[i] < x)
            dem++;
    }
    return dem;
}
int tong(int a[], int n)
{
    if (n == 0)
        return 0;
    return a[n - 1] + tong(a, n - 1);
}
int main()
{
    int n;
    int a[1000];
    int x;

    nhap_n(n, x);
    nhap_mang(a, n);
    printf("Gia tri cua phan tu snt nho nhat cua mang : %d\n", min_snt(a, n));
    printf("So luong snt nho hon x: %d\n", sl_snt_x(a, n, x));
    printf("Tong cac chu so cua mang: %d\n", tong(a, n));
    return 0;
}