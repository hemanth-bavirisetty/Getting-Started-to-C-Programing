/*
Write a program to sort (Ascending order) the given elements using bubble sort technique.

At the time of execution, the program should print the message on the console as:
Enter value of n : 
For example, if the user gives the input as:
Enter value of n : 3
Next, the program should print the messages one by one on the console as:
Enter element for a[0] : 
Enter element for a[1] : 
Enter element for a[2] : 
if the user gives the input as:
Enter element for a[0] : 22
Enter element for a[1] : 33
Enter element for a[2] : 12
then the program should print the result as:
Before sorting the elements in the array are
Value of a[0] = 22
Value of a[1] = 33
Value of a[2] = 12
After sorting the elements in the array are
Value of a[0] = 12
Value of a[1] = 22
Value of a[2] = 33
*/

#include <stdio.h>
int main ()
{
	int a[100],n,i,d,swap;
	printf("Enter value of n : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element for a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("Before sorting the elements in the array are\n");
	for(i=0;i<n;i++){printf("Value of a[%d] = %d\n",i,a[i]);}
	for(i=0;i<n-1;i++)
	{
		for(d=0;d<n-i-1;d++)
		{
			if(a[d]>a[d+1])
			{
				swap=a[d];
				a[d]=a[d+1];
				a[d+1]=swap;
			}
		}
	}

	printf("After sorting the elements in the array are\n");
	for(i=0;i<n;i++){printf("Value of a[%d] = %d\n",i,a[i]);}
	return 0;
}
