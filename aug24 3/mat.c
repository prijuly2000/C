#include<stdio.h>
void main()
{
  int a[3][3],i,j;

  int **pa;
  pa=&a;
  for(i=0;i<3;i++,*pa++)
  {
	  for(j=0;j<3;j++,pa++)
		  scanf("%d",pa);
  
	pa=&a;
  for(i=0;i<3;i++,*pa++)
	  for(j=0;j<3;j++,pa++)
		  printf("%d",pa);
  
}}