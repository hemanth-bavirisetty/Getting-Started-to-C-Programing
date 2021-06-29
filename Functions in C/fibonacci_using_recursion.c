/*
Write a program to display the fibonacci series up to the given number of terms using recursion process.

The fibonacci series is 0 1 1 2 3 5 8 13 21 34.......

At the time of execution, the program should print the message on the console as:
Enter value of n : 
For example, if the user gives the input as:
Enter value of n : 6
then the program should print the result as:
The fibonacci series of 6 terms are :  0  1  1  2  3  5 
Note: Write the recursive function fib() in Program908a.c.
Hints
The recursive formula for fiboncci series is:
fib(0) = 0
fib(1) = 1
fib(2) = fib(1) + fib(0) = 1 = 0 = 1
fib(3) = fib(2) + fib(1) = 1 + 1 = 2 
....
fib(n) = fib(n-2) + fib(n-1)
*/
#include <stdio.h>
void main() {
	int n, i;
	printf("Enter value of n : ");
	scanf("%d", &n);
	printf("The fibonacci series of %d terms are : ", n);
	for (i = 0; i < n; i++) {
		printf(" %d ", fib(i));
	}
}
int fib(i)
{
	if(i==0)
	return 0;
	else if(i==1)
	return 1;
	else
	return (fib(i-1)+fib(i-2));
}
