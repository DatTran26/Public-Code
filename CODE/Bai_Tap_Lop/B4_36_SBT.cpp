#include <stdio.h>
#include <stdlib.h>

struct data
{
    char mh[5];
    int sl;
    float dg;
    float st;
};

void nhap(FILE *a, data &dh)
{
    fscanf(a, "%s %d %f", &dh.mh, &dh.sl, &dh.dg);
}
void nhap_ds(FILE *a, data dh[], int &i)
{

    while (!feof(a))
    {
        nhap(a, dh[i]);
        i++;
    }
}
void xuat(data dh)
{
    printf("%s %d %.2f %.2f\n", dh.mh, dh.sl, dh.dg, dh.sl * dh.dg);
}
void xuat_ds(data dh[], int n)
{
    for (int i = 0; i < n; i++)
    {
        xuat(dh[i]);
    }
}
int main()
{
    data dh[1000];
    int i = 0;
    FILE *a = fopen("D://Document//CODE_VN//C++//CODE//FILE//in.txt", "r");
    nhap_ds(a, dh, i);
    xuat_ds(dh, i);
    fclose(a);
    return 0;
}