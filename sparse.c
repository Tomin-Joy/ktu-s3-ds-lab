#include<stdio.h>
void readMatrix(int A[][10],int m,int n){
	printf("Enter the elements\n\n");
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
			printf("Element [%d][%d] : ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
}

int  sparse(int A[][10],int B[][10],int m,int n){
	int k=0;
	B[0][0] = m;
	B[0][1] = n;
	for(int i=0;i<m;i++){
		for(int j = 0;j<n;j++){
			if(A[i][j]!=0){
				k++;
				B[k][0] = i;
				B[k][1] = j;
				B[k][2] = A[i][j];
			}
		}
	}
	B[0][2] = k;
	return k;
}

void printMatrix(int A[][10],int m,int n){
	for(int i = 0;i<m;i++){
		for(int j= 0;j<n;j++){
			printf("%d  ",A[i][j]);
		}
		printf("\n");
	}
}

void main(){
	int A[10][10],Sparse[10][10],m,n;
	printf("Enter the number of rows : ");
	scanf("%d",&m);
	printf("Enter the number of columns : ");
	scanf("%d",&n);
	readMatrix(A,m,n);
	printf("The given matrix \n");
	printMatrix(A,m,n);
	printf("The Sparse matrix is : \n");
	int k = sparse(A,Sparse,m,n);
	printMatrix(Sparse,k+1,3);
}
	  
