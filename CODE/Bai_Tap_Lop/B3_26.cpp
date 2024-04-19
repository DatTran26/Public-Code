#include <stdio.h>
#include <string.h>
#include <math.h>

void nhap_chuoi(char *a, char *b)
{
    printf("Nhap chuoi thu nhat: ");
    gets(a);
    printf("Nhap chuoi thu hai: ");
    gets(b);
}
void xuat_chuoi(char *a)
{
    printf("Chuoi : ");
    while (*a != '\0')
    {
        printf("%c", *a);
        a++;
    }
    printf("\n");
}
int do_dai_chuoi(char *a)
{
    return strlen(a);
}

void noi_chuoi(char *a, char *b)
{
    for (int i = 0; i < do_dai_chuoi(a); i++)
    {
        printf("%c", *(a + i));
    }
    printf(" ");
    for (int j = 0; j < do_dai_chuoi(b); j++)
    {
        printf("%c", *(b + j));
    }
}
int chuoi1_2(char *a, char *b)
{
    if (strstr(b,a) != NULL)
    {
        return 1;
    }
}
int chuoi2_1(char *a, char *b)
{
    if (strstr(a,b) != NULL)
    {
        return 1;
    }
}
int so_sanh_c(char *a, char *b)
{
    if (strcmp(a, b) > 0)
        return 1;
    else if (strcmp(a, b) < 0)
    {
        return -1;
    }
    else
        return 0;
}
int main()
{
    char *a, *b;

    a = (char *)malloc(sizeof(int));
    b = (char *)malloc(sizeof(int));

    nhap_chuoi(a, b);
    xuat_chuoi(a);
    xuat_chuoi(b);

    printf("\n");
    printf("Do dai chuoi 1: %d\n", do_dai_chuoi(a));
    printf("Do dai chuoi 2: %d\n", do_dai_chuoi(b));

    printf("\n");
    if (so_sanh_c(a, b) == 0)
        printf("Hai chuoi bang nhau.\n");
    else if (so_sanh_c(a, b) == 1)
    {
        printf("Chuoi thu nhat lon hon chuoi thu hai.\n");
    }
    else
        printf("Chuoi thu hai lon hon chuoi thu nhat.\n");

    printf("\n");
    printf("Noi hai chuoi: ");
    noi_chuoi(a, b);

    printf("\n\n");
    if (chuoi1_2(a, b) == 1)
        printf("Chuoi 1 nam trong chuoi 2.\n");
    else
        printf("Chuoi 1 khong nam trong chuoi 2.\n");

    printf("\n");
    if (chuoi2_1(a, b) == 1)
        printf("Chuoi 2 nam trong chuoi 1.\n");
    else
        printf("Chuoi 2 khong nam trong chuoi 1.\n");

    free(a);
    free(b);
}