#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>


void nhap_n(int &n)
{
	do
	{
		printf("Moi nhap n: ");
		scanf("%d",&n);
		if(n<=0) printf("Nhap lai\n");
	}while(n<=0);
}


void nhap_mang(int *a,int n)
{
	for(int i=0;i<n;i++)
	{	
		scanf("%d",(a+i));
	}
}
void xuat_mang(int *a,int n)
{
	printf("\nMang vua nhap: ");
	for(int i=0;i<n;i++)
	{	
		printf("%d\t",*(a+i));
	}
}
void  find_chan_cm(int *a,int n)
{
	int chan=0;
	int vi_tri=0;
	for(int i=0;i<n;i++)
	{
		if(*(a+i)%2==0)
		{
			chan=*(a+i);
			vi_tri=i;
		}
	}
	if(chan==0)
		printf("\nMang khong co phan tu chan\n");
	else 
	{
		printf("\nGia tri cua phan tu chan cuoi la %d tai vi tri %d\n",chan,vi_tri);
	}
	
}
int tong_le(int *a, int n)
{

    if (n == 0)
        return 0;
    if (*(a + n - 1) % 2 != 0)
        return *(a + n - 1) + tong_le(a, n - 1);
    else
        return 0 + tong_le(a, n - 1);
}
int main()
{
	
	int *a;
	int n;
	
	nhap_n(n);
	
	a=(int *)malloc(n*sizeof(int));
	
	nhap_mang(a,n);
	xuat_mang(a,n);
	
	find_chan_cm(a,n);
	printf("\nTong cac phan tu le : %d\n",tong_le(a,n));
	
	
	free(a);
	return 0;
}
