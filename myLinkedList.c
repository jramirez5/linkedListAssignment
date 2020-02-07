#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;

void insertNode(Node *head, int data);
void printNode(Node *head, int data);
void printList(Node *head);
void deleteNode(Node *head, int data);

int main(int argc, char *argv[]){

	Node *head = (Node *)malloc(sizeof(Node));
	head->data = NULL;
	insertNode(head, 22);
	printf("The data at current is: %d\n",head->next->data);
	insertNode(head, 56);
	printf("The data at current is: %d\n",head->next->data);
	insertNode(head, 72);
	printf("The data at current is: %d\n",head->next->data);	
	printList(head);
	printf("The value of head->next is: %d\n",head->next);
	deleteNode(head, 22);
	printList(head);
	
}

//insertNode - inserts a new node to the beginning of the linked list
void insertNode(Node *head, int data){
	Node *current = head;	
	if (current->next == NULL){	// if no nodes are in the list, add to the beginning
		Node *newNode = (Node *)malloc(sizeof(Node));
		current->next = newNode;
		newNode->data = data;
	}
	else{	//there exist nodes in the list
		Node *newNode = (Node *)malloc(sizeof(Node));
		newNode->next = current->next;
		current->next = newNode;
		newNode->data = data;
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
		printf("[%d]->",current->next->data);
		current->next = current->next->next;
	}
	printf("Every node has been printed.\n");
}

void deleteNode(Node *head, int data){
	Node *current = head;
	printf("The address of head is: %d\n",head);
	if(current->next == NULL){
		printf("The list is empty. The value of head->next is:%d\n",current->next);
	}
	else{
		while(current->next != NULL){	//while there is a node in the list
			if(current->next->data == data){
				if(current->next->next == NULL){
					current->next = NULL;
					printf("Deleted the node at the end of the list.");
				}
				else{
					current->next = current->next->next;
					printf("Deleted a node in the middle of the list.");
				}
			}		
		}
	}
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
