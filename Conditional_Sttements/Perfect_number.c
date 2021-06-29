
/*Write a program to check whether the given number is perfect, abundant or deficient.

[Hint: A number is said to be perfect if it equals the sum of its proper divisors. For example, 6 = 1 + 2 + 3 and 28 = 1 + 2 + 4 + 7 + 14, so both 6 and 28 are perfect numbers.
Alternatively, if the sum of a number's proper divisors exceeds the number itself, it is said to be abundant, while if the sum of a number's proper divisors is lessthan the number itself, it is said to be deficient.]

At the time of execution, the program should print the message on the console as:
Enter a value : 
For example, if the user gives the input as:
Enter a value : 6
then the program should print the result as:
The given number 6 is a perfect number
Similarly if the input is 10 then the output should be "The given number 10 is a deficient number".
*/
#include<stdio.h>
void main() 
{
	int n,i,k=0;
	printf("Enter a value : ",n);
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			k+=i;
		}
	}
	if(k==n){printf("The given number %d is a perfect number\n",n);}
	if(k<n){printf("The given number %d is a deficient number\n",n);}
	if(k>n){printf("The given number %d is an abundant number\n",n);}
}
