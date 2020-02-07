#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;

void insertNode(Node *head, int data);
void printNode(Node *head, int data);
void printList(Node *head);

int main(int argc, char *argv[]){

	Node *head = malloc(sizeof(Node));
	head->data = 55;
	insertNode(head, 22);
	printf("The data at current is: %d\n",head->data);
	insertNode(head, 56);
	printf("The data at current is: %d\n",head->data);
	insertNode(head, 72);
	printf("The data at current is: %d\n",head->data);
	printList(head);
	//printf("Head's data value is: %d\n",*head);
	//printf("Head's data value is: %d\n",head->data);
	
}

//insertNode - inserts a new node to the beginning of the linked list
void insertNode(Node *head, int data){	
	if (head->next == NULL){	// if no nodes are in the list, add to the beginning
		Node *newNode = (Node *)malloc(sizeof(Node));
		head->next = newNode;
		head->next->data = data;
	}
	else{	//there exist nodes in the list
		Node *newNode = (Node *)malloc(sizeof(Node));
		newNode->next = head->next;
		head->next = newNode;
		head->next->data = data;
	}
}

void printNode(Node *head, int data){
	int found = 0;
	Node *current = head;
	for(int i = 0; i < 2; i++){
		if (current->data == data){
			printf("The value is: %d\n",current->data);
		}
	}		
}

void printList(Node *head){
	Node *current = head;
	printf("head->");
	while(current->next != NULL){
		printf("[%d]->",current->data);
		current->next = current->next->next;
	}
	printf("Every node has been printed.\n");
}

/*Functions:
 * Add_at_end(insert at the end)
 * Delete_node
 * Insert_node
 * Search(data)
 * print_node
 * print_list
 * delete_list
 */
