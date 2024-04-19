#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct DATE
{
    int ngay, thang, nam;
};
struct BK
{
    int MaBK;
    char NgGui[50];
    char NgNhan[50];
    float Trluong;
    DATE NgayGui;
    char Nd[100];
    int DonGia;
};
void NhapDATE(DATE &x)
{
    scanf("%d%*c%d%*c%d", &x.ngay, &x.thang, &x.nam);
}
void XuatDATE(DATE x)
{
    printf("%d/%d/%d", x.ngay, x.thang, x.nam);
}
void Nhap1BK(BK &x)
{
    scanf("%d", &x.MaBK);
    getchar();
    gets(x.NgGui);
    gets(x.NgNhan);
    scanf("%f", &x.Trluong);
    NhapDATE(x.NgayGui);
    getchar();
    gets(x.Nd);
    scanf("%d", &x.DonGia);
}
void Xuat1BK(BK x)
{
    printf("%d - %s - %s - %.2f - ", x.MaBK, x.NgGui, x.NgNhan, x.Trluong);
    XuatDATE(x.NgayGui);
    printf(" - %s - %d", x.Nd, x.DonGia);
}
void NhapMang(BK a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        Nhap1BK(a[i]);
    }
}
void XuatMang(BK a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        Xuat1BK(a[i]);
        printf("\n");
    }
}
int Timten(BK a[], int n, char ten[])
{

    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].NgGui, ten) == 0)
        {
            return a[i].MaBK;
        }
    }
    return -1;
}

int main()
{
    BK a[100];
    int n;
    char ten[50];
    scanf("%d", &n);
    getchar();
    NhapMang(a, n);
    getchar();
    gets(ten);
    int kq = Timten(a, n, ten);
    if (kq == -1)
        printf("Not Found");
    else
        printf("%d", kq);
    return 0;
}