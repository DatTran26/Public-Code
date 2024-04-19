#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void nhap_n(int &n)
{
    do
    {
        printf("Nhap n:");
        scanf("%d", &n);
        if (n <= 0)
            printf("Nhap lai!");
    } while (n <= 0);
}
void nhap_mang(int a[], int i, int n)
{
    printf("Nhap a[%d]: ", i);
    scanf("%d", &a[i]);
    if (i == n - 1)
        return;
    nhap_mang(a, i + 1, n);
}
int scp(int n)
{
    int can = sqrt(n);
    if (can * can == n)
        return 1;
    else
        return 0;
}
int pt_9p_max(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (scp(a[i] == 1) && a[i] > max)
            max = a[i];
    }
    return max;
}
int sl_3s_9P(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 100 && scp(a[i]) == 1)
            dem++;
    }
    return dem;
}
int couple_9p(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (scp(a[i] + a[i + 1]) == 1)
            dem++;
    }
    return dem;
}
int main()
{
    int a[1000], n;
    nhap_n(n);
    nhap_mang(a, 0, n);
    printf("Phan tu 9p lon nhat : %d\n", pt_9p_max(a, n));
    printf("So luong so chinh phuong co ba chu so : %d\n", sl_3s_9P(a, n));
    printf("Cac cap lien tiep co tong la so 9p : %d", couple_9p(a, n));
    return 0;
}