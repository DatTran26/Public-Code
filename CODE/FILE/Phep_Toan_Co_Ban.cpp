#include <stdio.h>
#include <stdlib.h>

void Tinh(char fn[])
{
    int a, b;
    FILE *ptr = fopen(fn, "w");
    if (ptr == NULL)
    {
        printf("\nLoi tao file");
        exit(1);
    }
    printf("\nNhap hai so nguyen: ");
    scanf("%d%*c%d", &a, &b);
    int tong = a + b;
    int hieu = abs(a - b);
    int tich = a * b;
    float thuong = (float)a / b;
    fprintf(ptr, "%d %d %d %.2f", tong, hieu, tich, thuong);
    fclose(ptr);
}
int main()
{
    char fn[] = "D://Document//CODE_VN//C++//CODE//FILE//out.txt";
    Tinh(fn);
    return 0;
}