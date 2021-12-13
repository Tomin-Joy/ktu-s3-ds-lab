#include<stdio.h>
int main(){
    int exp[40],n,power;
    printf("Enter the number of elements  : ");
    scanf("%d",&n);
    for(int i=0;i<40;i++)
    	exp[i] = 0;
    for(int i=n;i>0;i--){
    	printf("\nEnter the power : ");
    	scanf("%d",&power);
        printf("Enter the coefficient of x^%d : ",power);
        scanf("%d",&exp[power]);
    }
    printf("\n\nThe expression is : ");
    for(int i=39;i>=0;i--){
    	if(exp[i]==0){
    		continue;
    	}
    	else{
    	printf("%d(x^%d) + ",exp[i],i);
    }
}
    return 0;
}
