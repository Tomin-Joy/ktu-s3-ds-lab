#include<stdio.h>
void swap(int* a,int* b){
    int t = *a;
    *a = *b;
    *b = t;
}
int partiton(int a[],int start,int end){
    int pivot,i,j;
    pivot=a[start];
    i=start;
    j=end;
    while(i<j){
        while(a[i]<=pivot){
            i++;
        }
        while(a[j]>pivot){
            j--;
        }
        if(i<j){
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[start],&a[j]);
    return j;
}
void quickSort(int a[],int start,int end){
    int j;
    if(start<end){
        j = partiton(a,start,end);
        quickSort(a,start,j-1);
        quickSort(a,j+1,end);
    }
}
void printArray(int a[],int size){
    printf("The array is : ");
    for(int i =0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void main(){
    int size,a[20];
    printf("Enter the number of elements : ");
    scanf("%d",&size);
    printf("Enter the elements : \n");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printArray(a,size);
    quickSort(a,0,size-1);
    printf("After Sorting...\n");
    printArray(a,size);

}