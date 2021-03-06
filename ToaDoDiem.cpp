#include<stdio.h>
#include<math.h>
#define MAX 50
struct diem
{
	float x,y;
};
void NhapDiem(diem &d)
{
	printf("Nhap x:");
	scanf("%f",&d.x);
	printf("Nhap y:");
	scanf("%f",&d.y);
}
void XuatDiem(diem d)
{
	printf("(%.2f,%.2f)",d.x,d.y);
}
float KhoangCach2Diem(diem d1,diem d2)
{
	return sqrt(pow((d2.x-d1.x),2)+pow((d2.y-d1.y),2));

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
void NhapMang(diem a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nMoi nhap toa diem thu %d:\n",i+1);
		NhapDiem(a[i]);
	}
}
void XuatMang(diem a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nToa do diem thu %d=",i+1);
		XuatDiem(a[i]);
	}
}
int main()
{
	int n;
	diem a[MAX];
	diem d,d1,d2;
	NhapDiem(d);
	printf("\nToa do diem vua nhap la:");
	XuatDiem(d);
	printf("\nNhap toa do diem A:\n");
	NhapDiem(d1);
	printf("\nNhap toa do diem B:\n");
	NhapDiem(d2);
	float kq=KhoangCach2Diem(d1,d2);
	printf("\nKhoang cach gia 2 diem la:%.2f",kq);
	NhapN(n);
	NhapMang(a,n);
	printf("Mang toa do diem la:");
	XuatMang(a,n);
}
 
