#include<stdio.h>
int main()
{
	int n,s;
	float x;
	printf("nhap x:");
	scanf("%f",&x);
	do{
		printf("nhap n:");
		scanf("%d",&n);
	if(n<=0)
		printf("nhap sai,nhap lai\n");
	}while(n<=0);
	s=1;
	for(int i=1;i<=n;i++)
		s=s*x;
	printf("tong la:%d",s);
	return 0;
}
