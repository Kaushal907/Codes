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

	printf("Enter the Rno : ");
	scanf("%d",&S.rno);

	printf("Enter the Name : ");
	scanf("%s",&S.name);

	printf("Enter the percentage : ");
	scanf("%f",&S.per);

	printf("Data : %d %s %.2f \n",S.rno,S.name,S.per);

	return 0;
}