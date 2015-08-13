#include<stdio.h>

void main()
{
	int length=0,i,j=0;
	char str[100];
	printf("Enter the string\n");
	scanf("%s",&str);

	for(i=1;str[i]!='\0';i++)
		length++;
	
	printf("%d\n",length);
	for(i=0;i<length;i++)
	{
		if(str[i]!=str[length-i])
			j=1;
	}
	if(j==1)
		printf("String is not palindrome\n");
	else
		printf("String is plindrome\n");

}
