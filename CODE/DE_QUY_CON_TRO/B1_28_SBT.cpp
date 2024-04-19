#include <stdio.h>
#include <stdlib.h>
//de quy con tro
void nhap(int *a, int i, int n)
{
    printf("Nhap a[%d]: ", i);
    scanf("%d", (a + i));
    if (i == n - 1)
        return;
    nhap(a, i + 1, n);
}
void xuat(int *a, int n)
{
    if (n == 0)
        return;
    xuat(a, n - 1);
    printf("a[%d]: %d\n", n - 1, *(a + n - 1));
}
int tong(int *a, int n)
{
    if (n == 0)
        return 0;
    return *(a + n - 1) + tong(a, n - 1);
}
int tong_chan(int *a, int n)
{

    if (n == 0)
        return 0;
    if (*(a + n - 1) % 2 == 0)
        return *(a + n - 1) + tong_chan(a, n - 1);
    else
        return 0 + tong_chan(a, n - 1);
}
int pt_duong(int *a, int n)
{
    if (n == 0)
        return 0;
    if (*(a + n - 1) > 0)
        return 1 + pt_duong(a, n - 1);
    else
        return 0 + pt_duong(a, n - 1);
}
int ptc_cuoi(int *a, int n)
{
    if (n == 0)
        return 0;
    ptc_cuoi(a, n - 1);
    if (*(a + n - 1) % 2 == 0)
        return *(a + n - 1);
}
int max(int *a, int n)
{

    if (n == 0)
        return *(a + n);
    if (*(a + n - 1) > max(a, n - 1))
        return *(a + n - 1);
    return max(a, n - 1);
}
int find_x(int *a, int n, int x)
{
    if (n == 0)
        return 0;
    if (*(a + n - 1) == x)
        return n;
    return find_x(a, n - 1, x);
}
int main()
{
    int *a, n, x;
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    nhap(a, 0, n);
    xuat(a, n);
    printf("Tong cua mang: %d\n", tong(a, n));
    printf("Tong cac pt chan cua mang: %d\n", tong_chan(a, n));
    printf("So luong pt duong cua mang: %d\n", pt_duong(a, n));
    printf("Pt chan cuoi cua mang: %d\n", ptc_cuoi(a, n));
    printf("Pt lon nhat cua mang: %d\n", max(a, n));
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Vi tri cua x: %d\n", find_x(a, n, x));

    free(a);
    return 0;
}