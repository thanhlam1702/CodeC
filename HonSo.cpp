#include<stdio.h>
#include<math.h>
#include<conio.h>
struct honso
{
	int nguyen,tu,mau;
};
void Nhap(honso &hs)
{
	printf("\nNhap so nguyen:");
	scanf("%d",&hs.nguyen);
	printf("Nhap tu:");
	scanf("%d",&hs.tu);
	do
	{
		printf("Nhap mau:");
		scanf("%d",&hs.mau);
		if(hs.mau==0)
			printf("\nNhap sai nhap lai\n");
	}while(hs.mau==0);
}
void Xuat(honso hs)
{
	printf("%d(%d/%d)",hs.nguyen,hs.tu,hs.mau);
}
int TimUC(int a,int b)
{
	a=abs(a);b=abs(b);
		if(a == 0 && b !=0)
	{
		return b;
	}
	else if( b == 0 && a != 0 )
	{
		return a;
	}
	while(a!=b)
	{
		if(a>b)
			a-=b;
		else
			b-=a;
	}
	return a;
}
honso RutGon(honso &hs)
{
	if(hs.tu>hs.mau)
	{
		int tam=hs.tu/hs.mau;
		hs.nguyen += tam;
		hs.tu-=hs.mau*tam;
	}
	int uc=TimUC(hs.tu,hs.mau);
	hs.tu/=uc;
	hs.mau/=uc;
	return hs;
}
honso Tong(honso a,honso b)
{
	honso kq;
	kq.nguyen=a.nguyen+b.nguyen;
	kq.tu=a.tu*b.mau+a.mau*b.tu;
	kq.mau=a.mau*b.mau;
	return RutGon(kq);
}
honso Hieu(honso a,honso b)
{
	honso kq;
	kq.nguyen=a.nguyen-b.nguyen;
	kq.tu=a.tu*b.mau-a.mau*b.tu;
	kq.mau=a.mau*b.mau;
	return RutGon(kq);
}
honso Tich(honso a,honso b)
{
	a.tu=a.mau*a.nguyen+a.tu;
	b.tu=b.mau*b.nguyen+b.tu;
	honso kq;
	kq.nguyen=0;
	kq.tu=a.tu*b.tu;
	kq.mau=a.mau*b.mau;
	return RutGon(kq);
	
}
honso Thuong(honso a,honso b)
{
	a.tu=a.mau*a.nguyen+a.tu;
	b.tu=b.mau*b.nguyen+b.tu;
	honso kq;
	kq.nguyen=0;
	kq.tu=a.tu*b.mau;
	kq.mau=a.mau*b.tu;
	return RutGon(kq);
	
}
int SoSanh(honso a,honso b)
{
	//Doi sang phan so
	a.tu=a.mau*a.nguyen+a.tu;
	b.tu=b.mau*b.nguyen+b.tu;
	int left=a.tu*b.mau;
	int right=a.mau*b.tu;
	if(left>right)
		return 1;
	else if(left <right)
		return -1;
	return 0;
}
int main()
{
	honso hs,hs1,hs2;
	Nhap(hs);
	printf("\nHon so vua nhap la:");
	Xuat(hs);
	printf("\nHon so sau khi rut gon:");
	RutGon(hs);
	Xuat(hs);
	printf("\nNhap hon so 1:");
	Nhap(hs1);
	printf("\nNhap hon so 2:");
	Nhap(hs2);
//	honso kq=Tong(hs1,hs2);
	printf("\nTong 2 hon so la:");
	Xuat(Tong(hs1,hs2));
//	honso kq1=Hieu(hs1,hs2);
	printf("\nHieu 2 hon so la:");
	Xuat(Hieu(hs1,hs2));
	printf("\nTich 2 hon so la:");
	Xuat(Tich(hs1,hs2));
	printf("\nThuong 2 hon so la:");
	Xuat(Thuong(hs1,hs2));
	int kq=SoSanh(hs1,hs2);
	if(kq>0)
		printf("\nHS1>HS2");
	else if(kq<0)
		printf("\HS1<HS2");
	else
		printf("\nHS1=HS2");

	getch();
	return 0;
}
