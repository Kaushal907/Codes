#include<stdio.h>
#include<string.h>

struct Employee
{
	int id;
	char name[100];
	float salary;
};

int main()
{
	struct Employee E;
	struct Employee *P = &E;

	printf("Enter Id    : ");
	scanf("%d",&P->id);

	printf("Enter Name  : ");
	scanf("%s",&P->name);
	
	printf("Enter Salary: ");
	scanf("%f",&P->salary);

	printf("Data : %d %s %.2f\n",P->id,P->name,P->salary);

	return 0;
}