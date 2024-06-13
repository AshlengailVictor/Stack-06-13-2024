#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "StackArray.h"

//typedef struct {
//	int data[MAX];
//	int top;
//} StackArrayList;

StackArrayList createStack(){
	
	StackArrayList s;
	s.top = -1;
	
}

bool isEmpty(StackArrayList s){
	if(s.top == -1){
		return true;
	}else{
		return false;
	}
}

bool isFull(StackArrayList s){
	if(s.top == MAX){
		return true;
	}else{
		return false;
	}
	
}

bool stack_push(StackArrayList *s, int elem){
	
	if(!isFull()){
		s.top = s.top + 1;
		s.data[s.top] = elem;
		
	
		return true;		
	}else{
		return false;
	}
	

}

bool stack_pop(StackArrayList *s){
	
	if(!isEmpty()){
		s.top = s.top - 1;
	
		return true;		
	}else{
		return false;
	}
	
}

int stack_peek(StackArrayList s){
	
	return s.data[s.top];
	
}

void display(StackArrayList s){
	
	
}

void visualize(StackArrayList s){
	
}
