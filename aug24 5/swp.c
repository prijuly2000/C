#include<stdio.h>

void swap(int **pa,int **pb)
{
	int *temp;
	temp=*pa;
	*pa=*pb;
	*pb=temp;
}


void main()
{
	int a,b;
	int *ptr1,*ptr2;
  	scanf("%d%d",&a,&b);
	ptr1=&a;
	ptr2=&b;
	printf("%d %d",*ptr1,*ptr2);
	swap(&ptr1,&ptr2);
	printf("%d %d",a,b);
	printf("\n%d %d",*ptr1,*ptr2);
}
