// 210516667 Parth Bansal CSE 40
//  Menu driven program of doubly linked list
#include <stdio.h>
#include <stdlib.h>

struct node_6_3
{
	int info;
	struct node_6_3 *prev;
	struct node_6_3 *next;
};
struct node_6_3 *head_6_3 = NULL;

// Creation
void create_a6_3(int n)
{
	struct node_6_3 *N, *M;
	int i = 0;
	while (i < n)
	{
		if (head_6_3 == NULL)
		{
			N = (struct node_6_3 *)malloc(sizeof(struct node_6_3));
			printf("Enter the info of 1st Node: ");
			scanf("%d", &N->info);
			N->next = NULL;
			head_6_3 = N;
		}
		else
		{
			printf("Enter info of %d node: ", i + 1);
			M = (struct node_6_3 *)malloc(sizeof(struct node_6_3));
			scanf("%d", &M->info);
			N->next = M;
			M->prev = N;
			M->next = NULL;
			N = M;
		}
		i++;
	}
}

// Traversal (Menu 1)
void display_a6_3()
{

	struct node_6_3 *temp;
	printf("\nThe Linked List is ");
	for (temp = head_6_3; temp != NULL; temp = temp->next)
		printf("%d ", temp->info);
	printf("\n");
}

// Menu 2 Check if List is Empty
void empty_a6_3()
{
	if (head_6_3 == NULL)
		printf("List is Empty.");
	else
		printf("List is not Empty.");
}

// Menu 3 Insertion
void inser_a6_3()
{
	int ch;
	struct node_6_3 *newn = (struct node_6_3 *)malloc(sizeof(struct node_6_3));
	struct node_6_3 *temp = (struct node_6_3 *)malloc(sizeof(struct node_6_3));

	printf("\nMenu\n1: Insertion at Beginning.\n2: Insertion at end.\n3: Insertion at any position.\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	// Input
	printf("Enter value: ");
	scanf("%d", &newn->info);
	switch (ch)
	{
	case 1: // Beginning
		if (head_6_3 == NULL)
		{
			head_6_3 = newn;
			newn->next = NULL;
			newn->prev = NULL;
		}
		else
		{
			newn->prev = NULL;
			newn->next = head_6_3;
			head_6_3->prev = newn;
			head_6_3 = newn;
		}
		break;

	case 2: // End
		if (head_6_3 == NULL)
		{
			head_6_3 = newn;
			newn->next = NULL;
		}
		else
		{
			for (temp = head_6_3; temp->next != NULL; temp = temp->next)
				;
			temp->next = newn;
			newn->prev = temp;
			newn->next = NULL;
		}
		break;

	case 3: // Any Position
		printf("Enter Position: ");
		int pos;
		scanf("%d", &pos);
		if (head_6_3 == NULL)
		{
			head_6_3 = newn;
			newn->prev = NULL;
			newn->next = NULL;
		}
		else
		{
			int i;
			for (i = 0, temp = head_6_3; i <= pos - 1; temp = temp->next, i++)
				;
			newn->next = temp->next;
			newn->prev = temp;
			temp->next = newn;
			temp->next->prev = newn;
		}
		break;
	}
	display_a6_3();
}

// Menu 4 Delete node
void delete_a6_3()
{
	struct node_6_3 *temp = (struct node_6_3 *)malloc(sizeof(struct node_6_3));
	printf("\nMenu\n1: Delete at Beginning.\n2: Delete at End.\n3: Delete at any position.\n");
	printf("Enter your choice: ");
	int ch;
	scanf("%d", &ch);

	switch (ch)
	{
	case 1: // Beginning
		if (head_6_3 == NULL)
		{
			printf("List is Empty, Deletion not possible");
		}
		else
		{
			temp = head_6_3;
			head_6_3->next->prev = NULL;
			head_6_3 = head_6_3->next;
			free(temp);
		}
		break;

	case 2: // End
		if (head_6_3 == NULL)
		{
			printf("List is Empty, Deletion not possible");
		}
		else if (head_6_3->next == NULL)
		{
			free(head_6_3);
			head_6_3 = NULL;
		}
		else
		{
			for (temp = head_6_3; temp->next->next != NULL; temp = temp->next)
				;
			free(temp->next);
			temp->next = NULL;
		}
		break;

	case 3: // Any Position
		printf("Enter Position: ");
		int pos;
		scanf("%d", &pos);
		if (head_6_3 == NULL)
		{
			printf("List is Empty, Deletion not possible");
		}
		else if (head_6_3->next == NULL)
		{
			free(head_6_3);
			head_6_3 = NULL;
		}
		else
		{
			int i;
			for (i = 0, temp = head_6_3; i <= pos - 1; temp = temp->next, i++)
				;
			struct node_6_3 *ptr;
			ptr = temp->next;
			temp->next->next->prev = temp->prev;
			temp = temp->next->next;
			free(ptr);
		}
		break;
	}
	display_a6_3();
}

// Menu 5 Delete node for a given key
void del_key_a6()
{
	printf("Enter Key: ");
	int key;
	scanf("%d", &key);
	struct node_6_3 *temp;
	temp = head_6_3;
	if (temp->info == key)
	{
		struct node_6_3 *ptr;
		ptr = temp->next;
		head_6_3 = ptr;
		ptr->prev = NULL;
		free(temp);
		display_a6_3();
	}
	else
	{
		int flag = 1;
		for (; temp != NULL; temp = temp->next)
			if (temp->next->info == key)
			{
				flag = 0;
				break;
			}
		if (flag == 0)
		{
			struct node_6_3 *p1;
			p1 = temp->next;
			temp->next = temp->next->next;
			temp->next->prev = temp->prev;
			free(p1);
			printf("Key Found.\n");
			display_a6_3();
		}
		else
			printf("Key not found.");
	}
}

// Menu 6 Count no of nodes
void count_a6_3()
{
	struct node_6_3 *temp = (struct node_6_3 *)malloc(sizeof(struct node_6_3));
	int c = 0;
	for (temp = head_6_3; temp != NULL; temp = temp->next)
		c++;
	printf("No of nodes is %d", c);
}

// Menu 7 Search for an element
void search_a6_3()
{
	printf("Enter no to search: ");
	int key, pos = 0;
	scanf("%d", &key);
	struct node_6_3 *temp = (struct node_6_3 *)malloc(sizeof(struct node_6_3));
	for (temp = head_6_3; temp != NULL; temp = temp->next, pos++)
		if (temp->info == key)
		{
			printf("Element found.");
			return;
		}
	printf("Element not found.");
}

int main_6_3()
{
	int n;
	printf("Enter no of nodes you want to create: ");
	scanf("%d", &n);

	create_a6_3(n);

	while (1)
	{
		printf("\n\nMenu\n1: Traversal\n2: Check if list is empty.\n3: Insertion.\n4: Deletion at a position.\n");
		printf("5: Deletion for a key.\n6: Count no of nodes.\n7: Search for an element.\n8: Exit\n");
		printf("Enter your choice: ");
		int ch;

		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			display_a6_3();
			break;

		case 2:
			empty_a6_3();
			break;

		case 3:
			inser_a6_3();
			break;

		case 4:
			delete_a6_3();
			break;

		case 5:
			del_key_a6();
			break;

		case 6:
			count_a6_3();
			break;

		case 7:
			search_a6_3();
			break;

		case 8:
			goto level;
			break;

		default:
			printf("Enter a valid value.");
			break;
		}
	}
	level:
	printf("\nYou have Exited Successfully.\n");
	return 0;
}