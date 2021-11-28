#include<stdio.h>
int main(){
	int i,j,n,array[20],min,temp,count=0;
	printf("Enter the size of array(max 20) : ");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++){
		printf("Enter element no. %d : ",i+1);
		scanf("%d",&array[i]);
		count++;
	}
	count++;
	for(i=0;i<n;i++){
		min=i;
		count++;
		for(j=i+1;j<n;j++){
			if(array[min]>array[j]){
				min=j;
				count++;
			}
		count++;	
		}
		count++;
		if(i!=min){
			temp=array[i];
			array[i]=array[min];
			array[min]=temp;
			count+=3;
		}
	}
	count++;
	printf("\nThe sorted array is : ");
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	count++;
	}
	
	printf("\nTime complexity = %d",++count);
	return 0;
}

			
