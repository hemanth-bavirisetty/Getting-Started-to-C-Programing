/*****************************************************************************************************************
Write a program to check whether the given two strings are equal or not without using string library functions.

At the time of execution, the program should print the message on the console as:
string1 : 
For example, if the user gives the input as:
string1 : Kaveri
Next, the program should print the message on the console as:
string2 : 
For example, if the user gives the input as:
string2 : Kaveri
then the program should print the result as:
equal
In the same way if the input is given as "Kaveri" and "kaveri", then the result will be "not equal".
*******************************************************************************************************************/
#include <string.h>
#include <stdio.h>
void main()
{
	char a[100],b[100];
	printf("string1 : ");
	scanf("%s",a);
	printf("string2 : ");
	scanf("%s",b);
	if(strcmp(a,b)==0){printf("equal\n");}
	else{printf("not equal\n");}
}
