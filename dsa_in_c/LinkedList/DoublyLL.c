#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*) malloc( sizeof (struct node))

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *create(int n)
{
	struct node *f,*l,*t;
	int i;

	f=NEWNODE;
	printf("Enter Data : ");
	scanf("%d",&f->data);
	f->next=NULL;
	f->prev=NULL;
	l=f;

	for(i=2;i<=n;i++)
	{
		t=NEWNODE;
		printf("Enter Data : ");
		scanf("%d",&t->data);
		l->next=t;
		t->prev=l;
		l=l->next;
	}
	l->next=NULL;
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

struct node * insert(struct node *f, int pos)
{
	int i;
	struct node *t,*s;

	t=NEWNODE;
	printf("Enter Data : ");
	scanf("%d",&t->data);
	t->next=NULL;
	t->prev=NULL;

	if(pos==1)
	{
		t->next=f;
		f->prev=t;
		f=t;
		return f;
	}

	else
	{
		s=f;
		for(i=1;i<=pos-2 && s!=NULL;i++)
		{
			s=s->next;
		}
		if(s==NULL)
		{
			printf("\nError : INVALID POSITION\n");
			free(t);
			return f;
		}

		t->next=s->next;
		if(s->next!=NULL)
		{
			s->next->prev=t;
		}
		s->next=t;
		t->prev=s;
		printf("Data is Inserted Successfully !!\n");
		return f;
	}

}

struct node * delete(struct node * f,int pos)
{
	int i;
	struct node *s,*t;

	if(pos==1)
	{
		t=f;
		f=f->next;
		free(t);
		f->prev=NULL;
		return f;
	}
	else
	{
		s=f;
		for(i=1;i<=pos-2 && s!=NULL;i++)
		{
			s=s->next;
		}
		if(s==NULL)
		{
			printf("Invalid Position : ");
			free(t);
			return f;
		}
		else
		{
			t=s->next;
			s->next = t->next;
			if(t->next!=NULL)
			{
				t->next->prev=s;
			}
			free(t);
			printf("Data is Deleted Successfully !!");
			return f;
		}

	}
}

int main()
{
	struct node *head=NULL;
	int n,pos;

	printf("How many Nodes : ");
	scanf("%d",&n);

	head = create(n);

	display(head);

	printf("Enter Position to add new Node : ");
	scanf("%d",&pos);
	head=insert(head,pos);

	display(head);

	printf("Enter Position to Delete Node : ");
	scanf("%d",&pos);
	head = delete(head,pos);

	display(head);

	eraseall(head);

	return 0;
}