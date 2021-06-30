/*
Write a program to find out the total and average marks gained by a student by using functions and pointers with structures.

Note: Consider that regdno, marks of 3 subjects, total and average are the members of a structure.

At the time of execution, the program should print the message on the console as:
Enter regdno, three subjects marks : 
For example, if the user gives the input as:
Enter regdno, three subjects marks : 501 67 75 76
then the program should print the result as:
Student regdno = 501
Total marks = 218
Average marks = 72.666664
*/
struct student
{
	int regdno;
	int subject[3],total;
	float avg;
}s;
struct student *p=&s;
void read(struct student *p)
{
  printf("Enter regdno, three subjects marks : ");
  scanf("%d%d%d%d",&s.regdno,&s.subject[0],&s.subject[1],&s.subject[2]);
}
void compute(struct student *p)
{
  s.total = s.subject[0]+s.subject[1]+s.subject[2];
  s.avg = (float)s.total/3;
}
void display(struct student s)
{
	
	printf("Student regdno = %d\n",p->regdno);
	printf("Total marks = %d\n",p->total);
	printf("Average marks = %f\n",p->avg);
}
#include <stdio.h>
void read(struct student *p);
void compute(struct student *p);
void display(struct student s);
void main() {
	struct student s;
	read(&s);
	compute(&s);
	display(s);
}
