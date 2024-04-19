#include <stdio.h>
#include <math.h>

int main()
{
    int oct, bin, dec = 0;
    printf("Nhap bin : ");
    scanf("%d", &bin);
    // Bin2Dec
    int dem = 0;
    while (bin != 0)
    {
        int du = bin % 10;

        dec = dec + du * pow(2, dem);
        dem++;

        bin = bin / 10;
    }

    printf("He 10 : %d\n", dec);
    // Dec2Oct
    int du2;
    int s[100] = {0};
    int stt = 0;
    while ((int)dec != 0)
    {
        du2 = dec % 8;
        s[stt] = du2;
        stt++;
        dec /= 8;
    }
    printf("He 8 : ");
    for (int i = stt - 1; i >= 0; i--)
    {
        printf("%d", s[i]);
    }

    return 0;
}