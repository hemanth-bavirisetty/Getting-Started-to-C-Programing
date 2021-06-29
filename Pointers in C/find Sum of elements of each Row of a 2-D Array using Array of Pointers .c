/*
Write a sample code to find the sum of elements of each row of a two-dimensional array using array of pointers.

At the time of execution, the program should print the message on the console as:
Enter row and column sizes : 
For example, if the user gives the input as:
Enter row and column sizes : 3 3
Next, the program should print the message on the console as:
Enter 9 elements : 
For example, if the user gives the input as:
Enter 9 elements : 3 6 9 2 4 6 3 5 7
then the program should print the result as:
The given matrix is
3 6 9 
2 4 6 
3 5 7 
Sum of row - 0 elements = 18
Sum of row - 1 elements = 12
Sum of row - 2 elements = 15
*/
#include <stdio.h>
#include <stdlib.h>
void read(int *arr[5], int m, int n);
void display(int *arr[5], int m, int n);
void sumOfEachRow(int *arr[5], int m, int n);
void main() {
	int *arr[5], i, j, m, n, sum;
	printf("Enter row and column sizes : ");
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++) {
		arr[i] = (int *) malloc(n * sizeof(int));
	}
	read(arr, m, n);
	printf("The given matrix is\n");
	display(arr, m, n);
	sumOfEachRow(arr, m, n);
}
void read(int *arr[5], int m, int n) 
{
	printf("Enter %d elements : ",m*n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",(*(arr+i)+j));
		}
	}
}


void display(int *arr[5], int m, int n) 
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++){ printf("%d ",*(*(arr+i)+j));}
		printf("\n");
	}
}

void sumOfEachRow(int *arr[5], int m, int n) {
	int sum=0;
	for(int i=0;i<m;i++)
	{
		int sum=0;
		for(int j=0;j<n;j++)
		{
			sum=sum+*(*(arr+i)+j);
		}
		printf("Sum of row - %d elements = %d\n",i,sum);
	}
}
