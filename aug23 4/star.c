#include<stdio.h>
main()
{
	int i,j,num,spaces,star;
	printf("enter the num");
    scanf("%d",&num);
	spaces=num-1;
	star=1;
	    
   for(i=1;i<=num;i++)
   {
	   for(j=1;j<=spaces;j++)
			printf(" ");
	   for(j=1;j<=star;j++)
		   printf("*");
	   for(j=1;j<=star-1;j++)
		   printf("*");
	   printf("\n");
	   spaces--;
	   star++;

   }
   spaces+=2;
   star-=2;

   for(i=1;i<=num;i++)
   {
	   for(j=1;j<=spaces;j++)
			printf(" ");
	   for(j=1;j<=star;j++)
		   printf("*");
	   for(j=1;j<=star-1;j++)
		   printf("*");
	   printf("\n");
	   spaces++;
	   star--;

   }
}