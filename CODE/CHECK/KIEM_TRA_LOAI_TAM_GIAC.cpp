#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // Tiếp tục hoàn thiện mã nguồn
    unsigned int a, b, c;
    scanf("%u %u %u", &a, &b, &c);
    if (a < b + c && b < a + c && c < a + b)
    {
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
            printf("Vuong");
        else if (a == b && b == c)
            printf("Deu");
        else if (a == b || a == c || b == c)
            printf("Can");
        else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b)
            printf("Tu");
        else
            printf("Nhon");
    }
    else
        printf("Khong hop le");
    return 0;
}