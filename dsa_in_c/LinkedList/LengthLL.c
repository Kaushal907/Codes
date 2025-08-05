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
	printf("\n");
}

int LengthLL(struct node *f)
{
	int cnt;
	struct node *t;

	cnt=0;

	for(t=f;t!=NULL;t=t->next)
	{
		cnt++;
	}
	return cnt;
}

struct node * eraseall(struct node *f)
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
	int n,cnt;

	printf("How many nodes :");
	scanf("%d",&n);

	head = create(n);

	printf("Linkedlist : ");
	display(head);

	cnt = LengthLL(head);
	printf("Length %d \n",cnt);
	
	head = eraseall(head);

	return 0;
}