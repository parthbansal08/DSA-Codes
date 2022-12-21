// 210516667 Parth Bansal
//  Menu driven program of linked list
#include <stdio.h>
#include <stdlib.h>

struct node_4_1{
	int info;
	struct node_4_1 *link;
};
struct node_4_1 *head_4_1 = NULL;

void create_a4_1(int n) {
	struct node_4_1 *N, *M;
	int i = 0;
	while (i < n) {
		if (head_4_1 == NULL) {
			N = (struct node_4_1 *)malloc(sizeof(struct node_4_1));
			printf("Enter the info of 1st Node: ");
			scanf("%d", &N->info);
			N->link = NULL;
			head_4_1 = N;
		} else {
			printf("Enter info of %d node: ", i + 1);
			M = (struct node_4_1 *)malloc(sizeof(struct node_4_1));
			scanf("%d", &M->info);
			N->link = M;
			M->link = NULL;
			N = M;
		}
		i++;
	}
}

// Traversal (Menu 1)
void display_a4_1() {
	struct node_4_1 *temp = (struct node_4_1 *)malloc(sizeof(struct node_4_1));
	printf("\nThe Linked List is ");
	for (temp = head_4_1; temp != NULL; temp = temp->link)
		printf("%d ", temp->info);
	printf("\n");
}

// Menu 2 Check if List is Empty
void empty_a4_1() {
	if (head_4_1 == NULL)
		printf("List is Empty.");
	else
		printf("List is not Empty.");
}

// Menu 3 Insertion
void inser_a4_1() {
	int ch;
	struct node_4_1 *newn = (struct node_4_1 *)malloc(sizeof(struct node_4_1));
	struct node_4_1 *temp = (struct node_4_1 *)malloc(sizeof(struct node_4_1));

	printf("\nMenu\n1: Insertion at Beginning.\n2: Insertion at end.\n3: Insertion at any position.\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	// Input
	printf("Enter value: ");
	scanf("%d", &newn->info);
	switch (ch) {
		case 1: // Beginning
			if (head_4_1 == NULL) {
				head_4_1 = newn;
				newn->link = NULL;
			} else {
				newn->link = head_4_1;
				head_4_1 = newn;
			}
			break;

		case 2: // End
			if (head_4_1 == NULL) {
				head_4_1 = newn;
				newn->link = NULL;
			} else {
				for (temp = head_4_1; temp->link != NULL; temp = temp->link)
					;
				temp->link = newn;
				newn->link = NULL;
			}
			break;

		case 3: // Any Position
			printf("Enter Position: ");
			int pos;
			scanf("%d", &pos);
			if (head_4_1 == NULL) {
				head_4_1 = newn;
				newn->link = NULL;
			} else {
				int i;
				for (i = 0, temp = head_4_1; i <= pos - 1; temp = temp->link, i++)
					;
				newn->link = temp->link;
				temp->link = newn;
			}
			break;
	}
	display_a4_1();
}

// Menu 4 Delete node
void delete_a4_1() {
	struct node_4_1 *temp = (struct node_4_1 *)malloc(sizeof(struct node_4_1));
	printf("\nMenu\n1: Delete at Beginning.\n2: Delete at End.\n3: Delete at any position.\n");
	printf("Enter your choice: ");
	int ch;
	scanf("%d", &ch);

	switch (ch) {
		case 1: // Beginning
			if (head_4_1 == NULL) {
				printf("List is Empty, Deletion not possible");
			} else {
				temp = head_4_1;
				head_4_1 = head_4_1->link;
				free(temp);
			}
			break;

		case 2: // End
			if (head_4_1 == NULL) {
				printf("List is Empty, Deletion not possible");
			} else if (head_4_1->link == NULL) {
				free(head_4_1);
				head_4_1 = NULL;
			} else {
				for (temp = head_4_1; temp->link->link != NULL; temp = temp->link)
					;
				free(temp->link);
				temp->link = NULL;
			}
			break;

		case 3: // Any Position
			printf("Enter Position: ");
			int pos;
			scanf("%d", &pos);
			if (head_4_1 == NULL) {
				printf("List is Empty, Deletion not possible");
			} else if (head_4_1->link == NULL) {
				free(head_4_1);
				head_4_1 = NULL;
			} else {
				int i;
				for (i = 0, temp = head_4_1; i <= pos - 1; temp = temp->link, i++)
					;
				struct node_4_1 *ptr;
				ptr = temp->link;
				temp = temp->link->link;
				free(ptr);
			}
			break;
	}
	display_a4_1();
}

// Menu 5 Delete node for a given key
void del_key_a4_1() {
	printf("Enter Key: ");
	int key;
	scanf("%d", &key);
	struct node_4_1 *temp;
	temp = head_4_1;
	if (temp->info == key) {
		struct node_4_1 *ptr;
		ptr = temp->link;
		head_4_1 = ptr;
		free(temp);
		display_a4_1();
	} else {
		int flag = 1;
		for (; temp != NULL; temp = temp->link)
			if (temp->link->info == key) {
				flag = 0;
				break;
			
			}
		if (flag == 0) {
			struct node_4_1 *p1;
			p1 = temp->link;
			temp->link = temp->link->link;
			free(p1);
			printf("Key Found.\n");
			display_a4_1();
		} else
			printf("Key not found.");
	}
}

// Menu 6 Count no of nodes
void count_a4_1() {
	struct node_4_1 *temp = (struct node_4_1 *)malloc(sizeof(struct node_4_1));
	int c = 0;
	for (temp = head_4_1; temp != NULL; temp = temp->link)
		c++;
	printf("No of nodes is %d", c);
}

// Menu 7 Search for an element
void search_a4_1() {
	printf("Enter no to search: ");
	int key, pos = 0;
	scanf("%d", &key);
	struct node_4_1 *temp = (struct node_4_1 *)malloc(sizeof(struct node_4_1));
	for (temp = head_4_1; temp != NULL; temp = temp->link, pos++)
		if (temp->info == key) {
			printf("Element found.");
			return;
		}
	printf("Element not found.");
}

int main_4_1() {
	int n;
	printf("Enter no of nodes you want to create: ");
	scanf("%d", &n);

	create_a4_1(n);

	printf("\n\nMenu\n1: Traversal\n2: Check if list is empty.\n3: Insertion.\n4: Deletion at a position.\n");
	printf("5: Deletion for a key.\n6: Count no of nodes.\n7: Search for an element.\n");
	printf("Enter your choice: ");
	int ch;

	scanf("%d", &ch);
	switch (ch) {
		case 1:
			display_a4_1();
			break;

		case 2:
			empty_a4_1();
			break;

		case 3:
			inser_a4_1();
			break;

		case 4:
			delete_a4_1();
			break;

		case 5:
			del_key_a4_1();
			break;

		case 6:
			count_a4_1();
			break;

		case 7:
			search_a4_1();
			break;

		default:
			printf("Enter a valid value.");
			break;
	}
	return 0;
}