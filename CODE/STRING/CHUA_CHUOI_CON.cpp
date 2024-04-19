#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // Tiếp tục hoàn thiện mã nguồn
    char s1[101], s2[101];
    char *ret;
    gets(s1);
    gets(s2);
    // strstr nếu không chứa trả ra NULL ,và ngược lại.
    if (strstr(s1, s2) == NULL)
        printf("NO");
    else
        printf("YES");
    return 0;
}