#include<stdio.h>
#include<windows.h>
void program1();
void program2();
void program3();
void program4();
void program5();
void out();
void main()
{
	int number;
	char ch;
	menu:
	printf("\t\t\t\t\tMenu");
	system("color 9");
	printf("\n1/.Program1\n2/.Program2\n3/.Program3\n4/.Program4\n5/.Program5");
	printf("\nEnter your choice: ");
	scanf("%d",&number);
	switch(number)
	{
		case 1: 
			system("cls");
			printf("Your choice is Program1.");
			program1();
			break;
		case 2:
			system("cls");
			printf("Your choice is Prgram2.");
			program2();
			break;
		case 3:
			system("cls");
			printf("Your choice is Program3.");
			program3();
			break;
		case 4:
			system("cls");
			printf("Your choice is Program4.");
			program4();
			break;
		case 5:
			system("cls");
			printf("Your choice is Program5.");
			program5();
			break;
		default:
			printf("Invalid");
			printf("Do you want go to the menu?(N/Y): ");
			scanf("%s",&ch);
			if(ch=='y'||ch=='Y'){
			system("cls");
			goto menu;
			}
			out();
	}
}
void program1()
{
	printf("\nprogram1");
	//Write the code here
}
void program2()
{
	printf("\nprogram2");
	//Write the code here
}
void program3()
{
	printf("\nprogram3");
	//Write the code here
}
void program4()
{
	printf("\nprogram4");
	//Write the code here
}
void program5()
{
	printf("\nprogram5");
	//Write the code here
}
void out()
{
	printf(" ");
}
