#include<stdio.h>

void accept(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter Number:");
		scanf("%d",&a[i]);
	}
}

void display(int a[];int n)
{
	int i;

	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}

void bubble_sort(int a[],int n)
{
	int i,j,t;
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				t = a[i];
				a[i] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}

void linearsearch(int a[],int n,int key)
{
	int i;

	for(i=0;i<n;i++)
	{
		if(a[i]>key)
		{
			return i;
		}
	}

	return -1;
}

int main()
{
	int a[100],n,key,pos;

	printf("How Many Number you Want to sort : ");
	scanf("%d",&n);

	accept(a,n);
	bubble_sort(a,n);
	display(a,n);

	printf("Enter number You want to search : ");
	scanf("%d",&key);

	pos = linearsearch(a,n,key);

	if(pos==-1)
	{
		printf("Your data %d not found!!!\n",key);
	}
	else
	{
		printf("Your data %d is found at %d position!!!\n",key,pos);
	}

	return 0;
}