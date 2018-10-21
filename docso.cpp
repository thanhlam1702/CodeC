#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	do
	{
		printf("nhap so nguyen hai chu so:");
		scanf("%d",&n);
		if(n<10||n>99)
			printf("nhap sai, nhap lai!\n");
	}while(n<10||n>99);
	switch(n/10)
	{
		case 1: printf("muoi"); break;
		case 2: printf("hai muoi"); break;
		case 3: printf("ba muoi"); break;
		case 4: printf("bon muoi"); break;
		case 5: printf("nam muoi"); break;
		case 6: printf("sau muoi"); break;
		case 7: printf("bay muoi"); break;
		case 8: printf("tam muoi"); break;
		case 9: printf("chin muoi"); break;
	}
	switch(n%10)
	{
		case 0: printf(""); break;
		case 1: printf("\tmot"); break;
		case 2: printf("\thai"); break;
		case 3: printf("\tba"); break;
		case 4: printf("\tbon"); break;
		case 5: printf("\tnam"); break;
		case 6: printf("\tsau"); break;
		case 7: printf("\tbay "); break;
		case 8: printf("\ttam"); break;
		case 9: printf("\tchin"); break;
	}
	return 0;
}
