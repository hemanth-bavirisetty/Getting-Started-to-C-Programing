/*
Write a program to find out the multiplication of two complex numbers by passing the structure to a function.

Note: The complex number consists of real part and the imaginary part (Ex: 2 + i3, where i is the imaginary part)

During execution, the program should print the following messages on the console as:
Enter the real and imaginary parts of the first complex number : 
Enter the real and imaginary parts of the second complex number :  
For example, if the user gives the input as:
Enter the real and imaginary parts of the first complex number : 2 3
Enter the real and imaginary parts of the second complex number : 4 5
Then the program should print the result as:
The First complex number is : 2 + i3
The Second complex number is : 4 + i5
The multiplication result of two complex numbers is : -7 + i22
Note: Write the structure declaration and the functions read(), display(), product() in Program1104a.c.
Note - 2:The typedef creates an alias name new_name for the user defined structure. So complex can be used to define the structure variables of the given type.
*/
#include <stdio.h>
struct complex
{
	int real,img;
};
int main()
{
	struct complex c1,c2,c3;
	printf("Enter real and imaginary parts of first complex number : ");
	scanf("%d%d",&c1.real,&c1.img);
	printf("Enter real and imaginary parts of second complex number : ");
	scanf("%d%d",&c2.real,&c2.img);
	c3.real = c1.real * c2.real - c1.img * c2.img;
	c3.img = c1.real*c2.img + c2.real*c1.img;
	printf("First complex number is : %d + i%d\n",c1.real,c1.img);
	printf("Second complex number is : %d + i%d\n",c2.real,c2.img);
	printf("The multiplication result of two complex numbers is : %d + i%d\n",c3.real,c3.img);
}
