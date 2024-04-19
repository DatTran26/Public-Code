#include <stdio.h>
#include <math.h>
#define MAX 100

void nhap_n(int &n)
{
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 10);
}
int check_index(int a[], int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == value)
        {
            return 1;
        }
    }
    return 0;
}
void nhap(int a[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        printf("\na[%d] = ", i);
        scanf("%d", &temp);
        if (check_index(a, n, temp) == 1)
        {
            printf("Vui long nhap lai ");
            i--;
        }
        else
            a[i] = temp;
    }
}
void xuat(int a[], int n)
{
    printf("\nMang vua nhap la : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int check_so9P(int value)
{
    if (value <= 0)
        return 0;
    else
    {
        int can = (int)sqrt(value);
        if (can * can == value)
            return 1;
        else
            return 0;
    }
}
int Sl_9P_vt_le(int a[], int n)
{
    int dem = 0;
    for (int i = 1; i < n; i = i + 2)
    {
        if (check_so9P(a[i]) == 1)
            dem += 1;
    }
    return dem;
}
void xuat_9P_vt_le(int a[], int n)
{
    if (Sl_9P_vt_le(a, n) == 0)
        printf("Khong co so chinh phuong trong day .");
    else
    {
        printf("Cac so chinh phuong o vi tri le : ");
        for (int i = 1; i < n; i = i + 2)
        {
            if (check_so9P(a[i]) == 1)
                printf("%d ", a[i]);
        }
    }
}
int gia_tri_lon_nhat(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}
int check_so_am(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
            dem += 1;
    }
    return dem;
}
void pt_am_lon_nhat(int a[], int n)
{
    if (check_so_am(a, n) == 0)
        printf("Mang khong co so am");
    else
    {
        int pt_am = a[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
                if (-1 - a[i] < -1 - pt_am)
                    pt_am = a[i];
        }
        printf("Phan tu am lon nhat : %d", pt_am);
    }
}
int main()
{
    int a[MAX], n;
    nhap_n(n);
    nhap(a, n);
    xuat(a, n);
    printf("\n");
    xuat_9P_vt_le(a, n);
    printf("\n");
    printf("Gia tri phan tu am lon nhat trong mang : %d", gia_tri_lon_nhat(a, n));
    printf("\n");
    pt_am_lon_nhat(a, n);
    return 0;
}