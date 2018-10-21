#include<stdio.h>
#include<string.h>
#define MAX 50
struct DATE{
	int ngay,thang,nam;
};
typedef struct{
	char Hoten[30];
	char mssv[15];
	struct DATE ngaysinh;
	char Diachi[20];
	double Diem;
} sinhvien;
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
		printf("\Moi nhap sinh vien thu %d:",i+1);
		printf("\nNhap ho va ten:");
		gets(a[i].Hoten);
		fflush(stdin);
		printf("\nMoi nhap ma sinh vien:");
		gets(a[i].mssv);
		fflush(stdin);
		printf("\nNhap ngay thang nam sinh:");
		scanf("%d%d%d",&a[i].ngaysinh.ngay,&a[i].ngaysinh.thang,&a[i].ngaysinh.nam);
		fflush(stdin);
		printf("\nNhap dia chi:");
		gets(a[i].Diachi);
		fflush(stdin);
		printf("\nNhap diem:");
		scanf("%lf",&a[i].Diem);
		fflush(stdin);
	}
}
void Xuat(sinhvien a[],int n)
{
	printf("\n------------Danh sach sinh vien--------------");
	printf("\n%-30s %-15s %-15s %-20s %-5s\n","HoTen","MSSV","NgaySinh","DiaChi","Diem\n");
	for(int i=0;i<n;i++)
	{
		printf("\n%-30s %-15s %-2d/%-2d/%-9d %-20s %-5.2lf\n",a[i].Hoten,a[i].mssv,a[i].ngaysinh.ngay,a[i].ngaysinh.thang,a[i].ngaysinh.nam,a[i].Diachi,a[i].Diem);
	}
}
int main()
{
	int n;
	sinhvien sv[100];
	printf("\nNhap so sinh vien lop:");
	scanf("%d",&n);
	fflush(stdin);
	Nhap(sv,n);
	Xuat(sv,n);
}
