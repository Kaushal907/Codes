#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*) malloc( sizeof (struct node))

struct node
{
	int data;
	struct node *next;
};

struct node *create(int n)
{
	int i;
	struct node *f,*l,*t;

	f=NEWNODE;
	printf("Enter Data : ");
	scanf("%d",&f->data);
	f->next=NULL;
	l=f;

	for(i=2;i<=n;i++)
	{
		t=NEWNODE;
		printf("Enter Data : ");
		scanf("%d",&t->data);
		l->next=t;
		l=l->next;
		l->next=NULL;
	}
		return f;
}

void display(struct node *f)
{
	struct node *t;

	for(t=f;t!=NULL;t=t->next)
	{
		printf("%d ",t->data);
	}
	printf("\n");
}

int searchLL(struct node *f,int key)
{
	int pos=1;
	struct node *t;

	if(f==NULL)
	{
		return -1;
	}

	for(t=f;t!=NULL;t=t->next,pos++)
	{
		if(t->data==key)
		{
			return pos;
		}
	}
	return -1;
}


struct node *eraseall(struct node *f)
{
	struct node *t;

	while(f!=NULL)
	{
		t=f;
		f=f->next;
		free(t);
	}
	return f;
}

int main()
{
	struct node *head = NULL;
	int n,key,pos;

	printf("How many Nodes : ");
	scanf("%d",&n);

	head = create(n);

	printf("Linkedlist : ");
	display(head);

    printf("Enter key to search: ");
    scanf("%d", &key);

	pos = searchLL(head,key);

	if (pos == -1)
		printf("Element Not Found \n");
	else
		printf("%d Found at Position %d \n",key,pos);

	head = eraseall(head);

	return 0;
}