#include<stdio.h>
int main(){
    int exp[20],n;
    printf("Enter the degree of expression : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("\nEnter the coefficient of x^%d : ",i);
        scanf("%d",&exp[i]);
    }
    printf("\n\nThe expression is : ");
    for(int i=n;i>0;i--){
        printf("%d x^%d + ",exp[i],i);
    }
    printf("%d",exp[0]);
    return 0;
}