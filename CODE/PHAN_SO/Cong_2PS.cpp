#include <stdio.h>
#include <math.h>

struct phan_so
{
    int t, m;
};

int UCLN(int x, int y)
{
    x = abs(x);
    y = abs(y);
    if (x * y == 0)
        return x + y;
    while (x != y)
    {
        if (x >= y)
            x -= y;
        else
            y -= x;
    }
    return x;
}
void rutgonpc(phan_so &x)
{
    int uc = UCLN(x.t, x.m);
    x.t = x.t / uc;
    x.m = x.m / uc;
}
phan_so tong(phan_so a, phan_so b)
{
    phan_so tong;
    tong.t = a.t * b.m + b.t * a.m;
    tong.m = a.m * b.m;
    rutgonpc(tong);
    return tong;
}

void nhap(phan_so &ps)
{
    scanf("%d%*c%d", &ps.t, &ps.m);
}
void xuat(phan_so ps)
{
    if (ps.m == 1)
        printf("%d", ps.t);
    else
        printf("%d/%d ", ps.t, ps.m);
}

int main()
{
    phan_so a, b;
    nhap(a);
    nhap(b);
    xuat(a);
    xuat(b);
    printf("\n");
    phan_so tongps = tong(a, b);
    xuat(tongps);
    return 0;
}