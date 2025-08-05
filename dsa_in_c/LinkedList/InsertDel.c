#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*) malloc(sizeof (struct node))

struct node
{
	int data;
	struct node *next;	
};

struct node *create(int n)
{
	struct node *f,*l,*t;
	int i;

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

struct node *addLast(struct node *f)
{
	struct node *t,*l;

	t=NEWNODE;
	printf("Enter Data : ");
	scanf("%d",&t->data);
	l=f;

	while(l->next!=NULL)
	{
		l=l->next;
	}
	l->next=t;
	return f;
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

struct node *insert(struct node *f,int pos)
{
	struct node *t,*s;
	int i;

	t = NEWNODE;
	printf("Enter Data : ");
	scanf("%d",&t->data);
	t->next=NULL;

	if(pos==1)
	{
		t->next=f;
		f=t;
		printf("Data is Inserted Successfully !!\n");
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
		s->next=t;
		printf("Data is Inserted Successfully !!\n");
		return f;
	}
}

struct node *delete(struct node *f,int pos)
{
	struct node *t,*s;
	int i;

	if(pos==1)
	{
		t=f;
		f=f->next;
		free(t);
		printf("Data is Deleted Successfully !!\n");
		return f;
	}
	else
	{
		s=f;
		for(i=1;i<=pos-2 && s!=NULL;i++)
		{
			s=s->next;
		}
		if(s==NULL || s->next==NULL)
		{
			printf("\nError : INVALID POSITION\n");
			return f;
		}

		t = s->next;
		s->next=t->next;
		free(t);

		printf("Data is Deleted Successfully !!\n");
		return f;
	}
}

int main()
{
	struct node *head = NULL;
	int n,choice,pos;

	printf("How many Nodes : ");
	scanf("%d",&n);

	if(n<=0)
	{
		printf("Take Valid Nodes !!");
		exit(0);
	}

	head = create(n);

	while(1)
	{
		printf("\nMenu\n1.Display Linked List\n2.Insert Node into Linked List\n3.Delete Node from Linked List\n4.Add Last Node in Linked List\n5.Del Last Node in Linked List\n6.Exit\n");

		printf("What is your Choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:	printf("\nLinked List = ");
					display(head);
					break;

			case 2:	printf("Enter Position to Insert Node : ");
					scanf("%d",&pos);
					head=insert(head,pos);
					break;

			case 3:	printf("Enter Position to Delete Node : ");
					scanf("%d",&pos);
					head=delete(head,pos);
					break;

			case 4: head=addLast(head);
					break;

			case 5: head=delLast(head);
					break;

			case 6:	head = eraseall(head);
					exit(0);

			default:	printf("Select Valid Option !!");
		}
	}

	return 0;
}