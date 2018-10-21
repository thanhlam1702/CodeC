#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50];char s2[50];
	printf("\nMoi ban nhap chuoi s1:");
	gets(s1);
	printf("\nMoi ban nhap chuoi s2:");
	gets(s2);
	printf("\nChuoi s1 la:%s",s1);
	printf("\nChuoi s2 la:%s",s2);
	printf("\nDo dai chuoi s1 la:%d",strlen(s1));
	printf("\nDo dai chuoi s2 la:%d",strlen(s2));
	strcat(s1," ");
	strcat(s1,s2);
	printf("\nChuoi sau khi noi:%s",s1);
	char *p =strstr(s2,s1);
	if(p==NULL)
		printf("\n%s khong co trong %s",s1,s2);
	else
		printf("\n%s co trong %s",s1,s2);
	int kq=strcmp(s1,s2);
	if(kq<0)
		printf("\n S1 < S2");
	else if(kq>0)
		printf("\n S1 > S2");
	else
		printf("\n S1 = S2");
	strupr(s2);
	printf("\nChuoi s2 sau khi doi sang hoa  %s",s2);
		
	printf("\nChuoi khi dao nguoc: %s",strrev(s1));
}
