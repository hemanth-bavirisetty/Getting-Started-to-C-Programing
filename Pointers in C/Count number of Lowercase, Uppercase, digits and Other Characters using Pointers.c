/*
Write a C program to find number of lowercase, uppercase, digits and other characters using pointers.

Sample Input and Output:
Enter a string : Indo Pak 125 143 *.$
Number of uppercase letters = 2
Number of lowercase letters = 5
Number of digits = 6
Number of other characters = 7
*/
#include <stdio.h>
void countCharDigitOthers(char str[80], int *X, int *Y, int *Z, int *W);
void main() {
	char str[80];
	int upperCount = 0, lowerCount = 0, digitCount = 0, otherCount = 0;
	printf("Enter a string : ");
	gets(str);
	countCharDigitOthers(str, &upperCount, &lowerCount, &digitCount, &otherCount);
	printf("Number of uppercase letters = %d\n", upperCount);
	printf("Number of lowercase letters = %d\n", lowerCount);  
	printf("Number of digits = %d\n", digitCount);
	printf("Number of other characters = %d\n", otherCount);
}
void countCharDigitOthers(char str[80], int *X, int *Y, int *Z, int *W)
{
	for( int i=0; str[i]!='\0';i++)
	{
		if     (str[i]>='A' && str[i]<='Z')
		{
			*X=*X+1;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			*Y=*Y+1;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			*Z=*Z+1;
		}
		else
		{
			*W=*W+1;
		}
	}
}
