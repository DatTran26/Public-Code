#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // Tiếp tục hoàn thiện mã nguồn
    char s1[101], s2[101], s3[101];
    // gets  : nhập có khoảng trắng

    gets(s1);
    gets(s2);
    // strcpy(a,b):copy b vào a
    strcpy(s3, s1);
    // strcat(a,c): copy c vào a
    strcat(s3, " ");
    strcat(s3, s2);
    printf("%s", s3);
    return 0;
}