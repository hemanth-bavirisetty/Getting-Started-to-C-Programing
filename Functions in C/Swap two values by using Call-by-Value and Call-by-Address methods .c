/*
Write a program to swap two values by using call by value and call by address methods.

At the time of execution, the program should print the message on the console as:
Enter two integer values : 
For example, if the user gives the input as:
Enter two integer values : 23 45
then the program should print the result as:
Before swapping in main : firstNum = 23 secondNum = 45
After swapping in call-by-value : firstValue = 45 secondValue = 23
After call-by-value in main : firstNum = 23 secondNum = 45
After swapping in call-by-address : *firstPointer = 45 *secondPointer = 23
After call-by-address in main : firstNum = 45 secondNum = 23
*/
#include <stdio.h>
void callByValue(int firstnum,int secondnum);
void callByAddress(int *firstnum,int *secondnum);
void main() {
	int firstNum, secondNum;
	printf("Enter two integer values : ");
	scanf("%d %d", &firstNum, &secondNum);
	printf("Before swapping in main : firstNum = %d secondNum = %d\n", firstNum, secondNum);
	callByValue(firstNum, secondNum);
	printf("After call-by-value in main : firstNum = %d secondNum = %d\n", firstNum, secondNum);
	callByAddress(&firstNum, &secondNum);
	printf("After call-by-address in main : firstNum = %d secondNum = %d\n", firstNum, secondNum);
}
void callByValue(int firstnum,int secondnum) 
{
	int temp;
	temp=firstnum;
	firstnum=secondnum;
	secondnum=temp;
	printf("After swapping in call-by-value : firstValue = %d secondValue = %d\n",firstnum,secondnum);
	
}
void callByAddress(int *firstnum,int *secondnum) {
	int temp;
	temp = *firstnum;
	*firstnum=*secondnum;
	*secondnum=temp;
	printf("After swapping in call-by-address : *firstPointer = %d *secondPointer = %d\n",*firstnum,*secondnum);
}
