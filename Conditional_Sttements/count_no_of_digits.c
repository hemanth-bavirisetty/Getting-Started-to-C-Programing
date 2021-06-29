/*
Write a program to find the count the number of digits of a given number.

At the time of execution, the program should print the message on the console as:
Enter an integer : 
For example, if the user gives the input as:
Enter an integer : 345
then the program should print the result as:
Total number of digits of the given number 345 = 3
*/
#include<stdio.h>
void main ()
{
	int n,count=0,k;
	printf("Enter an integer : ",n);
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
		n/=10;
		++count;
	}
	printf("Total number of digits of the given number %d = %d\n",k,count);
}
