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

void chiaBa(int a[],int n)
{
	int i,d=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>0&&a[i]%3==0)
		{
			d=1;
		}
	}
	if(d==0)
		printf("\nmang khong co so chia het cho ba");
	else
	printf("\ncac so chia het cho ba la:");
		for(i=0;i<n;i++)
		{
			if(a[i]>0&&a[i]%3==0)
			{
				printf("%3d",a[i]);
			}
		}
}

int demAm(int a[],int n)
{
	int i,d=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			d++;
		}
	}
	return d;
}

int tongMang(int a[],int n)
{
	int i,s=0;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	printf("\ntong cac phan tu cua mang la:%d",s);
	return s;
}

float tbcMang(int a[],int n)
{
	int i,d=0;
	float tbc;
	for(i=0;i<n;i++)
	{
		d++;
	}
	tbc=(float)tongMang(a,n)/d;
	printf("\ntrung binh cong cua mang la:%.2f",tbc);
	return tbc;
}

float tbcDuong(int a[],int n)
{
	int i,d=0,s=0,flag=0;
	float tbc=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			s=s+a[i];
			d++;
			flag=1;
		}
	}
	if(flag==1)
	{
		tbc=(float)s/d;
	}
	return tbc;
}

int ktSNT(int a[],int n)
{
	int i,j,d,s;
	s=0;
	printf("\ncac so nguyen to co trong mang la:");
	for(i=0;i<n;i++)
	{
		d=0;
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				d++;
			}
		}
		if(d==2)
		{
			printf("%4d",a[i]);
			s=s+1;
		}
	}
}

int demSNT(int a[],int n)
{
	int i,j,dem=0,d;
	for(i=0;i<n;i++)
	{
		d=0;
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
				d++;
		}
		if(d==2)
		{
			dem++;
		}
	}
	return dem;
}

int tongSNT(int a[],int n)
{
	int i,j,s=0,d;
	for(i=0;i<n;i++)
	{
		d=0;
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
				d++;
		}
		if(d==2)
		{
			s=s+a[i];
		}
	}
	return s;
}

void duongDau(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
			printf("\nphan tu duong dau la:%d",a[i]);
		break;
	}
}

void duongCuoi(int a[],int n)
{
	int i;
	for(i=n-1;i<n;i=i-1)
	{
		if(a[i]>0)
			printf("\nphan tu duong cuoi la:%d",a[i]);
		break;
	}
}

void lonNho(int a[],int n)
{
	int i,max,min;
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("\nso lon nhat la:%d",max);
	printf("\nso nho nhat la:%d",min);
}

void amLon(int a[],int n)
{
	int i,max=-32768;
	for(i=0;i<n;i++)
	{
		if(a[i]<0&&a[i]>max)
			{
				max=a[i];
			}
	}
	printf("\nphan tu am lon nhat la:%d",max);
}

void duongNho(int a[],int n)
{
	int i,min=32768;
	for(i=0;i<n;i++)
	{
		if(a[i]>0&&a[i]<min)
			{
				min=a[i];
			}
	}
	printf("\nphan tu duong nho nhat la:%d",min);
}

int main()
{
	int a[100],n,k,i;
	nhapN(n);
	nhapMang(a,n);
	printf("cac phan tu da nhap la:\n");
	xuatMang(a,n);
	chiaBa(a,n);
	if(demAm(a,n)==0)
		printf("\nmang khong co so am!");
	else
	{
		printf("\nso luong phan  tu am la:%d",demAm(a,n));
		amLon(a,n);
	}
	//tongMang(a,n);
	tbcMang(a,n);
	if(tbcDuong(a,n)==0)
		printf("\nmang khong co so duong!!");
	else
	{
		printf("\ntrung binh cong cac so duong la:%.2f",tbcDuong(a,n));
		duongDau(a,n);
		duongCuoi(a,n);
		duongNho(a,n);
	}
	if(demSNT(a,n)==0)
		printf("\nmang vua nhap khong co so nguyen to!");
	else
	{
		ktSNT(a,n);
		printf("\nso luong so nguyen to la:%d",demSNT(a,n));
		printf("\ntong cac so nguyen to la:%d",tongSNT(a,n));
		printf("\ntrung binh cac so nguyen to la:%.2f",(float)tongSNT(a,n)/demSNT(a,n));
	}
	lonNho(a,n);
	printf("\n   ***      ***    ");
	printf("\n**      **      ** ");
	printf("\n  **          **   ");
	printf("\n    **     **      ");
	printf("\n       ***         ");
	return 0;
}
