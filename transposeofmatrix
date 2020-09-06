#include <stdio.h> 

// This function stores transpose of A[][] in B[][] 
int read(int A[3][3],int ,int);
int print(int A[3][3] ,int k,int l ) ;
int transpose(int A[3][3] ,int k,int l ) ;
int main() 
{ 
printf("input matrix of 3");

    int A[3][3],B[3][3];
  
  read(A,3,3);
    printf(" \n"); 
  print(A,3,3);
   printf("\nTranspose of matrix: \n"); 
  transpose(A,3,3);
  print(A,3,3);
    return 0; 
} 
int read(int A[3][3] ,int k,int l ) 
{ 
   for(int i=0;i<k;i++){
	for(int j=0;j<l;j++)
	scanf("%d",&A[i][j]);
}
return 0;
} 
int transpose(int A[3][3] ,int k,int l ) 
{ int temp;
   for(int i=0;i<k;i++){
	for(int j=i+1;j<l;j++)
       {
       	
	   temp=A[j][i];
		A[j][i]=A[i][j];
		A[i][j]=temp;}
}
return 0;
} 
  
  int print(int A[3][3] ,int k,int l ) 
{ 
   for(int i=0;i<k;i++){
   
	for(int j=0;j<l;j++)
	printf(" %d",A[i][j]);
printf("\n");}
return 0;
} 
