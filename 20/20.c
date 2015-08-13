#include<stdio.h>

void main()
{
	int asc=71,spaces=0,i,j;
	for(i=0;i<7;i++)
	{
		for(j=0;j<i;j++)
			printf(" ");
		for(j=asc-i;j>=65;j--)
			printf("%c",j);
		putchar(10);
	}
}