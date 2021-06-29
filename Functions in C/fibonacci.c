/*
Write a program to print the Fibonacci series up to the given limit.

At the time of execution, the program should print the message on the console as:
Enter the maximum limit to generate the Fibonacci series : 
For example, if the user gives the input as:
Enter the maximum limit to generate the Fibonacci series : 15
then the program should print the result as:
The Fibonacci series is : 0 1 1 2 3 5 8 13
*/
#include <stdio.h>
int fibonacci(int number);
void main() {
	int number;
	printf("Enter the maximum limit to generate the Fibonacci series : ");
	scanf("%d", &number);
	fibonacci(number);
}
int fibonacci(int number)
{
int a=0,b=1,c;
printf("The Fibonacci series is : ");
while(a<=number)
{
	printf("%d",a);
	c=a+b;
	a=b;
	b=c;
	if(a<number){printf(" ");}
}
}
