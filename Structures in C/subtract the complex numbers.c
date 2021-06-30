/*
Write a C program to subtract the complex numbers. Take the complex number from the user using structure.

Sample Test Cases
Test Case 1:
Expected Output:
Enter·real·and·imaginary·parts·of·first·complex·number·:·4 5
Enter·real·and·imaginary·parts·of·second·complex·number·:·7 9
First·complex·number·is·:·4·+·i5
Second·complex·number·is·:·7·+·i9
The·addition·result·of·two·complex·numbers·is·:·-3·-·i4

Test Case 2:
Expected Output:
Enter·real·and·imaginary·parts·of·first·complex·number·:·8 6
Enter·real·and·imaginary·parts·of·second·complex·number·:·2 7
First·complex·number·is·:·8·+·i6
Second·complex·number·is·:·2·+·i7
The·addition·result·of·two·complex·numbers·is·:·6·-·i1
*/
#include <stdio.h>
typedef struct complex
{
	int re,img;
}complex;
complex  read (complex c)
{
	scanf("%d%d",&c.re,&c.img);
	return (c);  
}
complex display(complex c)
{
	if(c.img>0){
	printf("%d + i%d",c.re,c.img);
	}
	else {printf("%d - i%d",c.re,abs(c.img));}
	printf("\n");
	return(c);
}
complex subtract (complex c1 ,complex c2)
{
	complex temp;
	temp.re = c1.re  - c2.re;
	temp.img= c1.img - c2.img;
	return (temp);
}


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
	c3 = subtract(c1, c2);
	printf("The addition result of two complex numbers is : ");
	display(c3);
}
