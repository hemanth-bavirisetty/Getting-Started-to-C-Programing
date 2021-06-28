/*
Write a program to find the size of basic Data types using sizeof operator.

Write code to produce the following output:
The size of char data type = _
The size of int data type = _
The size of short int data type = _
The size of long int data type = _
The size of float data type = _
The size of double data type = _
The size of long double data type = _
*/
#include <stdio.h>
 void main()
 {
 	printf("The size of char data type = %ld\n",sizeof (char ));
 	printf("The size of int data type = %ld\n",sizeof (int ));
 	printf("The size of short int data type = %ld\n",sizeof (short int ));
 	printf("The size of long int data type = %ld\n",sizeof (long int ));
 	printf("The size of float data type = %ld\n",sizeof (float ));
 	printf("The size of double data type = %ld\n",sizeof ( double ));
 	printf("The size of long double data type = %ld\n",sizeof (long double ));
 	
 }
