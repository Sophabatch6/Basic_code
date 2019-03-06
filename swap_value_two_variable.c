#include<stdio.h>
main()
{
	int v1,v2,v3;
	printf("Enter the value 1: ");
	scanf("%d",&v1);
	printf("Enter the value 2: ");
	scanf("%d",&v2);
	v3=v1;
	v1=v2;
	v2=v3;
	
	printf("Value 1 is: %d\n",v1);
	printf("Value 2 is: %d",v2);
}
