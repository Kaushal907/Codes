#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*) malloc(sizeof(struct node))
			
struct node
{
	int data;
	struct node *next;
};
	
int main()
{
	struct node *A,*B,*C;

	A = NEWNODE;
	B = NEWNODE;
	C = NEWNODE;

	A->data = 11;
	B->data = 22;
	C->data = 33;

	A->next = B;
	B->next = C;
	C->next = NULL;

	printf("%d %d %d\n",A->data,B->data,C->data);

	free(A);
	free(B);
	free(C);

	return 0;
}