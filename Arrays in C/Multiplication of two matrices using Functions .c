/*
Write a program to find the multiplication of two matrices using functions.

At the time of execution, the program should print the message on the console as:
Enter the size of the first matrix : 
For example, if the user gives the input as:
Enter the size of the first matrix : 2 2
Next, the program should print the message on the console as:
Enter 4 elements : 
if the user gives the input as:
Enter 4 elements : 1 2 3 4 
Next, the program should print the message on the console as:
Enter the size of the second matrix : 
if the user gives the input as:
Enter the size of the second matrix : 2 2
Next, the program should print the message on the console as:
Enter 4 elements : 
if the user gives the input as:
Enter 4 elements : 5 6 7 8 
then the program should print the result as:
The first matrix is
1 2 
3 4 
The second matrix is
5 6 
7 8 
The resultant matrix is
19 22 
43 50 
*/
#include <stdio.h>
void multiplicationOfTwoMatrices(int a[10][10],int b[10][10],int m,int n,int q);
void read (int a[10][10],int m,int n);
void display(int a[10][10],int m,int n);
void main() {
	int a[10][10], b[10][10], m, n, p, q;
	printf("Enter the size of the first matrix : ");
	scanf("%d%d", &m, &n);
	read(a, m, n);
	printf("Enter the size of the second matrix : ");
	scanf("%d%d", &p, &q);
	read(b, p, q);
	printf("The first matrix is\n");
	display(a, m, n);
	printf("The second matrix is\n");
	display(b, p, q);
	if (n == p) {
		multiplicationOfTwoMatrices(a, b, m, n, q);
	} else {
		printf("Multiplication is not possible\n");
	}
}
void read (int a[10][10],int m,int n)
{
	printf("Enter %d elements : ",m*n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++){scanf("%d",&a[i][j]);}
	}
}

void display(int a[10][10],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++){printf("%d ",a[i][j]);}
		printf("\n");
	}
}

void multiplicationOfTwoMatrices(int a[10][10],int b[10][10],int m,int n,int q)
{
	int c[10][10]={0};
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			for(int k=0;k<n;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
		
	}
	printf("The resultant matrix is\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}

