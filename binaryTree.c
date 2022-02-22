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
    char btarray[50];
    printf("Enter the total height of the binary tree:");
    scanf("%d",&n);
    size=n+1;
    printf("Enter the Root Element:");
    fflush(stdin);
    scanf("%c",&btarray[0]);
    
    nodes=pow(2,n)-1;
    printf("\nEnter ""_"" to represent Free space\n");
    for(i=0;i<nodes;i++)
    {
        if(btarray[i]!='_'){
            printf("Enter the Left child of %c :",btarray[i]);
            fflush(stdin);
            scanf("%c",&btarray[(2*i)+1]);
            printf("Enter the Right child of %c :",btarray[i]);
            fflush(stdin);
            scanf("%c",&btarray[(2*i)+2]);
        }
        else{
            btarray[(2*i)+1]='_';
            btarray[(2*i)+2]='_';

        }
    }
    printf("The binary tree using array representation( ""_"" represents Empty Space)=\n");

    nodes=pow(2,size)-1;
    for(i=0;i<nodes;i++)
    {
        printf("%c\t",btarray[i]);
    }
    return 0;
}