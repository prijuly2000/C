#include<stdio.h>

void main()
{
	int i,j,ch=90,spaces=5;

	for(i=0;i<5;i++)
	{
		for(j=0;j<spaces;j++)
			printf("  ");

		for(j=90;j>=ch;j--)
			printf(" %c",j);
		
		for(j+=2;j<=90;j++)
			printf(" %c",j);

		
		ch--;
		putchar(10);
		spaces--;
	}
	ch+=2;
	spaces+=2;

	for(i=0;i<5;i++)
	{
		for(j=0;j<spaces;j++)
			printf("  ");

		for(j=90;j>=ch;j--)
			printf(" %c",j);

		for(j=ch+1;j<=90;j++)
			printf(" %c",j);
		ch++;
		spaces++;
		putchar(10);

	}
}
