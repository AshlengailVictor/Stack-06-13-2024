#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 10

typedef struct{

	int data[MAX];
	int front;
	int rear;
	
}circularQ;

bool empty(circularQ CQ){
	
	if((CQ.rear + 1) % MAX == CQ.front) return true;
	return false;
	
}

bool full(circularQ CQ){
	
	if((CQ.rear + 2) % MAX == CQ.front) return true;
	return false;
	
}

void EQ(circularQ *CQ){
	
	if(full(*CQ)){
	
		printf("List is FULL\n");
	
	}else{
		while(!full(*CQ)){
			CQ->rear = (CQ->rear + 1) % MAX;
			printf("Enter num: ");
			scanf("%d", &CQ->data[CQ->rear]);
			}
			
		}
	
	
	
}

void DQ(circularQ *CQ){
	
	if(empty(*CQ)){
	
		printf("\nList is EMPTY\n");
	
	}else{
		while(!empty(*CQ)){
			CQ->front = (CQ->front + 1) % MAX;
			}
			
		}
	
	
}

void display(circularQ CQ){
	
	
		
	
}

void EQ(circularQ *CQ);
void display(circularQ CQ);
bool empty(circularQ CQ);
bool full(circularQ CQ);

int main() {
	
	circularQ CQ;
	
	CQ.front = 0;	
	CQ.rear = MAX - 1;
	
	EQ(&CQ);
	
	printf("\nEQ\n");
	display(CQ);
	
	DQ(&CQ);
	display(CQ);
	
	EQ(&CQ);
	
	printf("\nEQ\n");
	display(CQ);

	return 0;
}
