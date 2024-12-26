#include<stdio.h>

struct BMI
{
	int age;
	char name[50];
	float height;
	float weight;
};

int main()
{
	struct BMI B;

	printf("Enter the Name : ");
	scanf("%s",&B.name);

	printf("Enter the Age : ");
	scanf("%d",&B.age);

	printf("Enter the Weight : ");
	scanf("%f",&B.weight);

	printf("Enter the Height : ");
	scanf("%f",&B.height);

	printf("\n Name:%s\n Age:%d\n Weight:%.2f\n Height:%.2f\n",B.name,B.age,B.weight,B.height);

	return 0;
}