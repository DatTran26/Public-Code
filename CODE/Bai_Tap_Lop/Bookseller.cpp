#include <stdio.h>

struct B
{
    int ISBN, Q;
    char TT[51];
    float P;
};

void Sl_B(int &n)
{
    printf("Nhap so luong sach: ");
    do
    {
        scanf("%d", &n);
        if (n <= 0)
            printf("Moi ban nhap lai: ");
    } while (n <= 0);
}
void nhap_b(struct B &books)
{
    printf("Nhap ma sach: ");
    scanf("%d", &books.ISBN);
    fflush(stdin);
    printf("Nhap tieu de: ");
    gets(books.TT);
    fflush(stdin);
    printf("Nhap gia sach: ");
    scanf("%f", &books.P);
    printf("Nhap so luong: ");
    scanf("%d", &books.Q);
}
void xuat_b(struct B books)
{
    printf(" %-3d  %-13d  %-20s  %.2f ", books.Q, books.ISBN, books.TT, books.P);
}
void Nhap_DS_B(int n, struct B books[])
{
    for (int i = 0; i < n; i++)
    {
        printf("=============BOOKS %d==============\n", i + 1);
        nhap_b(books[i]);
    }
}
void Xuat_DS_B(int n, struct B books[])
{

    float total = 0;
    printf("\nBK bookseller\n\n\n");
    printf("Qty   ISBN           Title                 Price  Total\n");
    printf("-------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        xuat_b(books[i]);
        float booksi = (float)books[i].P * books[i].Q;
        float b_vat = (float)booksi * 4 / 100;
        total += booksi + b_vat;
        printf(" %.2f \n", booksi);
    }
    printf("\n\nVAT: 4%");
    printf("\nTotal: %.2f ", total);
}
int main()
{
    int n;
    struct B books[10000];
    Sl_B(n);
    Nhap_DS_B(n, books);
    Xuat_DS_B(n, books);
    return 0;
}