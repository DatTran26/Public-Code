#include <stdio.h>
#include <math.h>
#include <string.h>


void nhap_n(int &n)
{
	do
	{
		printf("Moi nhap n: ");
		scanf("%d",&n);
		if(n<=0) printf("Nhap lai\n");
	}while(n<=0);
}
struct Sinh_Vien
{
	char masv[5];
	char hoten[31];
	float diem;	
};

void nhap(Sinh_Vien &sv)
{
	printf("Nhap mssv: ");
	fflush(stdin);
	gets(sv.masv);
	fflush(stdin);
	printf("\nTen sinh vien: ");
	gets(sv.hoten);
	fflush(stdin);
	printf("\nDiem: ");
	scanf("%f",&sv.diem);
}
void nhap_ds(Sinh_Vien sv[],int n)
{
	for(int i=0;i<n;i++)
	{
		nhap(sv[i]);
	}
}
void xuat(Sinh_Vien sv)
{
	printf("%s\t%s\t%.2f\n",sv.masv,sv.hoten,sv.diem);
}
void xuat_ds(Sinh_Vien sv[],int n)
{
	for(int i=0;i<n;i++)
	{
		xuat(sv[i]);
	}
}

int  find_x(Sinh_Vien sv[],int n,char x[5])
{
	for(int i=0;i<n;i++)
	{
		if(strcmp(sv[i].masv,x)==0)
		{
			xuat(sv[i]);
			return 1;
		}	
	}
	return 0;
}
void Arrange_P(Sinh_Vien sv[],int n)
{
	
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sv[i].diem < sv[j].diem)
            {
                Sinh_Vien temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
}
int main()
{
	int n=0;
	Sinh_Vien sv[100];
	nhap_n(n);
	nhap_ds(sv,n);
	printf("\nDanh sach thong tin sinh vien \n");
	xuat_ds(sv,n);
	
	
	char x[5];
	fflush(stdin);
	printf("\nMoi nhap masv can tim: ");
	gets(x);
	if(find_x(sv,n,x)==0)
		printf("Khong tim thay\n");
	
	printf("\nDanh sach sinh vien theo thu tu diem giam dan:\n");
	Arrange_P(sv,n);
	xuat_ds(sv,n);
	return 0;
}
