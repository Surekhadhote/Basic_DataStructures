#include<stdio.h>
int read(int *,int );
int print(int *,int );


int read(int *p ,int k){
for(int i=0;i<k;i++){
	scanf("%d",&p[i]);
}

return 0;	
}

int print(int *p ,int k){
for(int i=0;i<k;i++){
	printf("%d", p[i]);
}
return 0;	
}



int main(){
	int n;
	printf("enter n");
	scanf("%d",&n);
	int a[n];
	read(a,n);
	print(a,n);
	return 0;
}
