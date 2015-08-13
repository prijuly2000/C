#include<stdio.h>
main()
{
	int i,first=1,second=1,third,range;
	printf("Enter the range");
	scanf("%d",&range);
	
	printf("\n0\t%d\t%d",first,second);
	third=first+second;
	for(i=2;third<range;i++)
	{
		
		printf("\t%d",third);
		first=second;
		second=third;
		third=first+second;
	}
	return 0;
}