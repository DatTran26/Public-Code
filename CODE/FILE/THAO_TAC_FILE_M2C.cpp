#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptra, *ptrb;
    ptra = fopen("D://Document//CODE_VN//C++//CODE//FILE//in.txt", "r");
    ptrb = fopen("D://Document//CODE_VN//C++//CODE//FILE//out.txt", "w");
    if (ptra == NULL)
    {
        printf("\nLoi tao file in");
        exit(1);
    }
    if (ptrb == NULL)
    {
        printf("\nLoi tao file out");
        exit(1);
    }

    int d, c;
    fscanf(ptra, "%d%*c%d", &d, &c);

    int *a = (int *)malloc(5 * 5 * sizeof(int));
    // lay data khi biet so luong phan tu
    // for (int i = 0; i < d; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         fscanf(ptra,"%d", (a+i*d+j));
    //     }

    // }

    //lay data khi khong biet so luong phan tu
    int g = 0;
    while (!feof(ptra))
    {
        fscanf(ptra, "%d", (a + g));
        g++;
    }

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < c; j++)
        {
            fprintf(ptrb, "%d ", *(a + i * d + j));
        }
        fprintf(ptrb, "\n");
    }
    fclose(ptra);
    fclose(ptrb);
    return 0;
}