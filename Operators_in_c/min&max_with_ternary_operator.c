/*
Write a program to find the largest and smallest of the three given integers.

During execution, the program should print the following message on the console:
Enter 3 integers :
For example, if the user gives the following as input:
Enter 3 integers : 99 9 999
Then the program should print the result as:
999 is largest
9 is smallest
*/
#include<stdio.h>
void main()
{
	int a,b,c,big,small;
	printf("Enter 3 integers: ",a,b,c);
	scanf("%d%d%d",&a,&b,&c);
	big=a>b?(a>c?a:c):(b>c?b:c);
	printf("%d is largest\n",big);
	small=a<b?(a<c?a:c):(b<c?b:c);
	printf("%d is smallest\n",small);
}
