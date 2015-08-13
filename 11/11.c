#include<stdio.h>

void  main()
{
	int spaces=10,i,j,temp=1;

	for(i=1;i<6;i++)
	{
		for(j=1;j<spaces;j++)
			printf(" ");
		for(j=i;j<temp;j++)
			printf("%d",j);
		printf("%d",temp);
		spaces--;
		for(j=temp-1;j>=i;j--)
			printf("%d",j);
		temp+=2;
		putchar(10);
	}
	
	for(i=6;i<=10;i++)
	{
		for(j=1;j<spaces;j++)
			printf(" ");
		for(j=i;j<=9;j++)
			printf("%d",j);
		for(j=0;j<temp-10;j++)
			printf("%d",j);
		printf("%d",temp-10);
		for(j=temp-11;j>=0;j--)
			printf("%d",j);
		for(j=9;j>=i;j--)
			printf("%d",j);
		spaces--;
		temp+=2;
		putchar(10);
	}
	
}