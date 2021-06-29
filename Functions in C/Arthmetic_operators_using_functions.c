/*
Write a C program to perform menu driven arithmetic operations using functions.

Sample Test Cases

Test Case 1:
Expected Output:
Enter·two·values·:·2 3
The·menu·driven·is:
1.Additon
2.Subtraction
3.Multiplication
4.Division
Enter·an·option·:·1
Addition·of·two·values·=·5

Test Case 2:
Expected Output:
Enter·two·values·:·65 12
The·menu·driven·is:
1.Additon
2.Subtraction
3.Multiplication
4.Division
Enter·an·option·:·3
multiplication·of·two·values·=·780
*/

#include "stdio.h"
int addition();
int subtraction();
int multiplication();
int division();
int a,b;
void main()
{
	int c;
	printf("Enter two values : ");
	scanf("%d%d",&a,&b);
	printf("The menu driven is:\n");
	printf("1.Additon\n2.Subtraction\n3.Multiplication\n4.Division\n");
	printf("Enter an option : ");
	scanf("%d",&c);

	switch(c) 
	{
		case (1) :  addition();
					break;
		case (2) :  subtraction();
					break;
		case (3) :  multiplication();
					break;
		case (4) :  division();
					break;
		default : printf("Error..! Invalid Choice ");
	}
}
int addition()
{
	printf("Addition of two values = %d\n",a+b);
	return 0;
}
int subtraction()
{
	printf("Subtraction of two values = %d\n",a-b);
	return 0;
}
int multiplication()
{
	printf("multiplication of two values = %d\n",a*b);
	return 0;
}
int division()
{
	printf("division of two values = %d\n",a/b);
	return 0;
}
