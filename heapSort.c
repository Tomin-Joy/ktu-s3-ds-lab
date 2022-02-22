/************************************************************************
 * File         :   heapSort.c
 * Description  :   C Program to  implement heap sort algorothm
 * Author       :   Tomin Joy
 * Version      :   1.0
 * Date         :   17/01/2022
 ************************************************************************/

#include<stdio.h>
void swap(int* a,int* b){
    int t = *a;
    *a = *b;
    *b = t;
}
void heaper(int arr[], int size, int i)
{
    int largest = i; 
    int left = 2 * i + 1;
    int right = 2 * i + 2;
 
   
    if (left < size && arr[left] > arr[largest]){
        largest = left;
    }
    if (right < size && arr[right] > arr[largest]){
        largest = right;
    }
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heaper(arr, size, largest);
    }
}
void heapSort(int arr[], int size)
{
    
    for (int i = size / 2 - 1; i >= 0; i--){
        heaper(arr, size, i);
    }
    for (int i = size - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        heaper(arr, i, 0);
    }
}
void printArray(int a[],int size){
    printf("The array is : ");
    for(int i =0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
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
    heapSort(a, size);
    printf("After sorting..\n");
    printArray(a, size);
    return 0;
}