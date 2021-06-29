/*************************************************************************************
Write a program to sort the names in alphabetical order.

At the time of execution, the program should print the message on the console as:
Enter n value : 
For example, if the user gives the input as:
Enter n value : 3
Next, the program should print the message on the console as:
Enter 3 strings : 
For example, if the user gives the input as:
Enter 3 strings : Yamuna Ganga Saraswathi
then the program should print the result as:
Before sorting : Yamuna Ganga Saraswathi 
After sorting : Ganga Saraswathi Yamuna
**************************************************************************************/
#include"stdio.h"
#include"string.h"
void main()
{
	int i,j,num;
	char str[100][100],c[100];
	printf("Enter n value : ");
	scanf("%d",&num);
	printf("Enter %d strings : ",num);
	
	for(i=0;i<num;i++)
	{
		scanf("%s",str[i]);
	}
	printf("Before sorting : ");
	for(i=0;i<num;i++)
	{
		printf("%s ",str[i]);
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(c,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],c);
			}
		}
	}
	printf("\nAfter sorting : ");
	for(i=0;i<num;i++)
	{
		printf("%s ",str[i]);
	}
	printf("\n");
}
