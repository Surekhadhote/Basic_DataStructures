#include<stdio.h>
int read(int *,int );
int print(int *,int );
int sel_sort(int *, int);
int merge_2_array(int *,int ,int *,int );


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

int merge_2_array(int *a,int t,int *b,int l){
	int s,i=0,j=0,k=0;
	s=t+l;
	int c[s];
	while(i<t&&j<l){
	
		if(a[i]<b[j]){
			c[k]=a[i];
			k++;
			i++;
		}else
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	
	if(i==t&&j<=l){
			c[k]=b[j];
			k++;
			j++;
	}
	if(j==l&&i<=t){
		c[k]=a[i];
			k++;
			i++;
		}
	printf("\nmerged array:\n ");
print(c,s);	
return 0;
}


int main(){
	int n,m;
	printf("\nenter array 1 len :\n");
	scanf("%d",&n);
	int a[n];
	printf("\nenter array elements :\n");
	read(a,n);
	 printf("\n");
	print(a,n);
	printf("\nenter array 2 len :\n");
	scanf("%d",&m);
	int b[m];
	printf("\nenter array elements:\n");
	read(b,m);
	 printf("\n");
	print(b,m);
	printf("\n array 1 sorted :\n");
    sel_sort(a,n);
    printf("\n");
    print(a,n);
    printf("\n array 2 sorted :\n");
    sel_sort(b,m);
    printf("\n");
    print(b,m);
    merge_2_array(a,n,b,m);
    printf("\n");
   
	return 0;
}

