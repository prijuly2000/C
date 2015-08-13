#include<stdio.h>

void main()
{
	int i,sn,fn,sm,arr[10];

	printf("Enter the numbers:");
	
	for(i=0;i<5;i++)
		scanf("%d",&arr[i]);
	
	sm=arr[0];
	fn=arr[0];

	for(i=1;i<5;i++)
	{
		
			if(fn<arr[i])
				fn=arr[i];
			else if(sm>arr[i])
				sm=arr[i];
		
	}

	sn=sm;
	for(i=0;i<5;i++)
		if(arr[i]<fn && sn<arr[i])
			sn=arr[i];
	
	printf(" First biggest : %d\n Second biggest : %d \n Smallest Number : %d\n\n",fn,sn,sm);

}
