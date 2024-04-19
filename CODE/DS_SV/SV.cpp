#include <stdio.h>
#include <math.h>
#include <string.h>

/*
FN (Full Name)
SI (Student ID)
B (Birthday)
PN (Phone Nuumber)
S (Sex)
P (Point)
CL (Class)


Simple Functions:
Nhap_TT_SV()
Xuat_TT_SV()
Nhap_DS_SV()
Xuat_DS_SV()


Advanced Functions:
Arrange_P()  (Sap xep theo diem so)
Arrange_SI() (Sap xep theo mssv)
Arrange_SLSV() (Sap xep theo so luong ky tu cua ten)
Find_in4() => FUll IN4 (Tim thong tin sv)


*/

struct SV
{
    char FN[30];
    int SI, PN, P;
    char S[6], CL[6];
} sv;

struct birthday
{
    int day, month, year;
} B;

void Sl_SV(int &n)
{
    printf("Nhap so luong sv: ");
    do
    {
        scanf("%d", &n);
        if (n <= 0)
            printf("Moi ban nhap lai: ");
    } while (n <= 0);
}
void Nhap_TT_SV(SV &ttsv, birthday &b)
{
    fflush(stdin);
    printf("Ho va ten: ");
    gets(ttsv.FN);
    fflush(stdin);
    printf("Ma so sinh vien: ");
    scanf("%d", &ttsv.SI);
    printf("Ngay thang nam sinh: ");
    scanf("%d%*c%d%*c%d", &b.day, &b.month, &b.year);
    printf("So dien thoai: ");
    scanf("%d", &ttsv.PN);
    fflush(stdin);
    printf("Gioi tinh: ");
    gets(ttsv.S);
    fflush(stdin);
    printf("Lop: ");
    gets(ttsv.CL);
    fflush(stdin);
    printf("Diem so: ");
    scanf("%d", &ttsv.P);
}
void Xuat_TT_SV(SV ttsv, birthday b)
{
    printf("| %-20s | %-14d | %-2d/%-2d/%-2d | %-15d | %-5s | %-10s | %-4d |", ttsv.FN, ttsv.SI, b.day, b.month, b.year, ttsv.PN, ttsv.S, ttsv.CL, ttsv.P);
}

void Nhap_DS_SV(int n, SV ttsv[], birthday b[])
{
    for (int i = 0; i < n; i++)
    {
        printf("=============Sinh Vien %d==============\n", i + 1);
        Nhap_TT_SV(ttsv[i], b[i]);
    }
}
void Xuat_DS_SV(int n, SV ttsv[], birthday b[])
{
    
    for (int i = 0; i < n; i++)
    {
        printf("\n %d :", i + 1);
        Xuat_TT_SV(ttsv[i], b[i]);
    }
}

void Arrange_P(int n, SV ttsv[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ttsv[i].P > ttsv[j].P)
            {
                SV temp = ttsv[i];
                ttsv[i] = ttsv[j];
                ttsv[j] = temp;
            }
        }
    }
}
void Arrange_SI(int n, SV ttsv[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ttsv[i].SI > ttsv[j].SI)
            {
                SV temp = ttsv[i];
                ttsv[i] = ttsv[j];
                ttsv[j] = temp;
            }
        }
    }
}
void Arrange_FN(int n, SV ttsv[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strlen(ttsv[i].FN) > strlen(ttsv[j].FN))
            {
                SV temp = ttsv[i];
                ttsv[i] = ttsv[j];
                ttsv[j] = temp;
            }
        }
    }
}
int main()
{
    int n;
    SV sv[1000];
    birthday b[1000];
    Sl_SV(n);
    Nhap_DS_SV(n, sv, b);
    printf("\nDanh sach sinh vien: ");
    Xuat_DS_SV(n, sv, b);
    Arrange_P(n, sv);
    printf("\nDanh sach sinh vien sap xep theo diem: ");
    Xuat_DS_SV(n, sv, b);
    Arrange_SI(n, sv);
    printf("\nDanh sach sinh vien sap xep theo mssv: ");
    Xuat_DS_SV(n, sv, b);
    Arrange_FN(n, sv);
    printf("\nDanh sach sinh vien sap xep theo len ten: ");
    Xuat_DS_SV(n, sv, b);

    return 0;
}