#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

typedef struct node{
	int data;
	struct node * next;
}Node, *NodePtr;

typedef struct{
	NodePtr head;
	NodePtr tail;
}Queue;


void initQ(Queue *q){
	
	q->head = NULL;
	q->tail = NULL;
	
}


bool EQ(Queue *q, int nd){
	
	Node *NewNode = malloc(sizeof(Node));
	
	//set data to nd
	
	NewNode->data = nd;
	
	//newnode next = Null
	
	NewNode->next = NULL;
		
	//check if theres a tail
	
	if(q->tail != NULL){
		q->tail->next = NewNode;
	}
	
	q->tail = NewNode;
	
	//q->tail->next = newnode
	//then q->tail = newnode
	
	//check if head is null
	
	if(q->head == NULL){
		q->head = NewNode;
	}
	//q->head = newnode
	
	return true;

	
}

bool isEmpty(Queue *q){
	

	if(q->head == NULL && q->tail == NULL){
		
		return true;
		
	}else{
		return false;
	}

	
}

bool DQ(Queue *q){
	
	NodePtr temp;
	
	if(!isEmpty(q))	{
		
		temp = q->head;
		q->head = q->head->next;
	
		free(temp);
		
		if(q->head == NULL){
			q->tail = NULL;
		}
		
	}
	
	return true;
}

int front(Queue *q){
	
//	int val;
//	val = q.head.data;
//	
//	return val;
	
	return q->head->data;
}

int rear(Queue *q){
	
	return q->tail->data;
}



void printQueue(Queue *q) {
	
    NodePtr current = q->head;
    
    while (current!= NULL) {
    	
        printf("%d ", current->data);
        current = current->next;
    }
    
    printf("\n");
}





void initQ(Queue *q);
bool EQ(Queue *q, int nd);
void printQueue(Queue *q);
bool isEmpty(Queue *q);
bool DQ(Queue *q);


int main() {
	
	Queue q;
	
	initQ(&q);
	
	printf("EQ\n");
	EQ(&q,20);
	EQ(&q,21);
	EQ(&q,22);
	EQ(&q,23);
	
	printQueue(&q);
	
	printf("\nDQ\n");
	DQ(&q);
	printQueue(&q);
	
	printf("\nFront\n");
	int val;
	val = front(&q);
	printf("%d\n", val);
	
	printf("\nRear");
	printf("\n%d", rear(&q));
	
	
	return 0;
}
