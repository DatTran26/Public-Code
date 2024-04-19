#include <stdio.h>
#include <math.h>

struct phanso
{
    int t, m;
};
void nhap(phanso &ps)
{
    scanf("%d%*c%d", &ps.t, &ps.m);
}
void xuat(phanso ps)
{
    printf("%d/%d ", ps.t, ps.m);
}
int ucln(int a, int b)
{
    a = abs(a);
    b = abs(b);
    if (a * b == 0)
        return a + b;
    while (a != b)
    {

        if (a >= b)
            a -= b;
        else
            b -= a;
    }
    return a;
}
void rutgonps(phanso &psrg)
{
    int uc = ucln(psrg.t, psrg.m);
    psrg.t = psrg.t / uc;
    psrg.m = psrg.m / uc;
}
int thuongps(phanso ps1, phanso ps2, phanso &thuong)
{
    if (ps2.t == 0)
        return 0;
    thuong.t = ps1.t * ps2.m;
    thuong.m = ps1.m * ps2.t;
    rutgonps(thuong);
    return 1;
}
int main()
{
    phanso a;
    phanso b;
    phanso thuong;

    nhap(a);
    nhap(b);
    xuat(a);
    xuat(b);
    int flag = thuongps(a, b, thuong);
    if (flag == 0)
        printf("Khong chia duoc");
    else
        xuat(thuong);
    return 0;
}