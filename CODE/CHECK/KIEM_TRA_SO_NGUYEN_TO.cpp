#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // Tiếp tục hoàn thiện mã nguồn
    int n, flag;
    scanf("%d", &n);
    if (n == 2)
        printf("YES");
    else if (n == 1)
        printf("NO");
    else
    {
        flag = 1;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                flag = 0;
            break;
        }
        if (flag == 1)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}