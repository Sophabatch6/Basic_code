/*#include <stdio.h>
 
int main()
{
  int n, c, k;
 
  printf("Enter an integer in decimal number system\n");
  scanf("%d", &n);
  printf("%d in binary number system is:\n", n);
 
  for (c = 31; c >= 0; c--)
  {
    k = n >> c;
 
    if (k & 1)
      printf("1");
    else
      printf("0");
  }
 
  printf("\n");
 
  return 0;
}*/
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

















