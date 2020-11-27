#include<stdio.h>
main()
{
	int number,i,k;
	printf("Enter decimal number: ");
	scanf("%d",&number);
	for(i = 31;i>=0;i--)
	{
		k=number >> i;
		if(k & 1)
		printf("1");
		else
		printf("0");	
	}	
	printf("\n");
	return 0;
}

















