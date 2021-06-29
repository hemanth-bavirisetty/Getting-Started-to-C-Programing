/*
Write a program to print the Fibonacci seriesi.e., 0 1 1 2 3 5 8 13 21....., up to the limit.

[Hint: By definition, the first two numbers in the Fibonacci sequence are 0 and 1, and each subsequent number is the sum of the previous two.]

At the time of execution, the program should print the message on the console as:
Enter the maximum limit to generate the Fibonacci series : 
For example, if the user gives the input as:
Enter the maximum limit to generate the Fibonacci series : 10
then the program should print the result as:
The Fibonacci series is : 0 1 1 2 3 5 8
*/
#include<stdio.h>
void main()
{
	int i,n,t1=0,t2=1,x=0;
	printf("Enter the maximum limit to generate the Fibonacci series : ",n);
	scanf("%d",&n);
	printf("The Fibonacci series is : %d %d ",t1,t2);
	x=t1+t2;
	while(x<=n)
	{
		printf("%d",x);
		t1=t2;
		t2=x;
		x=t1+t2;
		if(x<n){printf(" ");}
	}
}	
