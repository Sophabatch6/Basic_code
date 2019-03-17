#include<stdio.h>
main()
{
	int matrix1[3][3],matrix2[3][3],n,i,j,k,sum=0,re[3][3];
	printf("Enter value matrix 1:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("\nEnter value matrix 2: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("\n%d",&matrix2[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				sum=sum+(matrix1[i][k]*matrix2[k][j]);
			}
			re[i][j]=sum;
			sum=0;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",re[i][j]);
		}
		printf("\n");
	}
	
}























