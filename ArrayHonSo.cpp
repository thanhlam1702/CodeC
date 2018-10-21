#include<stdio.h>
#include<math.h>
#define MAX	50
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
			printf("\nNhap sai nhap lai");
	}while(hs.mau==0);
}
void Xuat(honso hs)
{
	printf("%d(%d/%d)",hs.nguyen,hs.tu,hs.mau);
}
int NhapN(int &n)
{
	do{
		printf("\nMoi nhap so phan tu n>=1 hoac n<%d:",MAX);
		scanf("%d",&n);
		if(n<1||n>MAX)
			printf("\nNhap sai moi nhap lai:");
	}while(n<1||n>MAX);
}
void NhapMang(honso a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nMoi nhap so phan tu thu %d:",i+1);
		Nhap(a[i]);
	}
}
void XuatMang(honso a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nHon so so thu %d=",i+1);
		Xuat(a[i]);
	}
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

honso TinhTong(honso a[],int n)
{
	honso s={0,0,1};
	for(int i=0;i<n;i++)
	{
		s=Tong(s,a[i]);
	}
	return s;
}
int sosanh(honso a, honso b)
{
	a.tu=a.mau*a.nguyen+a.tu;
	b.tu=b.mau*b.nguyen+b.tu;
	int left=a.tu*b.mau;
	int right=a.mau*b.tu;
	if(left>right)
		return 1;
	if(left<right)
		return -1;
	return 0;
}

honso TimMax(honso a[],int n)
{
	honso max=a[0];
	for(int i=1;i<n;i++)
	{
		if(sosanh(a[i],max)>0)
			max=a[i];
	}
	return max;
}
honso TimMin(honso a[],int n)
{
	honso min=a[0];
	for(int i=1;i<n;i++)
	{
		if(sosanh(a[i],min)<0)
			min=a[i];
	}
	return min;
}

int main()
{
	int n,b;
	honso a[MAX];
	NhapN(n);
	NhapMang(a,n);
	XuatMang(a,n);
	honso s=TinhTong(a,n);
	printf("\nTong hon so la:");
	Xuat(s);
	honso max=TimMax(a,n);
	printf("\nHon so lon nhat la:");
	Xuat(max);
	honso min=TimMin(a,n);
	printf("\nHon so nho nhat la:");
	Xuat(min);

}
