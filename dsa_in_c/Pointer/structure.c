#include<stdio.h>
#include<string.h>

struct Student
{
	int rno;
	char name[10];
	float per;
};

int main()
{
	struct Student S;

	S.rno=101;
	strcpy(S.name,"Kaushal");
	S.per=75;

	printf("%d %s %.2f\n",S.rno,S.name,S.per);

	return 0;
}