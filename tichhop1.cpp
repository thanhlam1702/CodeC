#include<stdio.h>

void nhapN(int &n)
{
	do{
		printf("nhap n:");
		scanf("%d",&n);
		if(n<=0||n>=100)
			printf("nhap sai nhap lai\n");
	}while(n<=0||n>=100);
}
int ktNguyenTo(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			dem++;
	}
	if(dem==2)
		return 1;
	return 0;
}
int NguyenTo(int n)
{
	printf("cac so nguyen to tu 1 den %d la:",n);
	for(int i=1;i<=n;i++)
	{
		if(ktNguyenTo(i)==1)
			printf("%4d",i);
	}
}

int main()
{
	int n;
	nhapN(n);
	ktNguyenTo(n);
	if(ktNguyenTo(n)==1)
		printf("%d la so nguyen to\n",n);
	else
		printf("%d khong phai so nguyen to\n",n);
	NguyenTo(n);
	return 0;
}

