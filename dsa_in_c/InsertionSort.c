#include <stdio.h>
#include <stdlib.h>
void accept(int *a, int n)
{
    printf("jj");
    int i;
    for(i=0; i<n; i++)
    {
        printf("Enter %d num : ",i+1);
        scanf("%d",&a[i]);
    }
}

void display(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}

void inserting_sort(int *a,int n)
{
    int i,j,t;
    
    for(i=1;i<n;i++)
    {
        t=a[i];
            for(j=j-1;j>=0;j--)
            {
                if(a[j]>t)
                {
                    a[j+1]=a[j];
                }
                else
                    break;
            }
            a[j+1]=t;
    }
}

int main() {

    
    int n=0;
    
    printf("Enter how many no. you want to sort : ");
    scanf("%d",&n);

    int *a = (int *) malloc(n * sizeof(int));
    if(a==NULL)
    {
        printf("Error While Making Array ");
        return -1;
    }

    accept(a,n);

    

    inserting_sort(a,n);
    display(a,n);
    
    return 0;
}