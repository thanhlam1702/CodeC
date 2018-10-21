#include<stdio.h>
#include<math.h>
#define MAX	50
struct phanso
{
	int tu,mau;
};
void Nhap(phanso &ps)
{
	printf("\nMoi nhap tu so:");
	scanf("%d",&ps.tu);
	do{
		printf("Moi nhap mau so:");
		scanf("%d",&ps.mau);
		if(ps.mau==0)
			printf("\nNhap sai mau moi nhap lai:");
	}while(ps.mau==0);
}
void Xuat(phanso ps)
{
	printf("%d/%d",ps.tu,ps.mau);
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
void NhapMang(phanso a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nMoi nhap so phan tu thu %d:",i+1);
		Nhap(a[i]);
	}
}
void XuatMang(phanso a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nPhan so thu %d=",i+1);
		Xuat(a[i]);
	}
}
int TimUocChung(int a,int b)
{
	a=abs(a); b=abs(b);
	while(a!=0&&b!=0)
		if(a>b)a-=b;
		else b-=a;
	return a;
}

phanso RutGon(phanso &ps)
{
	if(ps.tu!=0)
	{
		int uc=TimUocChung(ps.tu,ps.mau);
		ps.tu/=uc;
		ps.mau/=uc;
	}
	return ps;
}

phanso Tong(phanso a,phanso b)
{
	phanso kq={0,1};
	kq.tu=a.tu*b.mau+a.mau*b.tu;
	kq.mau=a.mau*b.mau;
	return RutGon(kq);
}

phanso TinhTong(phanso a[],int n)
{
	phanso s={0,1};
	for(int i=0;i<n;i++)
	{
		s=Tong(s,a[i]);
	}
	return s;
}
int sosanh(phanso a, phanso b)
{
	int left=a.tu*b.mau;
	int right=a.mau*b.tu;
	if(left>right)
		return 1;
	if(left<right)
		return -1;
	return 0;
}

phanso TimMax(phanso a[],int n)
{
	phanso max=a[0];
	for(int i=1;i<n;i++)
	{
		if(sosanh(a[i],max)>0)
			max=a[i];
	}
	return max;
}
phanso TimMin(phanso a[],int n)
{
	phanso min=a[0];
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
	phanso a[MAX];
	NhapN(n);
	NhapMang(a,n);
	XuatMang(a,n);
	phanso s=TinhTong(a,n);
	printf("\nTong phan so la:");
	Xuat(s);
	phanso max=TimMax(a,n);
	printf("\nPhan so lon nhat la:");
	Xuat(max);
	phanso min=TimMin(a,n);
	printf("\nPhan so nho nhat la:");
	Xuat(min);

}
