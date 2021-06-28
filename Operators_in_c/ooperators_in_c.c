/*
Write a simple program that prints the results of all the operators available in C (including pre / post increment, bitwise and/or/not, etc.).

Read required operand values from standard input.

At the time of execution, the program should print the message on the console as:
Enter a and b values : 
For example, if the user gives the input as:
Enter a and b values : 14 6
then the program should print the result as:
Addition of a and b : 20
Substraction of a and b : 8
Multiplication of a and b : 84
Remainder of a and b : 2
Division of a and b : 2
Logical AND result : 1
Logical OR and NOT result : 1
Bitwise AND : 6
Bitwise OR : 14
Bitwise NOT : 0
Bitwise complement : -15
Bitwise XOR : 8
Bitwise shift right : 3
Bitwise shift left : 48
Integer size : 4, Floating point size : 4
Conditional expression : 200
Preincrement : 15
Postincrement : 6
Predecrement : 14
Postdecrement : 7
*/
#include <stdio.h>
void main() {
	int a, b, result, result2,r=200;
	printf("Enter a and b values : ");
	scanf("%d %d", &a, &b);
	printf("Addition of a and b : %d\n",a+b ); // Addition of a and b
	printf("Substraction of a and b : %d\n", a-b); // Subtract b from a
	printf("Multiplication of a and b : %d\n",a*b ); // Multiply a and b
	printf("Remainder of a and b : %d\n",a%b ); // Numerator is a and denominator is b
	printf("Division of a and b : %d\n",a/b ); // Numerator is a and denominator is b
	result = (a>0)&&(b<=10); // The condition is a is greater than 0 and b is less than or equal to 10
	printf("Logical AND result : %d\n", result);
	result2 =(a==b)||(b!=0) ; // The condition is a is equal to (Comparision) b or b is not equal to 0
	printf("Logical OR and NOT result : %d\n",result2);
	printf("Bitwise AND : %d\n",a&b ); // Bitwise and of a and b
	printf("Bitwise OR : %d\n", a|b); // Bitwise or of a and b
	printf("Bitwise NOT : %d\n",!a ); // Logical not of a
	printf("Bitwise complement : %d\n",~a ); // Complement of a
	printf("Bitwise XOR : %d\n",a^b ); // Bitwise xor of a and b
	printf("Bitwise shift right : %d\n",a>>2 ); // Right shift a by 2 times
	printf("Bitwise shift left : %d\n", b<<3); // Left shift b by 3 times
	printf("Integer size : %d, Floating point size : %d\n",sizeof(int ),sizeof(float ) ); // Sizes of int and float
	printf("Conditional expression : %d\n",r ); // if (a - b) is greater than 50 then it is 100, otherwise 200
	printf("Preincrement : %d\n",++a ); // Pre increment a
	printf("Postincrement : %d\n",b++); // Post increment b
	printf("Predecrement : %d\n", --a); // Pre decrement a
	printf("Postdecrement : %d\n", b--); // Post decrement b
}
