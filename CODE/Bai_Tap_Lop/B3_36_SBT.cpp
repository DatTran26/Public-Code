#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nhap(char a[])
{
    fflush(stdin);
    gets(a);
}
void xuat(char a[])
{
    puts(a);
}
void check(char a[])
{
    FILE *f1 = fopen("D:\\Document\\CODE_VN\\C++\\CODE\\FILE\\in.txt", "w");
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == 'a' || a[i] == 'o' || a[i] == 'i' || a[i] == 'e' || a[i] == 'u' || a[i] == 'y')
        {
            fprintf(f1, "%c ", a[i]);
        }
    }
    fclose(f1);
}
int main()
{
    char a[100];
    nhap(a);
    xuat(a);
    check(a);
    return 0;
}