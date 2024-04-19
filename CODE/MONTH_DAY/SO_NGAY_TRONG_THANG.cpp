#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // Tiếp tục hoàn thiện mã nguồn
    int ngay, thang, nam;
    scanf("%d %d", &thang, &nam);
    if (thang > 1 && thang < 12)
    {

        switch (thang)
        {
        case (1):
        case (3):
        case (5):
        case (7):
        case (8):
        case (10):
        case (12):
            printf("31");
            break;
        case (4):
        case (6):
        case (9):
        case (11):
            printf("30");
            break;
        case (2):
        {
            if (nam % 400 == 0)
                printf("29");
            else
                printf("28");
        }
        }
    }
    else
        printf("None");
    return 0;
}