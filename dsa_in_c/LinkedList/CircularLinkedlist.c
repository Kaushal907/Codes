#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*) malloc(sizeof(struct node))

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

/*
void display(struct node *f)
{
	struct node *t;

	t=f;
	do{
		printf("%d ",t->data);
		t=t->next;
	}while(t!=f);
}
*/

void display(struct node *f)
{
	struct node *t = f;
	while (t != NULL)
	{
		printf("%d ", t->data);
		t = t->next;
	}
	printf("\n",);
}
	


struct node *eraseall(struct node *f)
{
	struct node *t;
	t=f;
	f=f->next;
	t->next=NULL;
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
	struct node *head=NULL;
	int n;

	printf("How many Nodes : ");
	scanf("%d",&n);

	head = create(n);

	printf("LinkedList : ");
	display(head);

	head = eraseall(head);

	return 0;
}