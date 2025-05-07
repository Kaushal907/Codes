#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *P, *Q, *R, *S;

	P = (struct node*)malloc(sizeof(struct node));
	Q = (struct node*)malloc(sizeof(struct node));
	R = (struct node*)malloc(sizeof(struct node));
	S = (struct node*)malloc(sizeof(struct node));

	P->data = 11;
	Q->data = 22;
	R->data = 33;
	S->data = 44;

	P->next = Q;
	P->next->next = R;
	P->next->next->next = S;
	S->next = NULL;


	printf("%d %d %d %d",P->data,Q->data,R->data,S->data);

}