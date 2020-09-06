#include<stdio.h>
int read(int *,int );
int print(int *,int );
int sel_sort(int *, int);


int read(int *p ,int k){
for(int i=0;i<k;i++){
	scanf("%d",&p[i]);
}

return 0;	
}

int print(int *p ,int k){
for(int i=0;i<k;i++){
	printf(" %d", p[i]);
}
return 0;	
}

int sel_sort(int *p,int k){
	for(int i=0;i<k-1;i++){
		for(int j=i+1;j<k;j++){
			if(p[i]>p[j]){
				int temp;
				temp = p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
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
    sel_sort(a,n);
    printf("\n");
    print(a,n);
	return 0;
}

