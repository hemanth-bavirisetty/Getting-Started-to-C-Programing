/*
Write a C program to find out the total and average marks gained by the students in a section using array of structures.

Note: Consider that regdno, marks of 3 subjects, total and average are the members of a structure and make sure to provide the int value for number of students which are lessthan 60

Sample Input and Output:
Enter number of students : 3
Enter regdno, three subjects marks of student-0: 101 56 78 76
Enter regdno, three subjects marks of student-1: 201 76 89 91
Enter regdno, three subjects marks of student-2: 301 46 57 61
Student-0 Regdno = 101	Total marks = 210	Average marks = 70.000000
Student-1 Regdno = 201	Total marks = 256	Average marks = 85.333336
Student-2 Regdno = 301	Total marks = 164	Average marks = 54.666668
*/
#include <stdio.h>
struct student {
	// Write the members of structure
	int regdno,total,subj[3];
	float avg;
}s;
void main() {
	struct student s[60];
	int i, n;
	printf("Enter number of students : ");
	scanf("%d",&n);
	for (i=0;i<n;i++) { // Complete the code in for
		printf("Enter regdno, three subjects marks of student-%d: ", i);
		scanf("%d%d%d%d",&s[i].regdno,&s[i].subj[0],&s[i].subj[1],&s[i].subj[2]);
	}
	for (i=0;i<n;i++) { // Complete the code in for
		// Find Total and Average
		s[i].total=s[i].total+s[i].subj[0]+s[i].subj[1]+s[i].subj[2] ;
		s[i].avg=(float)s[i].total/3;
		printf("Student-%d Regdno = %d\tTotal marks = %d\tAverage marks = %f\n",i,s[i].regdno,s[i].total,s[i].avg ); // Fill the code in printf()
	}
}
