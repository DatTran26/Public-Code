//                 CON TRO

// 1 Nhap ds sv
// 2 Xuat ds sv
// 3 Nhap MSSV,MMH,Time
// 4 Tinh DTB
// 5 Tim Diem MAX_P

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct DIEMTHI
{
    char MSSV[20];
    char MMH[10];
    int Time;
    float Diem;
};
void Nhap(DIEMTHI *dt)
{
    fflush(stdin);
    gets(dt->MSSV);
    fflush(stdin);
    gets(dt->MMH);

    scanf("%d", &dt->Time);
    scanf("%f", &dt->Diem);
}
void Xuat(DIEMTHI dt)
{
    printf("|%-21s|%-11s|%-2d|%-3.2f|\n", dt.MSSV, dt.MMH, dt.Time, dt.Diem);
}

void Nhap_DS(DIEMTHI *dt, int n)
{
    for (int i = 0; i < n; i++)
    {
        Nhap(dt + i);
    }
}
void Xuat_DS(DIEMTHI dt[], int n)
{
    for (int i = 0; i < n; i++)
    {
        Xuat(dt[i]);
    }
}
void D3_in(DIEMTHI *dt, int n)
{
    printf("\n");
    DIEMTHI *find;
    fflush(stdin);
    gets(find->MSSV);
    fflush(stdin);
    gets(find->MMH);
    scanf("%d", &find->Time);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if ((strcmp(find->MSSV, (dt + i)->MSSV) == 0) && (strcmp(find->MMH, (dt + i)->MMH) == 0) && (find->Time - (dt + i)->Time) == 0)
        {
            printf("Diem tim thay: %.2f\n", dt[i].Diem);
        }
    }
}
int MAX_P(DIEMTHI *dt, int n)
{
    int max = dt->Diem;
    for (int i = 0; i < n; i++)
    {
        if (max < (dt + i)->Diem)
        {
            max = (dt + i)->Diem;
        }
    }
    return max;
}
float DTB(DIEMTHI *dt, int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += (dt + i)->Diem;
    }
    return (float)tong / n;
}
int main()
{

    int n;
    scanf("%d", &n);
    DIEMTHI *dt;
    dt = (DIEMTHI *)malloc(n * sizeof(DIEMTHI));
    Nhap_DS(dt, n);
    Xuat_DS(dt, n);
    D3_in(dt, n);

    printf("Diem cao nhat la: %d\n", MAX_P(dt, n));
    printf("Diem trung binh cua cac sinh vien: %.2f\n", DTB(dt, n));
    free(dt);

    return 0;
}