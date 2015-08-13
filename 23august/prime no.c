#include<stdio.h>
main()
{
	int i,count=0,range,j;
	printf("enter the no\n");
	scanf("%d",&range);

	for(j=2;j<range;j++)
	{
		count=0;
		for(i=2;i<j;i++)
		{
			if(j%i==0)
			{
				count=1;
				break;
			}
		}
	if(count==0)
		printf("%d\t",j);
	}
	putchar(10);
	return 0;
}