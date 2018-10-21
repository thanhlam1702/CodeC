#include<stdio.h>
#include<conio.h>

void nhapN(int &n)
{
	do{
		printf("nhap so phan tu ban muon:");
		scanf("%d",&n);
		if(n<=0||n>=100)
			printf("nhap sai nhap lai!");
	}while(n<=0||n>=100);
}

void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("nhap a[%d]=",i);
		scanf("%d",&a[i]);
	}
}

void xuatMang(int a[], int n)
{
	for(int i=0;i<n;i++)
		printf("a[%d]=%4d\n",i,a[i]);
}
int lonNhat(int a[],int n)
{
	int i,max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
			max=a[i];
	}
	printf("\nso lon nhat la:%d",max);
	return max;
}
int demSoLon(int a[],int n)
{
	int i,d=0,k;
	k=lonNhat(a,n);
	for(i=0;i<n;i++)
	{
		if(k==a[i])
			d++;
	}
	printf("\nso luong so lon nhat la:%d",d);
	return d;
}
int main()
{
	int a[100],n,k,i;
	nhapN(n);
	nhapMang(a,n);
	printf("cac phan tu da nhap la:\n");
	xuatMang(a,n);
//	lonNhat(a,n);
	demSoLon(a,n);
	return 0;
}
