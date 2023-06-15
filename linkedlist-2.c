#include <stdio.h>
#include <stdlib.h>


struct node {
	int data;
	struct node *link;
};

int  main(void)
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 500;
	head->link = NULL;

	struct node *current = malloc(sizeof(struct node));
	current->data = 490;
	current->link = NULL;
	head->link = current;

	struct node *third = malloc(sizeof(struct node));
	third->data = 1200;
	third->link = NULL;
	head->link->link = third;

	printf("%d\n%d\n%d\n", head->data, current->data, third->data);
	return 0;
}
