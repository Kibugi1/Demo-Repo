#include <stdio.h>
#include <stdlib.h>

//  a structure contains a pointer to the structure of the same type//

struct node {
	int data;
	struct node *link;
};


int main(void)
{
	struct node *head = NULL;
	head = (struct node *)malloc(sizeof(struct node));

	head->data = 45;
	head->link = NULL;

	printf("%d\n", head->data);
	return 0;
}
