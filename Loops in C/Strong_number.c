/*
while loop in C
While loop is also known as a pre-tested loop. In general, a while loop allows a part of the code to be executed multiple times depending upon a given boolean condition. It can be viewed as a repeating if statement. The while loop is mostly used in the case where the number of iterations is not known in advance.

Syntax of while loop in C language
The syntax of while loop in c language is given below:
'''
while(condition){  
//code to be executed  
}  
'''
Write a program to check whether the given number is strong number or not.

[Hint: A number is called strong number if sum of the factorials of its digits is equal to number itself. For example: 145 since 1! + 4! + 5! = 1 + 24 + 120 = 145.]

At the time of execution, the program should print the message on the console as:
Enter a value : 
For example, if the user gives the input as:
Enter a value : 145
then the program should print the result as:
The given number 145 is a strong number
*/
#include<stdio.h>
void main()
{
	int n,m,rem,fact,sum=0;
	printf("Enter a value : ",n);
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		rem=n%10;
		fact=1;
		for(int i=1;i<=rem;i++){fact*=i;}
		sum+=fact;
		n/=10;
	}
	if(sum==m){printf("The given number %d is a strong number\n",m);}
	else {printf("The given number %d is not a strong number\n",m);}
}
