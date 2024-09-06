#include<stdio.h>

void accept(int a[],int n)
{  
    int i;

    for(i=0;i<n;i++)
    {
        printf("Enter %d no : ",i+1);
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

int main()
{
    int a[50];
    int n;

    printf("How many Element you want to store : ");
    scanf("%d",&n);
    
    accept(a,n);
    bubble_sort(a,n);
    display(a,n);
    
    
    return 0;
}