#include <stdio.h> 

// This function stores transpose of A[][] in B[][] 
int read(int A[3][3],int ,int);
int print(int A[3][3] ,int k,int l ) ;
int saddle(int A[3][3],int k,int l);

int main() 
{ 
printf("input matrix of 3");

    int A[3][3];
  
  read(A,3,3);
    printf(" \n"); 
  print(A,3,3);
 saddle(A,3,3);
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

  
  int print(int A[3][3] ,int k,int l ) 
{ 
   for(int i=0;i<k;i++){
   
	for(int j=0;j<l;j++)
	printf(" %d",A[i][j]);
printf("\n");}
return 0;
} 


int saddle(int A[3][3],int k,int l){
 
 for(int i=0;i<k;i++){
 int small=32767;
 int t;
 	for(int j=0;j<l;j++){
 		if(small>A[i][j]){
 			small=A[i][j];
 			t=j;
		 }
}
	 	int saddle=0;
	 for(int m=0;m<l;m++){
	    
	 	if(small>=A[m][t]){
	 		saddle++;
		 }
		  if(saddle==3){
	 	printf("\n saddle point is %d at row %d col %d ",small,i+1,t+1);
	 }
		 
	 }
	 
	
	 
 }
	return 0;
}
  
  
