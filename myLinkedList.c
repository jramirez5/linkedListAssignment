#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;

void insertNode(Node *ptrToHead, int data){
	Node *newNode = malloc(sizeof(Node));
	ptrToHead->next = newNode;
	ptrToHead->next->data = data;
};

int main(int argc, char *argv[]){

	Node *current;
	Node *head = malloc(sizeof(Node));
	head->data = NULL;
	insertNode(head, 69);
	printf("The data at current is: %d\n",head->next->data);

	//printf("Head's data value is: %d\n",*head);
	//printf("Head's data value is: %d\n",head->data);
	
}
/*Functions:
 * Add_at_end
 * Delete_node
 * Insert_node
 * Search(data)
 * print_node
 * print_list
 * delete_list
 */
