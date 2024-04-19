#include <stdio.h>
#include <math.h>
#define MAX 100

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
void pt_duong_dau_tien(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            printf("Phan tu duong dau tien la %d o vi tri %d .", a[i], i);
            break;
        }
        else
            printf("\nMang khong chua so duong");
    }
}
void pt_duong_cuoi_cung(int a[], int n)
{
    int pt_duong = 0;
    int vt;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            pt_duong = a[i];
            vt = i;
        }
    }
    if (pt_duong == 0)
        printf("\nMang khong chua so duong");
    else
        printf("Phan tu duong cuoi cung la %d o vi tri %d .", pt_duong, vt);
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
int sl_gia_tri_lon_nhat(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (gia_tri_lon_nhat(a, n) == a[i])
            dem += 1;
    }
    return dem;
}
void vi_tri_pt_max(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (gia_tri_lon_nhat(a, n) == a[i])
            printf("%d ", i);
    }
}
void ThemPhanTu_vtk(int a[], int index, int PhanTu, int &n)
{

    if (index <= 0)
    {
        index = 0;
    }
    if (index >= n)
    {
        index = n;
    }
    for (int i = n; i > index; i--)
    {
        a[i] = a[i - 1];
    }
    a[index] = PhanTu;
    n++;
}
void XoaPhanTu_vtk(int a[], int index, int &n)
{

    for (int i = index; i <= n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}
int kt_sole(int a[],int n)
{
    for (int i = 0; i < n;i++)
    {
        if(a[i]%2!=0)
            return 1;
    }
    return 0;
}
void chuyen_so_chan(int a[],int n,int b[],int &slb)
{
    
    for (int i = 0; i < n;i++)
    {
        if(a[i]%2==0)
        {
            b[slb] = a[i];
            slb++;
        }
    }
}
int main()
{
    int a[MAX],b[MAX], n,vi_tri,value;
    nhap(n, a);
    xuat(a, n);
    printf("\n");
    pt_duong_dau_tien(a, n);
    printf("\n");
    pt_duong_cuoi_cung(a, n);
    printf("\n");
    printf("Gia tri phan tu lon nhat trong mang : %d", gia_tri_lon_nhat(a, n));
    printf("\n");
    printf("So luong phan tu lon nhat trong mang : %d", sl_gia_tri_lon_nhat(a, n));
    printf("\n");
    printf("Vi tri xuat hien phan tu lon nhat : ");
    vi_tri_pt_max(a, n);
    printf("\n");
    printf("Nhap vi tri muon them: ");
    scanf("%d", &vi_tri);
    printf("Gia tri phan tu muon them: ");
    scanf("%d", &value);
    ThemPhanTu_vtk(a, vi_tri, value, n);
    xuat(a, n);
    printf("\n");
    printf("Nhap vi tri muon xoa: ");
    scanf("%d", &vi_tri);
    XoaPhanTu_vtk(a, vi_tri, n);
    xuat(a, n);
    printf("\n");
    if(kt_sole(a,n)==1)
        printf("Mang co chua so le .");
    printf("\n");
    int slb = 0;
    chuyen_so_chan(a, n, b, slb);
    xuat(b, slb);
    return 0;
}