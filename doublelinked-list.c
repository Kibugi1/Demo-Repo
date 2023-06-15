#include <stdlib.h>
#include <stdio.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

int main(void)
{
	struct dlistint_s *head = malloc(sizeof(struct dlistint_s));
	head->prev = NULL;
	head->n = 40;
	head->next =  NULL;

	printf("%d\n", head->n);
	return 0;
}
