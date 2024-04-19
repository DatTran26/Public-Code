#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>




void phat_sinh_mang(int *a)
{
	for(int i=0;i<3;i++)
	{	
		for(int j=0;j<3;j++)
			*(a+i*3+j) = rand()%3213;
	}
}
void xuat_mang(int *a)
{
	for(int i=0;i<3;i++)
	{	
		for(int j=0;j<3;j++)
			printf("%d\t",*(a+i*3+j));
		printf("\n");
	}

}
void pt_nam_tren_dc_chinh(int *a)
{
	for(int i=0;i<3;i++)
	{	
		for(int j=0;j<3;j++)
		{
			if(i==j)
				printf("%d\t",*(a+i*3+j));
			else printf("\t");
		}	
		printf("\n");
	}
}

void write_txt(FILE *ptr,int *a)
{
	for(int j=0;j<3;j++)
	{
		fprintf(ptr,"%d\t",*(a+j*3+2));
	}
}
int main()
{
	
	int *a;

	a=(int *)malloc(3*3*sizeof(int));
	
	phat_sinh_mang(a);
	xuat_mang(a);
	
	printf("\nCac phan tu nam tren duong cheo chinh la: \n");
	pt_nam_tren_dc_chinh(a);
	
	
	FILE *ptr=fopen("cot3.txt","w");
	
	if (ptr == NULL)
    {
        printf("\nLoi tao file ");
        exit(1);
    }
	
	write_txt(ptr,a);
	fclose(ptr);
	
	printf("\nDa xuat file!\n");
	free(a);
	return 0;
}
