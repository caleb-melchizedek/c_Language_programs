#include "std.h"
#include "stdlib.h"
#define MAX 10;

int st[MAX], top= -1;
void push(int st[]);
int pop(int st[]);
int peek(int st[]);
int display(int st[]);



int main(){
	int val, option;
	do{
	printf("\n *MAIN MENU*");
	printf("\n 1. PUSH|");
	printf("\n 2. POP|");
	printf("\n 3. DISPLAY|");
	printf("\n 4. PEEK|");	
	printf("\n 5. EXIT|");
	printf("\n Enter your option");
	scanf("%d",&option));
	switch(option){
		case 1:
			printf("Enter numberto be pushed on stack: "); scanf("%d",&val);)
		break;
		case 2:
			printf("Enter numberto be pushed on stack: "); scanf("%d",&val);)
		break;
		case 3:
			printf("Enter numberto be pushed on stack: "); scanf("%d",&val);)
		break;
		case 4:
			display(st);)
		break;
	}
	}
	while(option !=5);
	
	return 0; 
}

void push (int st[],int val){
	if (top== Max-1){
		printf("\n  STACK OVERFLOW");
	}
	else{
		top++;
		st[top]=val;
	}
}

int pop( int st[]){
	int val;
	if (top == -1){
		printf("\n STACK UNDERFLOW");
		return -1;
	}
	else{
		val = st[top];
		top--;
		return val;
	}
}

int display(int st[]){
	int i;
	if(top== -1){
		printf("\n STACK IS EMPTY");
	}
	else{
		for(i=top; i>=0; i--){
			printf("\n %d", st[i]);
		}
			printf("\n");// added for fromating purposes
	}
}

int peek( int st[]){
	if (top== -1){
		printf("STACK IS EMPTY");
		return -1;
	}
	else{
		return(st[top]);
	}
}

