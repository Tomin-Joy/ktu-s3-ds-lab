#include<stdio.h>
void swap(int* a,int* b){
    int t = *a;
    *a = *b;
    *b = t;
}
void printArray(int a[],int size){
    printf("The array is : ");
    for(int i =0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void insertionSort(int a[], int size) {
    int i, j;
    for (i = 1; i < size; i++) {
        j = i;
         while (j > 0 && a[j - 1] > a[j]) {
             swap(&a[j], &a[j - 1]);
             j--;
         }
    }
}
int main() {
    int a[20],size;
    printf("Enter the number of elements : ");
    scanf("%d",&size);
    printf("Enter the elements : \n");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printArray(a,size);
    insertionSort(a, size);
    printf("After sorting..\n");
    printArray(a, size);
    return 0;
}