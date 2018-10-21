#include<stdio.h>
#include<math.h>
long long n;
int KTNT(long long n)
{
	if (n<2) return 0;
	if (n==2) return 1;
	if (n%2==0) return 0;
	for (long long i=3;i<=sqrtl(n);i++)
		if (n%i==0) return 0;
	return 1;
}
int main()
{
	scanf("%lld",&n);
	if (KTNT(n)) printf("YES");
	else printf("NO");
	return 0;
}
