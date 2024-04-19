#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // strcmp     : có phân biệt hoa thường
    // strcasecmp : không phân biệt hoa thường
    // Tiếp tục hoàn thiện mã nguồn
    char s1[101], s2[101];
    scanf("%s", &s1);
    scanf("%s", &s2);
    if (strcasecmp(s1, s2) > 0)
        printf(">");
    else if (strcasecmp(s1, s2) == 0)
        printf("=");
    else
        printf("<");
    return 0;
}