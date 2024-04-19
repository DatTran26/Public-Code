#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int j = 1;
    int check = 0;
    while (pow(j, 2) <= n)
    {
        j++;
        if (pow(j, 5) == n)
        {
            check = 1;
            printf("%d", j);
            break;
        }
    }
    if (check == 0)
        printf("Khong co so nao hop le");
}