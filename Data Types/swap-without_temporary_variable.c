/*
Write a program to swap two integer values without using a third variable.

During execution, the program should print the following message on the console:
Enter two integers : 
For example, if the user gives the input as 99 89:
Enter two integers : 99 89
Then the program should print the result as:
Before swapping a = 99, b = 89
After swapping a = 89, b = 99
*/
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two integers: ",a,b);
	scanf("%d%d",&a,&b);
	printf("Before swapping a = %d, b = %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping a = %d, b = %d\n",a,b);
}
