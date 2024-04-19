#include <stdio.h>
#include <math.h>
#define MAX 100

// Bai 1
void nhap(int &n, int a[])
{
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 10);
    for (int i = 0; i < n; i++)
    {
        printf("\na[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void xuat(int a[], int n)
{
    printf("\nDay vua nhap la : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
// Bai 2
void pt_chia_het_3(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0)
        {
            if (dem == 0)
                printf("\nCac phan tu chia het cho 3 : ");
            dem++;
            printf("%d ", a[i]);
        }
    }
    if (dem == 0)
        printf("\nMang khong co phan tu nao chia het cho 3");
}
int so_luong_pt_duong(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            dem++;
    }
    if (dem > 0)
        return dem;
    else
        return 0;
}
int tong_cac_so(int a[], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += a[i];
    }
    return tong;
}
float trung_binh_cong(int a[], int n)
{
    int tong = 0, dem = 0;
    for (int i = 0; i < n; i++)
    {
        dem++;
        tong += a[i];
    }
    return (float)tong / dem;
}
float trung_binh_cong_pt_duong(int a[], int n)
{
    int tong = 0, dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            dem++;
            tong += a[i];
        }
    }
    return (float)tong / dem;
}
void xuat_so_nguyen_to_(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
                flag += 1;
        }
        if (flag == 2)
        {
            if (dem == 0)
                printf("\nCac so nguyen to trong mang : ");
            dem++;
            printf("%d ", a[i]);
        }
    }
    // if(dem==0)
    //     printf("\nKhong co so nguyen to trong mang");
}
int dem_so_nguyen_to_(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {

        int flag = 0;
        for (int j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
                flag += 1;
        }
        if (flag == 2)
        {
            dem++;
        }
    }
    return dem;
}
int tong_so_nguyen_to(int a[], int n)
{
    int dem = 0, tong = 0;
    for (int i = 0; i < n; i++)
    {

        int flag = 0;
        for (int j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
                flag += 1;
        }
        if (flag == 2)
        {
            dem++;
            tong += a[i];
        }
    }
    return tong;
}
float trung_binh_cong_so_nguyen_to(int a[], int n)
{
    int dem = 0, tong = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
                flag += 1;
        }
        if (flag == 2)
        {
            dem++;
            tong += a[i];
        }
    }
    return (float)tong / dem;
}

int pt_duong_dau_tien(int a[], int n)
{
    int duong = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            return a[i];
    }
    return duong;
}
int pt_am_cuoi_cung(int a[], int n)
{
    int pt_am = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
            pt_am = a[i];
    }
    return pt_am;
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
int gia_tri_nho_nhat(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}
int mang_doi_xung(int a[], int n)
{
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n - i - 1])
            check++;
    }
    return check;
}
void sap_xep(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    for (int g = 0; g < n; g++)
        printf("%d ", a[g]);
    printf("\n");
    for (int f = n - 1; f >= 0; f--)
        printf("%d ", a[f]);
}

int main()
{
    int a[MAX], n;
    nhap(n, a);
    xuat(a, n);
    printf("\n");
    // a
    pt_chia_het_3(a, n);
    // b
    if (so_luong_pt_duong(a, n) == 0)
        printf("\nKhong co phan tu duong trong mang");
    else
        printf("\nSo luong phan tu duong trong mang : %d", so_luong_pt_duong(a, n));
    // c
    printf("\nTong cac so trong mang : %d ", tong_cac_so(a, n));
    // d
    printf("\nTong trung binh cong cac so trong mang : %.2f ", trung_binh_cong(a, n));
    // e
    printf("\nTong trung binh cong cac phan tu duong trong mang : %.2f ", trung_binh_cong_pt_duong(a, n));
    printf("\n");
    // f
    xuat_so_nguyen_to_(a, n);
    // g
    if (dem_so_nguyen_to_(a, n) == 0)
        printf("\nKhong co so nguyen to trong mang");
    else
        printf("\nSo luong so nguyen to trong mang : %d", dem_so_nguyen_to_(a, n));
    // h
    printf("\nTong cac so nguyen to trong mang : %d", tong_so_nguyen_to(a, n));
    // i
    printf("\nTrung binh cong cac so nguyen to trong mang : %.2f", trung_binh_cong_so_nguyen_to(a, n));
    printf("\n");
    // j
    if (pt_duong_dau_tien == 0)
        printf("\nMang khong chua so duong");
    else
        printf("\nPhan tu duong dau tien trong mang : %d", pt_duong_dau_tien(a, n));
    // k
    if (pt_am_cuoi_cung(a, n) == 0)
        printf("\nMang khong chua so am");
    else
        printf("\nPhan tu am cuoi cung trong mang : %d", pt_am_cuoi_cung(a, n));
    printf("\n");
    // i1
    printf("\nGia tri phan tu lon nhat trong mang : %d", gia_tri_lon_nhat(a, n));
    // i2
    printf("\nGia tri phan tu nho nhat trong mang : %d", gia_tri_nho_nhat(a, n));
    printf("\n");
    // m
    if (mang_doi_xung(a, n) == 0)
        printf("\nMang doi xung");
    else
        printf("\nMang khong doi xung");
    return 0;
    sap_xep(a,n);
}