#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*) malloc( sizeof(struct node))

struct node
{
	int data;
	struct node *next;
};

struct node * create(int n)
{
	int i;
	struct node *f,*l,*t;

	f=NEWNODE;
	printf("Enter the Data : ");
	scanf("%d",&f->data);
	f->next=NULL;
	l=f;

	for(i=2;i<=n;i++)
	{
		t=NEWNODE;
		printf("Enter the Data : ");
		scanf("%d",&t->data);
		l->next = t;
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
}

int main()
{
	struct node *head = NULL;
	int n;

	printf("How many nodes :");
	scanf("%d",&n);

	head = create(n);

	printf("Linkedlist : ");
	display(head);

	return 0;
}