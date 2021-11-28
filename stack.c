#include<stdio.h>
#include<stdlib.h>
#define MAX 30
int top=-1;
int count=1;

void push(int st[],int item){
	if(top==MAX-1){
		printf("The stack is full\n");
		return;
	}
	st[++top]=item;
	count++;
}
void pop(int st[]){
	if(top==-1){
		printf("The stack is empty\n");
		return;
	}
	printf("The element deleted is %d",st[top--]);
}
void display(int st[]){
	printf("\n");
	for(int i=0;i<=top;i++){
		printf("%d  ",st[i]);
		count++;
	}
	printf("\n\n");
}


int main(){
	int stack[MAX],n;
	char y='y';
	count++;
	while(1){
		printf("Enter the operation required\n");
		printf("1.push\n2.pop\n3.Display\n4.exit\n");
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
				printf("\nTime complexity = %d",count);
				exit(0);
			default :
				printf("Invalid selection");
		}
	}
	return 0;
}


