#include<stdio.h>

int main()
{
	int year;
	int date;
	int month;
	int age;
	int m;
	int curr_date;
	int curr_month;
	int curr_year;

	printf("Enter Bday Day|Month|Year: ");
	scanf("%d %d %d",&date,&month,&year);

	printf("Enter Current Date : ");
	scanf("%d %d %d",&curr_date,&curr_month,&curr_year);

	age = 2024 - year ;
	m =curr_month - month ;

	printf("Age : %d year %d month",age,m);


	return 0;
}