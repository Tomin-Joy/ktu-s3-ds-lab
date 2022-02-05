/************************************************************************
 * File         :   mergeSort.c
 * Description  :   C Program to  represent  Binary tree using array
 * Author       :   Tomin Joy
 * Version      :   1.0
 * Date         :   01/02/2022
 ************************************************************************/

#include <stdio.h>
char tree[200];

void parent(char val){
    if (tree[0] != '\0'){
        printf("Tree already has a root!");
    }
    else{
        tree[0] = val;
    }
}

void set_left(char key, int parent){
    if (tree[parent] == '#'){
        printf("\nCan't set child at %d no parent found! ", (parent * 2) + 1);
    }
    else{
        tree[(parent * 2) + 1] = key;
    }
}

void set_right(char key, int parent){
    if (tree[parent] == '#'){
        printf("\nCan't set child at %d no parent found !", (parent * 2) + 2);
    }
    else{
        tree[(parent * 2) + 2] = key;
    }
}

void print_tree(int n){
    int i;
    printf("Total no of nodes = %d\n",n);
    for (i = 0; i < n; i++){
        if (tree[i] != '\0'){
            printf("%c ", tree[i]);
        }
        else{
            printf("_ ");
        }
    }
}

int main(){
    int n, i;
    int index[100];
    char root, right[100], left[100];
    
    n = 9;
    parent('A');
    set_left('B', 0);
    set_right('\0', 0);
    set_left('C', 1);
    set_right('D', 1);
    set_left('E', 2);
    set_right('F', 2);
    set_left('\0', 3);
    set_right('G', 3);
    printf("\nArray Representation of binary tree\n\n");
    print_tree(n);
    return 0;
}