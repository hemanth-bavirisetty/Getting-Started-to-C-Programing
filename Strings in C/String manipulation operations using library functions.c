/*
Write a program to implement the string manipulation operations by using string library functions.

At the time of execution, the program should print the message on the console as:
Enter two strings : 
For example, if the user gives the input as:
Enter two strings : Ram Laxman
then the program should print the result as:
The length of Ram : 3
The copied string of Ram : Ram
Ram is greater than Laxman
The concatenated string : RamLaxman
*/
#include <stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100],c[100];
	int length,result;
	printf("Enter two strings : ");
	scanf("%s%s",a,b);
	length=strlen(a);
	printf("The length of %s : %d\n",a,length);
	printf("The copied string of %s : %s\n",a,strcpy(c,a));
	result= strcmp (a,b);
	if(result==0){ printf("Both strings are equal\n");}
	if(result<0){ printf("%s is less than %s\n",a,b);}
	if(result>0){ printf("%s is greater than %s\n",a,b);}
	printf("The concatenated string : %s\n",strcat(a,b));
}
