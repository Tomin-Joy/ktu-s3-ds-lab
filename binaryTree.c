/************************************************************************
 * File         :   mergeSort.c
 * Description  :   C Program to  represent  Binary tree using array
 * Author       :   Tomin Joy
 * Version      :   1.0
 * Date         :   01/02/2022
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main()
{
    int i,size,n,nodes;
    char binaryTree[50];
    printf("Enter the total height of the binary tree:");
    scanf("%d",&n);
    size=n+1;
    printf("Enter the Root Element:");
    fflush(stdin);
    scanf("%c",&binaryTree[0]);
    
    nodes=pow(2,n)-1;
    printf("\nEnter ""_"" to represent Free space\n");
    for(i=0;i<nodes-1;i++)
    {
        if(binaryTree[i]!='_'){
            printf("Enter the Left child of %c :",binaryTree[i]);
            fflush(stdin);
            scanf("%c",&binaryTree[(2*i)+1]);
            printf("Enter the Right child of %c :",binaryTree[i]);
            fflush(stdin);
            scanf("%c",&binaryTree[(2*i)+2]);
        }
        else{
            binaryTree[(2*i)+1]='_';
            binaryTree[(2*i)+2]='_';

        }
    }
    printf("The binary tree using array representation( ""_"" represents Empty Space)=\n");
    for(i=0;i<nodes;i++)
    {
        printf("%c\t",binaryTree[i]);
    }
    return 0;
}