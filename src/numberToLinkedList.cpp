/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};


struct node * numberToLinkedList(int N)
{
	struct node *head;
	struct node *temp;
	if (N < 0)
		N = -N;
	head = (struct node*)malloc(sizeof(struct node));
	head->num = N % 10;
	head->next = NULL;
	N /= 10;
	while (N)
	{
		temp = (struct node*)malloc(sizeof(struct node));
		temp->num = N % 10;
		temp->next = head;
		head = temp;
		N /= 10;
	}
	return head;
}