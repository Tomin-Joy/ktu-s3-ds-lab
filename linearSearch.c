#include<stdio.h>
int main(){
	int i,s,n,array[10],flag=0,count=1;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter element no. %d : ",i+1);
		scanf("%d",&array[i]);
	count++;
	}
	
	printf("Enter the element to search : ");
	scanf("%d",&s);
	for(i=0;i<n;i++){
		if(s==array[i]){
			printf("\nElement found at %d \n",i+1);
			flag=1;
			count++;
			break;
		}
	count++;
	}
	
	if(flag==0){
		printf("Element not found\n");
	}
	printf("Time complexity : %d",++count);
	return 0;
}
	
