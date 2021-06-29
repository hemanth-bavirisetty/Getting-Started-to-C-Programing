/*
Write a program to find the transpose of a given matrix using functions.

Sample Input and Output:
Enter the size of matrix : 3 2
Enter 6 elements : 111 222 333 444 555 666
The given matrix is
111 222 
333 444 
555 666 
The transpose matrix is
111 333 555 
222 444 666
*/
#include <stdio.h>
void read(int a[5][5], int m, int n);
void display(int a[5][5], int m, int n);
void transposeMatrix(int a[5][5], int b[5][5], int m, int n);
void main() {
	int a[5][5], b[5][5], m, n, p, q;
	printf("Enter the size of matrix : ");
	scanf("%d%d", &m, &n);
	read(a, m, n);
	printf("The given matrix is\n");
	display(a, m, n);
	transposeMatrix(a, b, m, n);
	printf("The transpose matrix is\n");
	display(b, n, m);
}
void read(int a[5][5], int m, int n)
{
	printf("Enter %d elements : ",m*n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++){scanf("%d",&a[i][j]);}
	}
}

void display(int a[5][5], int m, int n)
{
 for(int i=0;i<m;i++)
 {
	for(int j=0;j<n;j++){printf("%d ",a[i][j]);}
	printf("\n");
 }	
}

void transposeMatrix(int a[5][5], int b[5][5], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++){b[j][i]=a[i][j];}
	}
	
}
