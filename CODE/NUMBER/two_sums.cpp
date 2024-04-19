#include <stdio.h>
void NhapMaTran(int a[6][10], int k)
{
    for (int i = 0; i < k; i++)
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
}
int tc1(int a[6][10], int k, int s)
{
    int tong = 0;
    for (int i = 0; i < k; i++) 
    {
        if (a[i][0] == s)
        {
            if (a[i][2] > a[i][3])
                tong += 3;
            else if (a[i][2] == a[i][3])
                tong += 1;
        }
        else if (a[i][1] == s)
        {
            if (a[i][2] < a[i][3])
                tong += 3;
            else if (a[i][2] == a[i][3])
                tong += 1;
        }
    }
    return tong;
}
int tc2(int a[6][10], int k, int s)
{
    int tong = 0;
    for (int i = 0; i < k; i++)
    {
        if (a[i][0] == s)
        {
            if (a[i][2] > a[i][3])
                tong += 3;
            else if (a[i][2] == a[i][3])
                tong += 1;
        }
        else if (a[i][1] == s)
        {
            if (a[i][2] < a[i][3])
                tong += 3;
            else if (a[i][2] == a[i][3])
                tong += 1;
        }
    }
    return tong;
}

void xap_xep_mang(int a[5], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
        {
            if (a[j] < a[i])
            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
}

int main()
{
    int k;
    int diem_tong[5];
    int diem_tong_sx[5];
    int data[6][10];
    int mang_lt[5];
    scanf("%d", &k);
    NhapMaTran(data, k);
    for (int i = 1; i <= 4; i++)
    {
        diem_tong[i] = tc1(data, k, i);
    }
    for (int i = 1; i <= 4; i++)
    {
        diem_tong_sx[i] = diem_tong[i];
    }
    xap_xep_mang(diem_tong_sx, 5);
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (diem_tong_sx[i] == diem_tong[j])
            {
                printf("%d ", j);
                diem_tong[j] = -1;
                break;
            }
        }
    }
    // for (int i = 3; i >= 4; i--)
    // {
    //     for (int j = 1; j <= 4; j++)
    //     {
    //         if (diem_tong_sx[i] == diem_tong[j] )
    //         {
    //             printf("%d ", j);
    //             diem_tong[j] = -1;
    //             break;
    //         }
    //     }
    // }
    return 0;
}