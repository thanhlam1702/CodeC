#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	long n;
	scanf("%ld",&n);
	if(n==sqrt(n)*sqrt(n))
		printf("YES");
	else
		printf("NO");
	return 0;
}
