#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *A;
	int n;
	int i;

	printf("How many no. you want to store : ");
	scanf("%d",&n);

	if(n<=0)
	{
	printf("INVALID INPUT!!!");
	}

	A = (int *) malloc(n * sizeof(int));

	if(A == NULL)
	{
	printf("NOT ENOUGH MEMORY!!!");
	exit(0);
	}

	for(i=0;i<n;i++)
	{
		printf("Enter no : ");
		scanf("%d",&A[i]);
	}

	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}

	free(A);

	return 0;
}