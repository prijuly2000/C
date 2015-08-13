#include<stdio.h>

void main()
{
	int i,j,num1,sum=0,num2,n1[10],n2[10],len1=0,len2=0;


	printf("Enter the two numbers :");
	scanf("%d%d",&num1,&num2);

	i=0;
	while(num1!=0)
	{
		n1[i]=num1%10;
		num1=num1/10;
		i++;
	}

	len1=i;
	printf("\n%d",len1);

	for(i=len1-1;i>=0;i--)
		printf("  %d",n1[i]);

	i=0;
	while(num2!=0)
	{
		n2[i]=num2%10;
		num2=num2/10;
		i++;
	}
	len2=i;
	printf("\n%d",len2);
	for(i=len2-1;i>=0;i--)
		printf("  %d",n2[i]);

	for(i=len1-1;i>=0;i--)
		for(j=len2-1;j>=0;j--)
			sum=sum+n1[i]*n2[j];

	printf("\n\nSum is : %d\n\n",sum);


}

