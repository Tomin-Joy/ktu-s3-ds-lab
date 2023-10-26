#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int rear=-1;
int front=-1;


void enQueue(int q[],int item){
	if(rear==MAX-1){
		printf("The queue is full\n");
		return;
	}
	rear++;
	q[rear]=item;
	if(front==-1){
		front=0;
	}
	
}
void deQueue(int q[]){
	if(front ==-1 || front>= MAX){
		printf("The queue is empty\n");
		return;
	}
	printf("The element deleted is %d\n",q[front]);
	front++;
}
void display(int q[]){
	printf("\n");
	if (rear==-1 || front>rear){
		printf("queue is Empty\n");
	}
	else {
		printf("The queue is : ");
		for(int i=front;i<=rear;i++){
			printf("%d  ",q[i]);
		}
		printf("\n");
	}
}


int main(){
	int queue[MAX],n;
	while(1){
		printf("Enter the operation required\n");
		printf("=====================================\n");
		printf("1.enque\n2.deque\n3.Display\n4.exit\n");
		printf("=====================================\n");
		fflush(stdin);
		scanf("%d",&n);
		switch(n){
			case 1:
				printf("Enter the item to push : ");
				int item;
				scanf("%d",&item);
				enQueue(queue,item);
				display(queue);
				break;
			case 2:
				deQueue(queue);
				display(queue);
				break;
			case 3:
				display(queue);
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

/*
Output

Enter the operation required
=====================================
1.push
2.pop
3.Display
4.exit
=====================================
1
Enter the item to push : 12

The queue is : 12  
Enter the operation required
=====================================
1.push
2.pop
3.Display
4.exit
=====================================
1 
Enter the item to push : 23

The queue is : 12  23  
Enter the operation required
=====================================
1.push
2.pop
3.Display
4.exit
=====================================
1
Enter the item to push : 3435

The queue is : 12  23  3435  
Enter the operation required
=====================================
1.push
2.pop
3.Display
4.exit
=====================================
1
Enter the item to push : 234

The queue is : 12  23  3435  234  
Enter the operation required
=====================================
1.push
2.pop
3.Display
4.exit
=====================================
1
Enter the item to push : 3454

The queue is : 12  23  3435  234  3454  
Enter the operation required
=====================================
1.push
2.pop
3.Display
4.exit
=====================================
1
Enter the item to push : 23
The queue is full

The queue is : 12  23  3435  234  3454  
Enter the operation required
=====================================
1.push
2.pop
3.Display
4.exit
=====================================
2
The element deleted is 12

The queue is : 23  3435  234  3454  
Enter the operation required
=====================================
1.push
2.pop
3.Display
4.exit
=====================================
2
The element deleted is 23



The queue is : 3435  234  3454  
Enter the operation required
=====================================
1.push
2.pop
3.Display
4.exit
=====================================
1
Enter the item to push : 23
The queue is full

The queue is : 3435  234  3454  
Enter the operation required
=====================================
1.push
2.pop
3.Display
4.exit
=====================================
2
The element deleted is 3435

The queue is : 234  3454  
Enter the operation required
=====================================
1.push
2.pop
3.Display
4.exit
=====================================
2
The element deleted is 234

The queue is : 3454  
Enter the operation required
=====================================
1.push
2.pop
3.Display
4.exit
=====================================
2
The element deleted is 3454

queue is Empty
Enter the operation required
=====================================
1.push
2.pop
3.Display
4.exit
=====================================
2
The queue is empty

queue is Empty
Enter the operation required
=====================================
1.push
2.pop
3.Display
4.exit
=====================================
2
The queue is empty

queue is Empty
Enter the operation required
=====================================
1.push
2.pop
3.Display
4.exit
=====================================
1
Enter the item to push : 23

The queue is : 23  
Enter the operation required
=====================================
1.push
2.pop
3.Display
4.exit
=====================================
4
*/
