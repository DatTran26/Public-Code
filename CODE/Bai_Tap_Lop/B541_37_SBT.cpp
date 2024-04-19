
//nhap tay

// #include <stdio.h>
// #include <stdlib.h>

// void nhap(int &n)
// {
//     do
//     {
//         scanf("%d", &n);
//     } while (n <= 0);
// }
// void nhap_m(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
// }
// void xuat_m(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
// }
// int linear_search(int a[], int n, int x)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == x)
//             return i;
//     }
//     return -1;
// }
// int binary_search(int a[], int n, int x)
// {
//     int left = 0, right = n - 1, mid;
//     while (left <= right)
//     {
//         mid = (left + right) / 2;
//         if (a[mid] == x)
//             return mid;
//         if (a[mid] < x)
//             left = mid + 1;
//         else
//             right = mid - 1;
//     }
//     return -1;
// }
// int main()
// {
//     int a[100];
//     int n;
//     nhap(n);
//     nhap_m(a, n);
//     xuat_m(a, n);
//     int x;
//     scanf("\n%d", &x);
//     // int check = linear_search(a, n, x);
//     // if (check == -1)
//     //     printf("Khong tim thay");
//     // else
//     //     printf("Vi tri cua phan tu can tim la: %d", check+1);
//     int check = binary_search(a, n, x);
//     if (check == -1)
//         printf("Khong tim thay");
//     else
//         printf("Vi tri cua phan tu can tim la: %d", check + 1);
//     return 0;
// }




//phat sinh
#include <stdio.h>
#define MAX 100
#include <time.h>
#include <stdlib.h>
void nhap(int &n)
{
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
}
void mang(int a[], int n)
{
    srand((int)time(0));
    for (int i = 0; i < n; i++)
    {
        a[i] = -20 + rand() % 100;
        printf("%d ", a[i]);
    }
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void xapxep(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}
void xuat(int a[], int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void nhapX(int &x)
{
    printf("\nNhap gia tri can tim: ");
    scanf("%d", &x);
}
int tim(int a[], int n, int x)
{
    int left = 0, right = n - 1, mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == x)
            return mid;
        if (a[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int a[MAX], n, x;
    nhap(n);
    mang(a, n);
    xapxep(a, n);
    xuat(a, n);
    nhapX(x);
    if (tim(a, n, x) == -1)
        printf("Khong tim thay");
    else
        printf("gia tri can tim o vi tri: %d", tim(a, n, x));
    return 0;
}