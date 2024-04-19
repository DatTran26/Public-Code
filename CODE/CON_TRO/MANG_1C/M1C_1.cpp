
//Nhap Xuat 1c
//Tinh tong cac pt
//So luong chan
//Trung binh cong pt chan

#include <stdio.h>

void nhap(int n, int *a)
{
    for (int i = 0; i < n; i++)
    {
        printf("\na[%d] = ", i);
        scanf("%d", (a + i));
    }
}
void xuat(int n, int *a)
{
    printf("\nDay vua nhap la : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }
}
int tong(int n, int *a)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += *(a + i);
    }
    return tong;
}

int sl_chan(int n, int *a, int &sl, int &tong)
{
    sl = 0;
    tong = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) % 2 == 0)
        {
            sl += 1;
            tong += *(a + i);
        }
    }
    if (sl == 0)
        return 0;
    else
        return 1;
}
double trung_binh_pt(int sl, int tong)
{
    return (double)tong / sl;
}

int main()
{
    int n, *a, sl, t;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 10);
    a = new int[n];

    nhap(n, a);
    xuat(n, a);
    // Tong cac phan tu
    printf("Tong cac phan tu: %d", tong(n, a));
    // Dem so luong phan tu co gia tri chan
    if (sl_chan(n, a, sl, t) == 0)
        printf("\nMang khong co so chan");
    else
        printf("\nSo luong cac phan tu chan trong mang: %d", sl);

    //Trung binh cong cac phan tu co gia tri chan
    printf("\n%2f", trung_binh_pt(sl, t));
    return 0;
}