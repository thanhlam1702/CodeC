#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];char s2[20];
	printf("\nMoi ban nhap chuoi s1:");
	gets(s1);
	printf("\nMoi ban nhap chuoi s2:");
	gets(s2);
	printf("\nChuoi s1 vua nhap la:%s",s1);
	printf("\nChuoi s2 vua nhap la:%s",s2);
	int len1=strlen(s1);
	int len2=strlen(s2);
	printf("\nDo dai chuoi s1 la:%d",len1);
	printf("\nDo dai chuoi s2 la:%d",len2);
	int kq=strcmp(s1,s2);
	if(kq<0)
		printf("\ns1<s2");
	else if(kq>0)
		printf("\ns1>s2");
	else
		printf("\ns1=s2");
}
