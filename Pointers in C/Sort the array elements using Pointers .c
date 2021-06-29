/*
Write a program to sort the elements of the given array in ascending order using pointers.

During execution, the program should print the message on the console as:
Enter the value of n : 
For example, if the user gives the input as:
Enter the value of n : 5
Next, the program should print the message on the console as:
Enter 5 elements of the array: 
For example, if the user gives the input as:
Enter 5 elements of the array : 11 55 44 33 22
Then the program should print the result as:
The order of elements before sorting is:: 11 55 44 33 22
The order of elements after sorting is : 11 22 33 44 55 
*/
#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int *p,int n);
void read(int *p,int n);
void display(int *p,int n);
void main() {
	int *p, n, key, flag;
	printf("Enter value of n : ");
	scanf("%d", &n);
	p = (int *) malloc(n * sizeof(int));
	read(p, n);
	printf("Before sorting the elements are : ");
	display(p, n);
	bubbleSort(p, n);
	printf("After sorting the elements are : ");
	display(p, n);
}
void read(int *p,int n)
{
	printf("Enter %d elements : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&*(p+i));
	}
}

void display(int *p,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");
}

void bubbleSort(int *p,int n)
{
		int i,j,t;
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(*(p+j)<*(p+i)){
					t=*(p+i);
					*(p+i)=*(p+j);
					*(p+j)=t;
				}
			}
		}
		
}
