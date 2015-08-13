#include<stdio.h>

float power(int x,int n)
{
	if(n==0)
		return 1;
	x=x*power(x,(n-1));
	return x;


}

float fact(int n)
{
	if(n==1)
		return 1;
	n=n*fact(n-1);
	return n;
}


void main()
{
	int x,n,i,flag=0;
	float sum=0.0;
	printf("Enter the value of x & range : ");
	scanf("%d",&x);
	scanf("%d",&n);
	
	for(i=1;i<=n;i+=2)
	{
		if(flag==0)
		{
			sum=sum+(power(x,i)/fact(i));
			flag=1;
		}
		else
		{
			sum=sum-(power(x,i)/fact(i));
			flag=0;
		}

	}
	
	printf("%1.4f\n",sum);
}