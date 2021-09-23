#include<stdio.h>
#include<conio.h>
#include<iostream.h>

int main()
{
	char op;
	float num1,num2;
	clrscr();

	printf("\n enter oprator [ +,-,* or /]:");
	cin>>op;
	printf("enter first number:>  ");
	cin>>num1;
	printf("enter second number:>  ");
	cin>>num2;

	switch(op)
	{              //case number 1
		case'+':
		printf("addition of two number:>  ");
		cout<<num1+num2;
		break;
		      //case number 2
		case'-':
		printf("substraction of two number:>  ");
		cout<<num1-num2;
		break;
		     //case number 3
		case'/':
		printf("division of two number's:>  ");
		cout<<num1/num2;
		break;
		     //case number 4
		case'*':
		printf("multiplication of two number:>  ");
		cout<<num1*num2;
		break;

		     //default case

		default:
		printf("\n-----** ERROR ! **----- ");
		break;
	      }
	getch();
	return 0;
}
