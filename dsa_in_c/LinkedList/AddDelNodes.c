#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*) malloc(sizeof(struct node))

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

struct node *addFirst(struct node *f)
{
	struct node *t;

	t = NEWNODE;
	printf("Enter Data at 1st : ");
	scanf("%d",&t->data);

	t->next=f;
	f=t;

	return f;
}

struct node *delFirst(struct node *f)
{
	struct node *t;

	if(f==NULL)
	{
			return f;
	}
	else
	{
		t=f;
		f=f->next;
		free(t);
		return f;
	}
}

struct node *addLast(struct node *f)
{
	struct node *l,*t;

	t = NEWNODE;
	printf("Enter Data at Last : ");
	scanf("%d",&t->data);
	t->next=NULL;

	if(f==NULL)
	{
		return t;
	}
	else
	{
		for(l=f;l->next!=NULL;l=l->next);

			l->next=t;

		return f;
	}
}

struct node *delLast(struct node *f)
{
	struct node *l,*t;

	if(f==NULL)
	{
		return f;
	}
	else
	{
		for(l=f;l->next!=NULL;l=l->next)
		{
			t=l;
		}
		t->next=NULL;
		free(l);
		return f;
	}
}

int main()
{
	struct node *head=NULL;
	int n;

	printf("How many nodes : ");
	scanf("%d",&n);

	head = create(n);

	printf("Linkedlist : ");
	display(head);

	head=addFirst(head);
	printf("Linkedlist AddFirst : ");
	display(head);

	head=delFirst(head);
	printf("Linkedlist DelFirst : ");
	display(head);

	head=addLast(head);
	printf("Linkedlist AddLast : ");
	display(head);

	head=delLast(head);
	printf("Linkedlist DelFirst : ");
	display(head);

	head = eraseall(head);

	return 0;
}