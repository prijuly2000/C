#include<stdio.h>
void main ()
{
   int i,j,spaces,num,range;

   printf("Ente the range : ");
   scanf("%d",&range);
   spaces = range-1;

   for(i=0;i<range;i++)
   {
	   for(j=0;j<spaces;j++)
		   printf(" ");
	   for(j=i;j>=0;j--)
		   printf("%d",j);
	   for(j=1;j<=i;j++)
		   printf("%d",j);
	   putchar(10);
	   spaces--;
	   
   }
	spaces+=2;
	num=i-2;
	

   for(i=0;i<range-1;i++)
   {
	   for(j=0;j<spaces;j++)
		   printf(" ");
	   for(j=num;j>=0;j--)
		   printf("%d",j);
	   for(j=1;j<=num;j++)
		   printf("%d",j);
	   putchar(10);
	   spaces++;
	   num--;
   }
 
  

}