#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int coef;
    int pow;
    struct Node* nxt;
}Node;

Node* readPoly()
{
    int coef, exp, flag;
    Node* temp = (Node*)malloc(sizeof(Node));
    Node *p = temp;
    do{ 
        printf("Exponent: ");
        scanf("%d", &exp);
        printf("Coeffecient: ");       
        scanf("%d", &coef);
        temp->coef = coef;
        temp->pow = exp;
        temp-> nxt = NULL;
        printf("Enter 1 for adding more and 0 to stop ");
        scanf("%d", &flag);
        if(flag)
        {
            temp->nxt = (Node*)malloc(sizeof(Node));
            temp = temp->nxt;
            temp->nxt = NULL;
        }
    }while(flag);
    printf("\n"); 
    return p;  
}

void dispPoly(Node* p)
{
    while(p != NULL)
    {
        printf("%d*(X^%d)", p->coef, p->pow);
        p = p->nxt;
        if(p != NULL)
            printf("+");
    }
    printf("\n");
}

Node* addPoly(Node* first, Node* second)
{   
    Node* result = NULL;
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->nxt = NULL;
    result = temp;
    while(first && second)
    {
        if(first->pow > second->pow)
        {
            temp->coef = first->coef;
            temp->pow = first->pow;
            first = first->nxt;
        }
        else if(first->pow < second->pow)
        {
            temp->coef = second->coef;
            temp->pow = second->pow;
            second = second->nxt;
        }
        else
        {
            temp->coef = first->coef + second->coef;
            temp->pow = first->pow;
            first = first->nxt;
            second = second->nxt;
        }

        if(first && second)
        {
            temp->nxt = (Node*)malloc(sizeof(Node));
            temp = temp->nxt;
            temp->nxt = NULL;
        }
    }
    while(first || second)
    {
        temp->nxt = (Node*)malloc(sizeof(Node));
        temp = temp->nxt;
        temp->nxt = NULL;
            
        if(first)
        {
            temp->coef = first->coef;
            temp->pow = first->pow;
            first = first->nxt;
        }

        else if(second)
        {
            temp->coef = second->coef;
            temp->pow = second->pow;
            second = second->nxt;
        }
    }
    return result;
}

int main()
{

    Node* first = NULL;
    Node* second = NULL;
    Node* result = NULL;
    printf("\nEnter Details of first polynomial :-\n");
    first = readPoly();
    printf("\nEnter Details of second polynomial :-\n");
    second = readPoly();
    printf("The first expression is : ");
    dispPoly(first);
    printf("The second expression is : ");
    dispPoly(second);
    printf("The result is : ");
    result = addPoly(first, second);
    dispPoly(result);
    return 0;
}