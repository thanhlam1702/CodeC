#include<stdio.h>
#define MAX 10
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
void NhapK(int &k,int &sl)
{
	do
	{
		printf("\nMoi ban nhap chi so  0<=k<%d =",sl);
		scanf("%d",&k);
		if(k<0||k>=sl)
			printf("\nBan nhap sai nhap lai:");
	}while(k<0||k>=sl);
}
void NhapMang(int a[][MAX],int d,int c)
{
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
			{
				printf("a[%d][%d]=",i,j);
				scanf("%d",&a[i][j]);
			}
	}
}
void XuatMang(int a[][MAX],int d,int c)
{
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%4d",a[i][j]);
				
		}
		printf("\n");
	}
}
int TongPhanTu(int a[][MAX],int d,int c)
{
	int s=0;
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			s=s+a[i][j];
		}
	}
	return s;
}
int TongChan(int a[][MAX],int d,int c)
{
	int s=0;
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(a[i][j]%2==0)
				s=s+a[i][j];
		}
	}
	return s;
}
int DemChan(int a[][MAX],int d,int c)
{
	int dem=0;
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(a[i][j]%2==0)
				dem++;
		}
	}
	return dem;
}
double TrungBinhChan(int a[][MAX],int d,int c)
{
	double s=TongChan(a,d,c);
	int dem=DemChan(a,d,c);
	if(dem==0)	return 0;
	else
		return s/dem;
}
int TimMax(int a[][MAX],int d,int c)
{
	int max=a[0][0];
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(max<a[i][j])
				max=a[i][j];
		}
	}
	return max;
}
int TongDong(int a[][MAX],int d,int c,int k)
{
	int s=0;
	for(int j=0;j<c;j++)
		s=s+a[k][j];
	return s;
}
int TongCot(int a[][MAX],int d,int c,int k)
{
	int s=0;
	for(int i=0;i<d;i++)
		s=s+a[i][k];
	return s;
}

int main()
{
	int d,c;
	int a[MAX][MAX];
	Nhap(d,c);
	NhapMang(a,d,c);
	printf("Mang ban vua nhap la:\n");
	XuatMang(a,d,c);
//	int kq=TongPhanTu(a,d,c);
//	printf("\nTong phan tu trong mang la:%d",kq);
//	int kq1=TongChan(a,d,c);
//	printf("\nTong phan tu chan trong mang la:%d",kq1);
//	int kq2=DemChan(a,d,c);
//	if(kq2==0)
//		printf("\nMa tran khong co so chan>>>");
//	else
//		printf("\nSo luong phan tu chan trong mang la:%d",kq2);
//	double kq3=TrungBinhChan(a,d,c);
//	printf("\nTrung binh cong phan tu chan trong mang la:%.2lf",kq3);
//	int kq4=TimMax(a,d,c);
//	printf("\nPhan tu Lon nhat trong mang la:%d",kq4);
	
	
	int k;
	NhapK(k,d);
	printf("Tong dong:%d",TongDong(a,d,c,k));
	NhapK(k,c);
	printf("Ton cot:%d",TongCot(a,d,c,k));
	
	printf("\n");
}
