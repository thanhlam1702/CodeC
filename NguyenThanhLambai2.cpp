#include<stdio.h>
#define MAX 10
#include<string.h>
void Nhap(int &d,int &c)
{
	do
	{
		printf("\nMoi ban nhap so dong d>0 va d<%d d=",MAX);
		scanf("%d",&d);
		if(d<1||d>MAX)
			printf("\nBan nhap sai nhap lai:");
	}while(d<1||d>MAX);


	do
	{
		printf("\nMoi ban nhap so cot c>0 va c<%d c=",MAX);
		scanf("%d",&c);
		if(c<1||c>MAX)
			printf("\nBan nhap sai nhap lai:");
	}while(c<1||c>MAX);

}
void NhapMang(char a[][MAX],int d,int c)
{
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
			{
				printf("a[%d][%d]=",i,j);
				fflush(stdin);
				scanf("%c",&a[i][j]);
			}
	}
}
void XuatMang(char a[][MAX],int d,int c)
{
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%4c",a[i][j]);
				
		}
		printf("\n");
	}
}
int DemKyTu(char a[][MAX],int d,int c)
{
	int dem=0;
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			if('0'<a[i][j]&&a[i][j]<'9')
				dem++;
		}
	}
	return dem;
}
char KyTuLonNhat(char a[][MAX],int d,int c)
{
	char ln=a[0][0];
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(ln<a[i][j])
				ln=a[i][j];
		}
	}
	return ln;
}
int main()
{
	int d,c;
	char a[MAX][MAX];
	Nhap(d,c);
	NhapMang(a,d,c);
	printf("Mang ky tu vua nhap la:\n");
	XuatMang(a,d,c);
	int kq=DemKyTu(a,d,c);
	if(kq==0)
		printf("\Mang khong co ky tu so!!!");
	else
		printf("\nSo ky tu so la:%d",kq);
	printf("\nKy tu lon nhat la:%c",KyTuLonNhat(a,d,c));
}
