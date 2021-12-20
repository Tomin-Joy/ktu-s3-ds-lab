#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}node;
node *H;
node* create(){
	 node *newNode;
	 newNode = malloc(sizeof(node));
	 printf("\nEnter data :");
     scanf("%d",&(newNode->data));
     return newNode;
}
void display()
{
    struct node* temp;

    if (H == NULL)
        printf("\nList is empty\n");
 
    else {
        temp = H;
        printf("\nThe list is :");
        while (temp != NULL) {
            printf("%d -> ",temp->data);
            temp = temp->next;
        }
    }
}
void inAtFront(node *t){
	if(H==NULL){
		H=t;
		H->next=NULL;
	}
	else{
		t->next=H;
		H=t;
	}
}

void inAtEnd(node *t){
	if(H==NULL){
		H=t;
		H->next=NULL;
	}
	else{
		node *p=H;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=t;
		t->next=NULL;
	}
}

void inAtPos(node *t,int pos){
	node *p, *newnode;
    int  i = 1;
    p = H;
    while (i++ < pos - 1) {
        p = p->next;
    }
    t->next = p->next;
    p->next = t;
}
			
void deAtFront(){
	node *t = H;
	H=H->next;
	free(t);
}

void deAtEnd(){
	node *t,*p = H;
	while(p->next->next!=NULL){
		p=p->next;
	}
	t=p->next;
	p->next=NULL;
	free(t);
}

void deAtPos(int pos){
	node *p, *t;
    int  i = 1;
    p = H;
    while (i++ < pos - 1) {
        p = p->next;
    }
    t = p->next;
    p->next = t->next;
}
	
int main(){
	int n,pos;
    while (1){
 		printf("\n\n============================");
		printf("\n1.Display\n2.Insert at Front\n3.Insert at end\n4.Insert at particular position\n");
		printf("\n5.Delete at Front\n6.Delete at end\n7.Delete at particular position\n");
		printf("============================");
	    printf("\nEnter Choice : ");
	    fflush(stdin);
	    scanf("%d", &n);
 		node* t;
	    switch (n) {
	    case 1:
	        display();
	        break;
	    case 2:
	    	t=create();
	        inAtFront(t);
	        display();
	    
	        break;
	    case 3:
	        t=create();
	        inAtEnd(t);
	        display();
	     
	        break;
	    case 4:
	    	printf("Enter the position : ");
	        scanf("%d",&pos);
	        t=create();
	        inAtPos(t,pos);
	        display();
	   		break;
	   	case 5:
	   		deAtFront();
	   		display();
	   		break;
		case 6:
	   		deAtEnd();
	   		display();
	   		break;
	   	case 7:
	   		printf("Enter the position : ");
	        scanf("%d",&pos);
	        deAtPos(pos);
	        display();
	   		break;
		}
	}
	return 0;
}

