#include<stdio.h>
#include<string.h>
#define MAX 50
struct sinhvien
{
	long msSV;
	char Hoten[51];
	int tuoi;
	float dtb;
}sv;
void NhapN(int &n)
{
	do{
		printf("\nMoi ban nhap so luong sinh vien:");
		scanf("%d",&n);
		if(n<0||n>MAX)
			printf("\nban nhap sai nhap lai:");
	}while(n<0||n>MAX);
}
void Nhap(sinhvien a[],int n)
{
	for(int i=0;i<n;i++)
	{
	printf("\nMoi nhap thong tin sinh vien thu %d:",i+1);
	printf("\nMoi nhap MSSV:");
	scanf("%ld",&a[i].msSV);
	fflush(stdin);
	printf("\nMoi nhap Ho ten sinh vien :");
	gets(a[i].Hoten);
	fflush(stdin);
	do{
		printf("\nMoi nhap Tuoi:");
		scanf("%d",&a[i].tuoi);
		fflush(stdin);
		if(a[i].tuoi<1)
			printf("\Ban nhap sai tuoi");
	}while(a[i].tuoi<1);
	printf("\nMoi nhap diem trung binh:");
	scanf("%f",&a[i].dtb);
	fflush(stdin);
	}
}
void Xuat(sinhvien a[],int n)
{
	printf("\n--------------THONG TIN SINH VIEN-------------\n");
	printf("\n%-10s %-30s %-5s %-5s","MSSV","HoTen","Tuoi","DTB\n");
	for(int i=0;i<n;i++)
	{
		printf("\n%-10ld %-30s %-5d %-5.2f",a[i].msSV,a[i].Hoten,a[i].tuoi,a[i].dtb);
	}
}
int main()
{
	int n;
	NhapN(n);
	sinhvien a[MAX];	
	fflush(stdin);
	Nhap(a,n);
	
	Xuat(a,n);
}


