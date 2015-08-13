#include<stdio.h>

int main()
{
	int spaces,num=0,i,range,j;

	printf("Enter the range");
	scanf("%d",&range);

	spaces=range-1;

	for(i=0;i<range;i++)
	{
		for(j=0;j<spaces;j++)
			printf(" ");
		if(i!=0)
			num=i*2;
		for(j=0;j<=num;j++)
			printf("%d",i);
		
		spaces--;
		putchar(10);
	}

	spaces+=2;
	num=i-2;

	for(i=range;i>=2;i--)
	{
		for(j=0;j<spaces;j++)
			printf(" ");
		if(i!=0)
			num=i*2-4;
		for(j=num;j>=0;j--)
			printf("%d",i-2);
		
		spaces++;
		putchar(10);
		num--;
	}


	return 0;
}