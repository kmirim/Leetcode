#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct ListNode{
	int val;
	struct ListNode *next;
};

struct ListNode *last_node(struct ListNode *head)
{
	ListNode *tmp;
	tmp = head;
	
	if(tmp)
	{
		while(tmp && tmp->next)
			tmp = tmp->next;
		return(tmp);
	}
}

struct ListNode *reverseList(struct ListNode *head)
{
	ListNode *tmp;
	ListNode *last_node;
	tmp = head;
	
	
	
}

int main (void)
{
	ListNode head;
	ListNode n1;
	ListNode n2;
	ListNode n3;
	ListNode n4;

	head->next = &n1;
	n1->next = &n2;
	n2->next = &n3;
	n3->next = &n4;
	n4->next = NULL;
	
}
