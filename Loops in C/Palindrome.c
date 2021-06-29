/*
Write a program to find the reverse of an integer number and check whether it is Palindrome or not.

At the time of execution, the program should print the message on the console as:
Enter an integer : 
For example, if the user gives the input as:
Enter an integer : 2014
then the program should print the result as:
The reverse of a given number : 4102
2014 is not a palindrome
If the input is given as 1221 then the result should be:
The reverse of a given number : 1221
1221 is a palindrome
*/
#include<stdio.h>
void main()
{
	int n,m,rem,rev;
	printf("Enter an integer : ",n);
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	printf("The reverse of a given number : %d\n",rev);
	if(rev==m){printf("%d is a palindrome\n",m);}
	else{printf("%d is not a palindrome\n",m);}
}
