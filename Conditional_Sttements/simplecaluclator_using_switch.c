/*
Write a program that accepts two numbers and one code (1,2,3,4) from the user. 
According to the code, the operations to be performed, using switch case statements as follows:

Addition
Subtraction
Multiplication
Division
Expected Output:
Enter·number·1:·10
Enter·number·2:·20
1·->·Addition
2·->·Subtraction
3·->·Multiplication
4·->·Division
Enter·your·choice:·1
Result:·30

*/
#include<stdio.h>
void main()
{
	int a,b;
	int choice;
	printf("Enter number 1: ",a);
	scanf("%d",&a);
	printf("Enter number 2: ",b);
	scanf("%d",&b);
	printf("1 -> Addition\n");
	printf("2 -> Subtraction\n");
	printf("3 -> Multiplication\n");
	printf("4 -> Division\n");
	printf("Enter your choice: ",choice);
	scanf("%d", &choice);
	switch (choice)
	{
		case 1 : printf("Result: %d\n",a+b);
		break;
		case 2 : printf("Result: %d\n",a-b);
		break;
		case 3 : printf("Result: %d\n",a*b);
		break;
		case 4 : printf("Result: %.2f\n",(float)a/(float)b);
		break;
		default  : printf("entered wrong choise");
		break;
	}
}
