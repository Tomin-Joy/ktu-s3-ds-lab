#include<stdio.h>
#include<stdlib.h>
#define MAX 30
int top=-1;

void push(int st[],int item){
	if(top==MAX-1){
		printf("The stack is full\n");
		return;
	}
	top++;
	st[top]=item;
	
}
void pop(int st[]){
	if(top==-1){
		printf("The stack is empty\n");
		return;
	}
	printf("The element deleted is %d\n",st[top]);
	top--;
}
void display(int st[]){
	printf("\n");
	if (top==-1){
		printf("Stack is Empty\n");
	}
	else {
		printf("The stack is : ");
		for(int i=0;i<=top;i++){
			printf("%d  ",st[i]);
		}
		printf("\n");
	}
}


int main(){
	int stack[MAX],n;
	while(1){
		printf("Enter the operation required\n");
		printf("=====================================\n");
		printf("1.push\n2.pop\n3.Display\n4.exit\n");
		printf("=====================================\n");
		fflush(stdin);
		scanf("%d",&n);
		switch(n){
			case 1:
				
				printf("Enter the item to push : ");
				int item;
				scanf("%d",&item);
				push(stack,item);
				display(stack);
				break;
			case 2:
				pop(stack);
				display(stack);
				break;
			case 3:
				display(stack);
				break;
			case 4:
				printf("\n========Program terminated========");
				exit(0);
			default :
				printf("Invalid selection");
		}
	}
	return 0;
}


