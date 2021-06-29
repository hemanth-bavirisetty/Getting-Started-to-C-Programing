/*
Write a sample code to check whether the given number is an armstrong number or not.

[Hint: An armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits.
For example,
9 = 91 = 9
371 = 33 + 73 + 13 = 27 + 343 +1 = 371
8208 = 84 + 24+04 + 84 = 4096 + 16 + 0 + 4096 = 8028]

At the time of execution, the program should print the message on the console as:
Enter any number : 
For example, if the user gives the input as:
Enter any number : 153
then the program should print the result as:
The given number 153 is an armstrong number
Similarly, if the input is given as 121 then the output should be "The given number 121 is not an armstrong number".
*/
#include "stdio.h"
#include "math.h"
void main()
{
	int a,b,rem,n=0;
	float r=0.0;
	printf("Enter any number : ",a);
	scanf("%d",&a);
	b=a;
	for(a=b;a!=0;++n){a/=10;}
	for(a=b;a!=0;a/=10)
	{
		rem=a%10;
		r+=pow(rem, n);
	}
	if(r==b){printf("The given number %d is an armstrong number\n",b);}
	else	{printf("The given number %d is not an armstrong number\n",b);}
}
