#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // Tiếp tục hoàn thiện mã nguồn
    int ngay, thang, nam;
    scanf("%d %d %d", &ngay, &thang, &nam);
    if (thang > 1 && thang < 12)
    {
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
            {
                if (ngay <= 31)
                {
                    printf("Valid");
                    break;
                }
                else
                {
                    printf("None");
                    break;
                }
            }
            case (4):
            case (6):
            case (9):
            case (11):
            {
                if (ngay <= 30)
                {
                    printf("Valid");
                    break;
                }
                else
                {
                    printf("None");
                    break;
                }
            }
            case (2):
            {
                if ((nam % 400 == 0 || nam % 4 == 0) && ngay <= 29)
                {
                    printf("Valid");
                    break;
                }
                else if (ngay <= 28)
                {
                    printf("Valid");
                    break;
                }
                else
                {
                    printf("None");
                    break;
                }
            }
            }
        }
    }
    else
        printf("None");
    return 0;
}