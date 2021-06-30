/*
Write a C program to add the two complex numbers by passing the structure to a function.

Write a program to find the sum of out the addition of two complex numbers by passing the structure to a function

Note: The complex number consists of real part and the imaginary part (Ex: 2 + i3, where i is the imaginary part)

During execution, the program should print the following messages one by one on the console as:
Enter the real and imaginary parts of the first complex number : 
Enter the real and imaginary parts of the second complex number : 
For example, if the user gives the input as:
Enter the real and imaginary parts of the first complex number : 2 3
Enter the real and imaginary parts of the second complex number : 4 5
Then the program should print the result as:
The First complex number is : 2 + i3
TheSecond complex number is : 4 + i5
Sum of the two given complex numbers is : 6 + i8
Note - 1: Write the structure declaration and the functions read(), display(), add() in Program1103a.c.
Note - 2:The typedef creates an alias name new_name for the user defined structure. So complex can be used to define the structure variables of the given type.
*/
typedef struct complex
{
	int re,img;
}complex;

complex read (complex c)
{
	scanf("%d%d",&c.re,&c.img);
	return(c);
}
complex display (complex c)
{
	printf("%d + i%d\n",c.re,c.img);
	return(c);
}
complex add (complex c1,complex c2)
{
	complex temp;
	temp.re = c1.re +c2.re;
	temp.img = c1.img + c2.img;
	return(temp);
}
#include <stdio.h>
void main() {
	complex c1, c2, c3;
	printf("Enter real and imaginary parts of first complex number : ");
	c1 = read(c1);
	printf("Enter real and imaginary parts of second complex number : ");
	c2 = read(c2);
	printf("First complex number is : ");
	display(c1);
	printf("Second complex number is : ");
	display(c2);
	c3 = add(c1, c2);
	printf("The addition result of two complex numbers is : ");
	display(c3);
}
