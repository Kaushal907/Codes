#include<stdio.h>

void accept(int a[],int n)
{
	int i;

	for(i=0;i<n;i++)
	{
	printf("Enter the Element : ");
	scanf("%d",&a[i]);
	}
}

void display(int a[],int n)
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
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}

int binary_search(int a[],int n,int key)
{
	int lb,ub,mid;
	lb=0;
	ub=n-1;

	while(lb<=ub)
	{
		mid = (lb + ub)/2;

		if(a[mid]==key)
		{
			return mid;
		}
		else if (key>a[mid])
		{
			lb = mid + 1;
		}
		else
		{
			ub = mid - 1;
		}	
	}
	return -1;
}

int main()
{
	int a[100],n,key,pos;

	printf("How many Element you want to sort : ");
	scanf("%d",&n);

	accept(a,n);

	bubble_sort(a,n);

	display(a,n);

	printf("Which number You want to search : ");
	scanf("%d",&key);

	pos = binary_search(a,n,key);

	if(pos==-1)
	{
		printf("Your data  %d is not found!!!");
	}
	else
	{
		printf("Your data %d is found at %d position!!!");
	}

	return 0;
}