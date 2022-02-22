#include<stdio.h>
typedef struct term
{
    int coef;
    int expo;
}term;

int main(){
    int n,power;
    term expression[20];
    printf("Enter the number of elements  : ");
    scanf("%d",&n);
    for(int i=n-1;i>=0;i--){
    	printf("\nEnter the power : ");
    	scanf("%d",&expression[i].expo);
        printf("Enter the coefficient of x^%d : ",expression[i].expo);
        scanf("%d",&expression[i].coef);
    }
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(expression[min].expo>expression[j].expo){
				min=j;
            }	
		}
		if(i!=min){
			term temp=expression[i];
			expression[i]=expression[min];
			expression[min]=temp;
		}
	}
    printf("\n\nThe expression is : ");
    printf("%d(x^%d) ",expression[n-1].coef,expression[n-1].expo);
    for(int i=n-2;i>=0;i--){
        
    	if (expression[i].coef<0){
    		printf(" - %d(x^%d)",expression[i].coef * -1,expression[i].expo);
    	}
    	else{
    	    printf(" + %d(x^%d)",expression[i].coef,expression[i].expo);
        }
    }
    return 0;
}
