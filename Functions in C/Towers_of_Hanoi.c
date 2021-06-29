/*
Write a program to solve the towers of hanoi problem using recursion process.

At the time of execution, the program should print the message on the console as:
Enter number of disks : 
For example, if the user gives the input as:
Enter number of disks : 3
then the program should print the result as:
Move disk - 1 from pole A to C
Move disk - 2 from pole A to B
Move disk - 1 from pole C to B
Move disk - 3 from pole A to C
Move disk - 1 from pole B to A
Move disk - 2 from pole B to C
Move disk - 1 from pole A to C
*/
#include <stdio.h>
void hanoi(int num,char x,char y,char z);
void main() {
	int n;
	printf("Enter number of disks : ");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
}
void hanoi(int num,char x,char y,char z)
{
	if (num==1)
	{
		printf("Move disk - 1 from pole %c to %c\n",x,z);
		return;
	}
	hanoi(num-1,x,z,y);
	printf("Move disk - %d from pole %c to %c\n",num,x,z);
	hanoi(num-1,y,x,z);
}
