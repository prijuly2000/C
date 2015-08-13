#include<stdio.h>
#include<string.h>

void main()
{
	int len[10],j,i,range,index[10],temp;
	char str[10][10]={"Hello","Hi","Howdy","What up","Whts up"};
	
	printf("Enter teh range :");
	scanf("%d",&range);

	printf("\n\nEnter the strings : ");

	for(i=0;i<range;i++)
	{
		scanf("%s",&str[i]);
		index[i]=i;
	}

	

	for(i=0;i<range;i++)
		len[i]=strlen(str[i]);

	for(i=0;i<range;i++)
	{
		for(j=0;j<range-1;j++)
		{
			if(len[j]>len[j+1])
			{
				temp=len[j];
				len[j]=len[j+1];
				len[j+1]=temp;
				temp=index[j];
				index[j]=index[j+1];
				index[j+1]=temp;
			}
		}
	}
	
	printf("\n\n--------------Sorted Strings---------------\n");
	for(i=0;i<range;i++)
		printf("\n%s\n",str[index[i]]);

	printf("\n\n-------------------------------------------\n");





	
}
