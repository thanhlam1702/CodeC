#include<stdio.h>
#include<conio.h>
int main()
{
	int n,d;
	do
	{
		printf("nhap n:");
		scanf("%d",&n);
		if(n<=0||n>=100)
			printf("nhap sai,nhap lai!\n");
	}while(n<=0||n>=100);
	printf("cac so nguyen to la:");
	for(int i=1;i<=n;i++)
	{
		d=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				d++;
			}
		}
		if(d==2)
		{
			printf("%4d",i);
		}
	}
	return 0;
}
