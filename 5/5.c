#include<stdio.h>

void main()
{
	int i;
	char str[20],*ptr;
	float val,dig;

	printf("Enter the float value to read in string");
	scanf("%s",&str);
	printf("%s\n",str);
	ptr=&str;
	for(i=0;str[i]!='.';i++)
	{
		dig=(float)*ptr;
		val=val+dig;
		ptr++;
	}

		printf("%f",val);


}
