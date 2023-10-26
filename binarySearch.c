#include<stdio.h>
int main(){
	int i,l=0,mid,h,n,s,array[20],pos=-1,count=2;
	printf("Enter the size of array(max 20) : ");
	scanf("%d",&n);
	printf("Enter the elements in asscending order\n");
	for(i=0;i<n;i++){
		printf("Enter element no. %d : ",i+1);
		scanf("%d",&array[i]);
	count++;
	}
	h=n-1;
	count++;
	printf("Enter the element to search : ");
	scanf("%d",&s);
	for(i=0;i<n;i++){
		mid=(l+h)/2;
		count++;
		if(array[mid]==s){
			pos=mid;
			count++;
			printf("Element found at %d\n",mid+1);
			break;
		}
		else if(s>array[mid]){
			l=mid+1;
			count++;
		}
		else{
			h=mid-1;
			count++;
		}
	count++;
	}
	if(pos==-1){
		printf("Element not found\n");
	}
	printf("\nTime complexity : %d",++count); 
	return 0;
}
			
		
	// c prgrm to do binary search and print time complexity
	
