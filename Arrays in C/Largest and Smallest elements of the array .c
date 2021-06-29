/*
Write a program to read an array of integers (with max size 10) and print the largest and the smallest of the given numbers.

At the time of execution, the program should print the message on the console as:
Enter how many values you want to read : 
For example, if the user gives the input as:
Enter how many values you want to read : 4
Next, the program should print the messages one by one on the console as:
Enter the value of a[0] : 
Enter the value of a[1] :
Enter the value of a[2] :
Enter the value of a[3] : 
If the user gives the input as:
Enter the value of a[0] : 34
Enter the value of a[1] : 23
Enter the value of a[2] : 6
Enter the value of a[3] : 7
then the program should print the result as:
The largest element of the array = 34
The smallest element of the array = 6
*/
#include<stdio.h>
void main()
{
	int n;
	printf("Enter how many values you want to read : ",n);
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{printf("Enter the value of a[%d] : ",i);
	 scanf("%d",&a[i]);}
	int large=a[0];
	int small=a[0];
	for (int i=1;i<n;i++){if(large<a[i]){large=a[i];}}
	for (int i=1;i<n;i++){if(small>a[i]){small=a[i];}}
	printf("The largest element of the array = %d\n",large);
	printf("The smallest element of the array = %d\n",small);
}
