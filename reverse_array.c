//4.	C program to read integers into an array and reversing them using pointers.
#include<stdio.h>
#include<conio.h>
int change(int*, int n);
int main()
{
	int i,number[30],n;
	printf("Enter number of element: ");
	scanf("\n%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
	printf("\nBefore revers: ");
	for(i=0;i<n;i++)
	printf("%d",number[i]);
	change(number,n);
	printf("\nAfter revers: ");
	for(i=0;i<n;i++)
	printf("%d",number[i]);
	return 0;
}
int change(int*revers,int n){
	int number,i=0,j;
	n=n-1;
	for(i=0;i<n/2;i++)
	{
		number=*(revers+i);
		*(revers+i)=*(revers+(n-i));
		*(revers+(n-i))=number;
	}
}
