#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int d, c, mt[MAX][MAX];
    FILE *a = fopen("D:\\Document\\CODE_VN\\C++\\CODE\\FILE\\in.txt", "r");
    if (a == NULL)
    {
        printf("LOi");
        exit(1);
    }
    fscanf(a, "%d %d", &d, &c);
    fclose(a);
    // d = 5;
    // c = 6;

    FILE *b = fopen("D:\\Document\\CODE_VN\\C++\\CODE\\FILE\\in.txt", "a");

    fprintf(b, "\n");
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mt[i][j] = rand() % 101;
            fprintf(b, "%d ", mt[i][j]);
        }
        fprintf(b, "\n");
    }
    fclose(b);
    return 0;
}