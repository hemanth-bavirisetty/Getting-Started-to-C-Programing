/*
Write a C program to read and display different data type values and pront the output as shown in the tese cases.

Note-1: The format specifier for short int is %hd and long int is %ld.

Note-2: The format specifier for double is %lf and long double is %Lf.

Note-3: Space before %c removes any white space (blanks, tabs, or newlines).
        It means %c without space will read white space like new line(\n), spaces(‘ ‘) or tabs(\t). 
        By adding space before %c, we are skipping this and reading only the char given.

Expected Output:
Enter·int,·short·int·and·long·int·values·:·32456 456 56789123
Enter·float,·double·and·long·double·values·:·33.46572 234.56789 24156.78923
Enter·a·character·:·S
int·:·32456
short·int·:·456
long·int·:·56789123
float·:·33.465721
double·:·234.567890
long·double·:·24156.789230
character·:·S
*/
#include<stdio.h>
void main()
{
	int a;
	short int b;
	long int c;
	float d;
	double e;
	long double f;
	char g;
	printf("Enter int, short int and long int values : ",a,(short int)b,(long int)c);
	scanf("%d",&a);
	scanf("%hd",&b);
	scanf("%ld",&c);
	printf("Enter float, double and long double values : ",(float)d,(double)e,(long double)f);
	scanf("%f",&d);
	scanf("%lf",&e);
	scanf("%Lf",&f);
	printf("Enter a character : ",g);
	scanf(" %c",&g);
	printf("int : %d\n",a);
	printf("short int : %hd\n",b);
	printf("long int : %ld\n",c);
	printf("float : %f\n",d);
	printf("double : %lf\n",e);
	printf("long double : %Lf\n",f);
	printf("character : %c\n",g);
}
