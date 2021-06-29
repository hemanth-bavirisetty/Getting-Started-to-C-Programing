/*
Write a program to check whether the given number is a prime number or not.

At the time of execution, the program should print the message on the console as:
Enter a number : 
For example, if the user gives the input as:
Enter a number : 27
then the program should print the result as:
The given number 27 is not a prime number
Similarly, if the input is given as 5 then the program should print the result as
The given number 5 is a prime number
*/
#include <stdio.h>
int prime(int num);
void main() {
	int number;
	printf("Enter a number : ");
	scanf("%d", &number);
	if (prime(number) == 0) {
		printf("The given number %d is a prime number\n", number);
	} else {
		printf("The given number %d is not a prime number\n", number);
	}
}
int prime(int num)
{
	int i,c=0;
	if(num==0|| num==1)
	return 1;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			c++;
			break;
		}
	}
	return c;
}
