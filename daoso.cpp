#include<stdio.h>
int main()
{
	int n,chon;
	printf("nhap n:\t");
	scanf("%d",&n);
	printf("nhap chon:\t");
	scanf("%d",&chon);
	switch(chon)
	{
		case 1: 
				while(n!=0)
				{
					int a=n%10;
						printf("%d",a);
					n=n/10;
				}
				break;
	}
	return 0;
}
