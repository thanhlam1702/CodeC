#include<stdio.h>
int main()
{
	int n;
	do{ scanf("%d",&n);
		if(n<1||n>9)
		printf("NONE\n");
	}while(n<1||n>9);
	for(int i=1;i<=9;i++)
		printf("%dx%d=%d\n",n,i,n*i);	
	return 0;
}
