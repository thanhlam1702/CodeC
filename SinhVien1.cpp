#include<stdio.h>
#include<string.h>
#define MAX 50
struct sinhvien
{
	char msSV[11];
	char Hoten[31];
	char gt;
	char lop[8];
	float dtb;
};
void NhapN(int &n)
{
	do{
		printf("\nMoi ban nhap so luong sinh vien:");
		scanf("%d",&n);
		if(n<0||n>MAX)
			printf("\nban nhap sai nhap lai:");
	}while(n<0||n>MAX);
}
void NhapSV(sinhvien &sv)
{
	
	printf("\nMoi nhap MSSV:");
	gets(sv.msSV);
	fflush(stdin);
	printf("Moi nhap Ho ten sinh vien :");
	gets(sv.Hoten);
	fflush(stdin);
	printf("Moi nhap ('x':nu, 'y':nam) gt= ");
	scanf("%c", &sv.gt);
//	do{
//		printf("\nMoi nhap Tuoi:");
//		scanf("%d",&a[i].tuoi);
//		fflush(stdin);
//		if(a[i].tuoi<1)
//			printf("\Ban nhap sai tuoi");
//	}while(a[i].tuoi<1);
	fflush(stdin);
	printf("Moi nhap lop:");
	gets(sv.lop);
	fflush(stdin);
	printf("Moi nhap diem trung binh:");
	scanf("%f",&sv.dtb);
	fflush(stdin);
}
void XuatSV(sinhvien sv)
{
//	printf("\n-------------------THONG TIN SINH VIEN-------------------\n");
//	printf("\n%-10s %-30s %-5s %-5s","MSSV","HoTen","GioiTinh","DTB\n");
	printf("%-11s %-31s %-10s %-8.2lf  ",sv.msSV,sv.Hoten,sv.lop,sv.dtb);
	if(sv.gt=='x')
		printf("Nu\n");
	else
		printf("Nam\n");
}
void NhapMang(sinhvien a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nMoi nhap thong tin sinh vien thu %d:",i+1);
		NhapSV(a[i]);
	}
}
void XuatMang(sinhvien a[],int n)
{
	printf("\n-------------------------DANH SACH SINH VIEN-----------------------------\n");
	printf("\n%-5s %-11s %-31s %-10s %-8s %-7s","STT","MSSV","HoTen","Lop","DTB","GioiTnh\n");
	for(int i=0;i<n;i++)
	{
		printf("%-5d",i+1);
		XuatSV(a[i]);
	}
	printf("\n--------------------------------------------------------------------------\n");
}
void XuatDTBHon5(sinhvien a[], int n)
{
	int j=0;
	printf("\n----------------------DANH SACH SINH VIEN DTB HON 5-------------------------\n");
	for (int i = 0; i < n; i++)
	{
		
		if(a[i].dtb>5)
		{
			j=j+1;
			printf("%-5d",j);
			XuatSV(a[i]);
		}
	}
	printf("\n-----------------------------------------------------------------------------\n");
}
double TimMax(sinhvien a[], int n)
{
	double m = a[0].dtb;
	for (int i = 1; i < n; i++)
		if (a[i].dtb > m)
			m = a[i].dtb;
	return m;
}
void XuatSVMax(sinhvien a[], int n)
{
	double m = TimMax(a, n);
	printf("\n----------------------SINH VIEN CO DTB LON NHAT----------------------------\n");
	for (int i = 0; i < n; i++)
	{		if (a[i].dtb==m)
				XuatSV(a[i]);
	}
	printf("\n---------------------------------------------------------------------------\n");
}
int main()
{
	sinhvien a[MAX]={
				{"1711061614","Nguyen Thanh Lam",'y',"17DTHA6",8.1},
				{"1711061611","Nguyen Van Ti",'y',"17DTHA6",3.7},
				{"1711061612","Nguyen Tuan Anh",'y',"17DTHA6",2.5},
				{"1711061613","Bui Tri Dung",'y',"17DTHA6",6.6},
				{"1711061615","Dao Xuyen Vach",'y',"17DTHA6",5.6},
				{"1711061616","Le Ngoc Chau",'x',"17DTHA6",4.3},
				{"1711061617","Nguyen Tan Tai",'y',"17DTHA6",5.5},
				{"1711061618","Lam Thi Xuyen",'x',"17DTHA6",4.9},
				{"1711061619","Ngo Anh Tu",'x',"17DTHA6",6.1},
				{"1711061620","Mai Nhu Thao",'x',"17DTHA6",7.2}	
	};
	int n=10,luachon;
//	NhapN(n);	
	fflush(stdin);
//	NhapMang(a,n);
	do
	{
		printf("\nChon 1 de in danh sach sinh vien");
		printf("\nChon 2 de xuat danh sach diem trung binh hon 5");
		printf("\nChon 3 de xuat sinh vien co dtb lon nhat");
		printf("\nChon 0 de thoat!!!");
		printf("\nMoi ban nhap lua chon:");
		scanf("%d",&luachon);
		switch(luachon)
		{
			case 0: break;
			case 1:	XuatMang(a,n);
					break;
			case 2: XuatDTBHon5(a,n);
					break;
			case 3: XuatSVMax(a,n);
					break;
		}
	}while(luachon);

}


