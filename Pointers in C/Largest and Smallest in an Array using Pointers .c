/*
Write a program to find the Largestand the Smallest elements of the given array elements using pointers.Then swap these elements and display the resultant array.

During execution, the program should print the following message on the console: as:
Enter array size : 
For example, if the user gives the input as:
Enter array size : 5
Next, the program should print the following messages one by one on the console as:
Enter 5 elements : 
if the user gives the input as:
Enter 5 elements of the array : 12 45 37 29 15
Then the program should print the result as follows:
The Largest element of the array = 45
The Smallest element of the array = 12
After swapping the elements in array : 45 12 37 29 15
*/
#include <stdio.h>
#include <stdlib.h>
void read (int *p,int n);
void display(int *p,int n);
void largeSmallAndSwap(int *p,int n);
void swap(int *p,int maxp ,int minp);
void main() {
	int *p, i, n, max, min;
	printf("Enter array size : ");
	scanf("%d", &n);
	p = (int *) malloc(n * sizeof(int));
	printf("Enter %d elements : ", n);
	read(p, n);
	largeSmallAndSwap(p, n);
	printf("After swapping the elements in array : ");
	display(p, n);
}
void read (int *p,int n)
{
	for(int i=0;i<n;i++)	{scanf("%d",&*(p+i));}
}
void display(int *p,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
		
	}
	printf("\n");
}
void largeSmallAndSwap(int *p,int n)
{
	int max=*(p+0);
	int min=*(p+0);
	int maxp=0,minp=0,*temp;
	void swap ();
	for(int i=0;i<n;i++)
	{
		if(*(p+i)>max) 
		{ 
			max=*(p+i);
		    maxp =i;	
		}
		if(*(p+i)<min) 
		{ 
			min=*(p+i);
			minp=i;
		}
	}
	printf("The largest element of the array = %d\n",max);
	printf("The smallest element of the array = %d\n",min);
	swap(p,maxp,minp);
}
void swap(int *p,int maxp ,int minp)
{
	*(p+maxp)=*(p+maxp)+*(p+minp);
	*(p+minp)=*(p+maxp)-*(p+minp);
	*(p+maxp)=*(p+maxp)-*(p+minp);
}
