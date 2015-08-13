#include<stdio.h>

float sqr(float x)
{
	return x*x;
}
float fact(float n)
{
	if(n==1)
		return 1;
	n=n*fact(n-1);
	return n;
}

void main()
{
	int limit,flag=0;
	float sum,x,i;

	printf("Enter the x & limit");
	scanf("%f %d",&x,&limit);
	sum=x;
	
	for(i=2;i<=limit;i+=2)
	{
		
		if(i==2)
			sum-=(sqr(x)/fact(i));
		else
		{
			if(flag==0)
			{
				sum+=(x/fact(i));
				flag=1;
			}
			else
			{
				sum-=(x/fact(i));
				flag=0;
			}
		}

	}
	
	printf("%1.4f\n",sum);

}
