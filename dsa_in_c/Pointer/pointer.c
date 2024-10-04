#include<stdio.h>

struct Student
{
	int rno;
	char name[10];
	int  per;
};


int main()
{
	struct Student S = {17,"Kaushal",70};

	printf("%d %c %.2f\n",S.rno,S.name,S.per);

	return 0;
}