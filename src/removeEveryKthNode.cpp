/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K)
{
	if (K <= 1 || head == NULL)
	{
		return NULL;
	}
	struct node *temp;
	int factor = 1;
	temp = head;
	while (temp != NULL)
	{
		if ((factor + 1) % K == 0 && temp->next != NULL)
		{
			temp->next = temp->next->next;
			factor++;
		}
		temp = temp->next;
		factor++;
	}
	return head;
}