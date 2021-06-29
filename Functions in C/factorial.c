/*
Write a program to find the factorial of a given number using functions.

At the time of execution, the program should print the message on the console as:
Enter a number : 
For example, if the user gives the input as:
Enter a number : 5
then the program should print the result as:
*/
#include <stdio.h>
int factorial (int n);
void main() {
	int number;
	printf("Enter a number : ");
	scanf("%d", &number);
	printf("Factorial of a given number %d = %d\n", number, factorial(number));
}
int factorial (int n)
{
	int fact=1,i;
	for(i=1;i<=n;i++){fact*=i;}
	return fact;
}
