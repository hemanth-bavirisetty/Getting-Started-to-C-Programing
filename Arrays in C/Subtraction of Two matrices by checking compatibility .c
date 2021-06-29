/*
Write a program to find the subtraction of two matrices.

At the time of execution, the program should print the message on the console as:
Enter the row & column sizes of matrix-1 : 
For example, if the user gives the input as:
Enter the row & column sizes of matrix-1 : 2 2
Next, the program should print the message on the console as:
Enter matrix-1 4 elements : 
if the user gives the input as:
Enter matrix-1 4 elements : 1 2 3 4 
Next, the program should print the message on the console as:
Enter the row & column sizes of matrix-2 : 
if the user gives the input as:
Enter the row & column sizes of matrix-2 : 2 2
Next, the program should print the message on the console as:
Enter matrix-2 4 elements : 
if the user gives the input as:
Enter matrix-2 4 elements : 6 7 8 9 
then the program should print the result as:
The given matrix-1 is
1 2 
3 4 
The given matrix-2 is
6 7 
8 9 
Subtraction of two matrices is
-5 -5 
-5 -5
*/
#include <stdio.h>
void main()
{
	int r1,c1,r2,c2,a[100][100],b[100][100],sub[100][100];
	printf("Enter the row & column sizes of matrix-1 : ");
	scanf("%d%d",&r1,&c1);
	printf("Enter matrix-1 %d elements : ",r1*c1);
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
        }
	}
	printf("Enter the row & column sizes of matrix-2 : ");
	scanf("%d%d",&r2,&c2);
	printf("Enter matrix-2 %d elements : ",r2*c2);
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("The given matrix-1 is\n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("The given matrix-2 is\n");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	if((r1==r2)&&(c1==c2))
	{
		printf("Subtraction of two matrices is\n");
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			{
				sub[i][j]=a[i][j]-b[i][j];
			}
		}
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			{
				printf("%d ",sub[i][j]);
			}
			printf("\n");
		}
	}
	else{printf("Subtraction is not possible\n");}
}
