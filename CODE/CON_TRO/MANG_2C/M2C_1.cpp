//Nhap Xuat mang 2C
//Tim phan tu lơn nhat cua ma tran
//Tinh tong tat ca cac phan tu nam o duong bien của mt


#include <stdio.h>

void nhap_dc(int &d, int &c)
{

    scanf("%d%*c%d", &d, &c);
}
void nhap(int d, int c, int *a)
{
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", (a + i * c + j));
        }
    }
}
void xuat(int d, int c, int *a)
{
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d", *(a + i * c + j));
        }
    }
}
int mvl(int d, int c, int *a)
{
    int max = *(a);
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < *(a + i * c + j))
                max = *(a + i * c + j);
        }
    }
    return max;
}
int tong_bien(int d, int c, int *a)
{
    int t = 0;
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == 0 || i == d - 1 || j == 0 || j == c - 1)
                t += *(a + i * c + j);
        }
    }
    return t;
}

int main()
{
    int d, c, *a;
    nhap_dc(d, c);
    a = new int[d * c];
    nhap(d, c, a);
    xuat(d, c, a);
    printf("\nGia tri lon nhat: %d", mvl(d, c, a));
    printf("\nTong bien: %d", tong_bien(d, c, a));
    return 0;
}