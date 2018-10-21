#include<stdio.h>
#include<math.h>

struct phanso
{
	int tu,mau;
};
void Nhap(phanso &ps)
{
	printf("\nMoi nhap tu so:");
	scanf("%d",&ps.tu);
	do{
		printf("\nMoi nhap mau so:");
		scanf("%d",&ps.mau);
		if(ps.mau==0)
			printf("\nNhap sai mau moi nhap lai:");
	}while(ps.mau==0);
}
void Xuat(phanso ps)
{
	printf("\n%d/%d",ps.tu,ps.mau);
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
phanso Hieu(phanso a,phanso b)
{
	phanso kq={0,1};
	kq.tu=a.tu*b.mau-a.mau*b.tu;
	kq.mau=a.mau*b.mau;
	return RutGon(kq);
}
phanso Tich(phanso a,phanso b)
{
	phanso kq={0,1};
	kq.tu=a.tu*b.tu;
	kq.mau=a.mau*b.mau;
	return RutGon(kq);
}
phanso Thuong(phanso a,phanso b)
{
	phanso kq={0,1};
	kq.tu=a.tu*b.mau;
	kq.mau=a.mau*b.tu;
	return RutGon(kq);
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

int main()
{
	phanso ps,ps1,ps2;
	Nhap(ps);
	printf("\nphan so sau khi nhap:");
	Xuat(ps);
	printf("\nPhan so sau khi rut gon:");
	RutGon(ps);
	Xuat(ps);
	printf("\nMoi nhap phan so 1");
	Nhap(ps1);
	printf("\nMoi nhap phan so 2");
	Nhap(ps2);
	phanso kq=Tong(ps1,ps2);
	printf("\nPhan so sau khi cong:");
	Xuat(kq);
	phanso kq1=Hieu(ps1,ps2);
	printf("\nPhan so sau khi tru:");
	Xuat(kq1);
	phanso kq2=Tich(ps1,ps2);
	printf("\nPhan so sau khi nhan");
	Xuat(kq2);
	phanso kq3=Thuong(ps1,ps2);
	printf("\nPhan so sau khi chia");
	Xuat(kq3);
	int kq4=sosanh(ps1,ps2);
	if(kq4>0)
		printf("\nPS1>PS2");
	else if(kq4<0)
		printf("\nPS1<PS2");
	else
		printf("\nPS1=PS2");
}

