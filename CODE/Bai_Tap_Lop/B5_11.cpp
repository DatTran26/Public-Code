#include <stdio.h>
#include <math.h>
#include <string.h>

/*
SI (Student ID)
FN (Full Name)
S (Sex)
B (Birthday)
CL (Class)
P (Point)



Simple Functions:
Nhap_TT_SV()
Xuat_TT_SV()
Nhap_DS_SV()
Xuat_DS_SV()


Advanced Functions:
Arrange_P5()  (Sap xep theo diem so)>5
Arrange_CL() (Sap xep theo lop(nghanh cntt))
Count_Su()   (Dem so luong sinh vien nu)
High_P() (Xuat sv voi diem cao nhat)
Add_St_End()    (Them sinh vien vao cuoi ds)
Delete_St_X()   (Xoa sinh vien voi ma so X)
Arrange_P()  (Sap xep theo diem so tang dan)


================================
Find_in4() => FUll IN4 (Tim thong tin sv)


*/

struct SV
{
    char FN[30];
    long long int SI;
    float P;
    char S[6], CL[10];
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
    printf("Ma so sinh vien: ");
    scanf("%lld", &ttsv.SI);
    fflush(stdin);
    printf("Ho va ten: ");
    gets(ttsv.FN);
    printf("Gioi tinh: ");
    gets(ttsv.S);
    fflush(stdin);
    printf("Ngay thang nam sinh: ");
    scanf("%d%*c%d%*c%d", &b.day, &b.month, &b.year);
    fflush(stdin);
    printf("Lop: ");
    gets(ttsv.CL);
    fflush(stdin);
    printf("Diem so: ");
    scanf("%f", &ttsv.P);
}
void Xuat_TT_SV(SV ttsv, birthday b)
{
    printf("| %-14lld | %-20s | %-5s | %-2d/%-2d/%-2d | %-8s |  %-6.2f |", ttsv.SI, ttsv.FN, ttsv.S, b.day, b.month, b.year, ttsv.CL, ttsv.P);
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
    printf("\nSTT|       MSSV     |       Ho va ten      |  SEX  |  Birthday  |   Lop    |  Point  |");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d  ", i + 1);
        Xuat_TT_SV(ttsv[i], b[i]);
    }
}
void Arrange_P5(int n, SV ttsv[], birthday b[])
{
    printf("\nSTT|       MSSV     |       Ho va ten      |  SEX  |  Birthday  |   Lop    |  Point  |");
    for (int i = 0; i < n; i++)
    {
        if (ttsv[i].P > 5)
        {
            printf("\n%d  ", i + 1);
            Xuat_TT_SV(ttsv[i], b[i]);
        }
    }
}
void Arrange_CL(int n, SV ttsv[], birthday b[])
{
    for (int i = 0; i < n; i++)
    {
        if (strstr(ttsv[i].CL, "TH") != NULL)
        {
            printf("\n%d  ", i + 1);
            Xuat_TT_SV(ttsv[i], b[i]);
        }
    }
}
int Count_SNu(int n, SV ttsv[])
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (strlen(ttsv[i].S) > 2)
            dem++;
    }
    return dem;
}
void High_P(int n, SV ttsv[], birthday b[])
{
    printf("\n\nDanh sach sinh vien co diem trung binh cao nhat: ");
    printf("\nSTT|       MSSV     |       Ho va ten      |  SEX  |  Birthday  |   Lop    |  Point  |");

    int MAX = ttsv[0].P;
    for (int i = 0; i < n; i++)
    {
        if (MAX < ttsv[i].P)
        {
            MAX = ttsv[i].P;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (MAX == ttsv[j].P)
        {
            printf("\n%d  ", j + 1);
            Xuat_TT_SV(ttsv[j], b[j]);
        }
    }
}
void Add_St_End(int n, SV ttsv[], birthday b[])
{
    printf("\n\nThem 1 sinh vien: \n");
    n++;
    Nhap_TT_SV(ttsv[n - 1], b[n - 1]);
    Xuat_DS_SV(n, ttsv, b);
}

void Delete_St_X(int n, SV ttsv[], birthday b[], long long int &x)
{
    printf("\n\nNhap MSSV can xoa: ");
    scanf("%lld", &x);
    int vi_tri = 0;
    for (int j = 0; j < n; j++)
    {
        if (ttsv[j].SI == x)
        {
            vi_tri = j;
        }
    }
    for (int i = vi_tri; i <= n - 1; i++)
    {
        ttsv[i] = ttsv[i + 1];
    }
    n--;
    printf("\nDanh sach sinh vien sau khi xoa: ");
    Xuat_DS_SV(n, ttsv, b);
}
void Find_St_X(int n, SV ttsv[], birthday b[], long long int &x)
{
    printf("\n\nNhap MSSV can tim: ");
    scanf("%lld", &x);
    int vi_tri = 0;
    for (int j = 0; j < n; j++)
    {
        if (ttsv[j].SI == x)
        {
            vi_tri = j;
            break;
        }
    }
    printf("\nThong tin sinh vien: ");
    printf("\nSTT|       MSSV     |       Ho va ten      |  SEX  |  Birthday  |   Lop    |  Point  |");
    printf("\n%d  ", 1);
    Xuat_TT_SV(ttsv[vi_tri], b[vi_tri]);
}
void Arrange_P(int n, SV ttsv[], birthday b[])
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
    Xuat_DS_SV(n, ttsv, b);
}

int main()
{
    int n;
    long long int x;
    SV sv[1000];
    birthday b[1000];
    int choose;

    Sl_SV(n);
    Nhap_DS_SV(n, sv, b);
    printf("\nDanh sach sinh vien: ");
    Xuat_DS_SV(n, sv, b);
    choose = 1;
    while (choose != 0)
    {
        printf("\n\n----------------------LIST FUNCTION------------------------");
        printf("\n1. Danh sach sinh vien co diem trung binh lon hon 5 ");
        printf("\n2. Danh sach sinh vien nganh CNTT ");
        printf("\n3. So luong sinh vien nu trong danh sach ");
        printf("\n4. Danh sach sinh vien co diem trung binh cao nhat ");
        printf("\n5. Them 1 sinh vien vao cuoi danh sach");
        printf("\n6. Xoa mot sinh vien  ");
        printf("\n7. Sap xep danh sach sinh vien tang dan theo diem ");
        printf("\n8. Xem thong tin sinh vien  ");
        printf("\n-----------------------------------------------------------");
        printf("\n=> Nhap su lua chon cua ban (Nhan 0 de EXIT): ");

        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            printf("\n\nDanh sach sinh vien co diem trung binh lon hon 5: ");
            Arrange_P5(n, sv, b);
            break;
        case 2:
            printf("\n\nDanh sach sinh vien nganh CNTT: ");
            Arrange_CL(n, sv, b);
            break;
        case 3:
            printf("\n\nSo luong sinh vien nu: %d", Count_SNu(n, sv));
            break;
        case 4:
            High_P(n, sv, b);
            break;
        case 5:
            Add_St_End(n, sv, b);
            break;
        case 6:
            Delete_St_X(n, sv, b, x);
            break;
        case 7:
            Arrange_P(n, sv, b);
            break;
        case 8:
            Find_St_X(n, sv, b, x);
            break;
        }
    }
    return 0;
}