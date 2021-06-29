/*
Write a program to find the factorial of a given number using functions.

At the time of execution, the program should print the message on the console as:
Enter a number : 
For example, if the user gives the input as:
Enter a number : 5
then the program should print the result as:
*/
int factorial (int n)
{
	int fact=1,i;
	for(i=1;i<=n;i++){fact*=i;}
	return fact;
}
