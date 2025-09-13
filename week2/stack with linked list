#include<stdio.h>
#include<stdlib.h>
struct stack{
	int data;
	struct stack *next;
};
struct stack *top = NULL;
struct stack *push(struct stack *,int);
struct stack *display(struct stack *);
struct stack *pop(struct stack *);
int peek(struct stack *);

int main(){
	int val,option;
	do{
		printf("\n *****MAIN MENU *****");
		printf("\n 1.Push");
		printf("\n 2.Pop");
		printf("\n 3.Peek");
		printf("\n 4.Display");
		printf("\n 5.Exit");
		printf("\n Enter an option");
		scanf("%d",&option);
	switch(option){
		case 1:
		{
			printf("Enter the number to push into stack");
			scanf("%d",&val);
			top = push(top,val);
			break;
		}
		case 2:
		{
				top = pop(top);
			break;
		}
		case 3:
		{
				val = peek(top);
			if(val != -1)
				printf("\n the value of top of stack is %d",val);
			else
			printf("\n The stack is EMPTY");
			break;
		}
		case 4:
		{
		  
		    top = display(top);
		    break;
		}
	}
			
	}while (option != 5);
return 0;
}
struct stack *push(struct stack *top,int val) {
struct stack *ptr;
ptr = malloc(sizeof(struct stack ));
if (ptr == NULL) {
	printf("Memory allocation failed\n");
    return top;
}
ptr -> data = val;
ptr -> next = top;
top = ptr;
return top;
}
struct stack *pop(struct stack *top)
{
struct stack *ptr;
ptr = top;
if(top == NULL){
	printf("\n STACK UNDERFLOW");
}
else {
	top = top -> next;
	printf("\n The value is being popped out : %d",ptr -> data);
	free(ptr);
}
return top;
}
int peek(struct stack *top)
{
	if(top == NULL){
		return -1;
	}
	else{
		return top ->data;
	}
}
struct stack *display(struct stack *top)
{
	struct stack *ptr;
	ptr = top;
	if(top == NULL){
		printf("\n stack is empty");
		return top;
	}
	printf("The stack elements are: \n");
	while(ptr != NULL) {
		printf("%d\n",ptr -> data);
		ptr = ptr -> next;
	}
	return top;
}
