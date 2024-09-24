#include <stdio.h>

void accept(int a[],int n)
{
	int i;

	for(i=0;i<n;i++)
	{
		printf("Enter %d num : ",i+1);
		scanf("%d",&a[i]);
	}
}

void display(int a[],int n)
{
	int i;

	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

void selection_sort(int a[],int n)
{
	int i,j,t;

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}


int main()	{
	
	int a[100];
	int n;

	printf("Enter How many no want to sort : ");
	scanf("%d",&n);

	accept(a,n);

	selection_sort(a,n);

	display(a,n);

	return 0;
}