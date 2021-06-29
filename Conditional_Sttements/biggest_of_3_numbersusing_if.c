
/*Write a program to find the biggest of three numbers using if statement.

At the time of execution, the program should print the message on the console as:
Enter three numbers : 
For example, if the user gives the input as:
Enter three numbers : 23 67 45
then the program should print the result as:
Biggest is : 67
*/
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers : ",a,b,c);
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if (a>c){printf("Biggest is : %d\n",a);}
	}
	if(b>a)
	{
		if(b>c){printf("Biggest is : %d\n",b);}
	}
	if(c>a)
	{
		if(c>b){printf("Biggest is : %d\n",c);}
	}
}
