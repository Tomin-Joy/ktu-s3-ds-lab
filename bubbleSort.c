#include<stdio.h>

int main(){

   int n, temp, i, j, array[20],count=0;

   printf("Enter array of elements(max 20)");
   scanf("%d",&n);

   for(i=0;i<n;i++){
        printf("Enter element no. %d : ",i+1);
        scanf("%d",&array[i]);
    count++;
   }

   for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
               temp=array[j];
               array[j]=array[j+1];
               array[j+1]=temp;
               count+3;
            }
        count++;
        }
    count++;
   }

   printf("Sorted elements: ");
   for(i=0;i<n;i++){
      printf(" %d",array[i]);
    count++;
   }
    printf("\nTime complexity = %d",++count);
   return 0;
}
