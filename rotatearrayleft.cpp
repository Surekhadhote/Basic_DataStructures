#include<bits/stdc++.h>
using namespace std;

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

int rotateleft(int *p,int d,int n){
	for(int i=0;i<d;i++){
		int temp=p[0];
		for(int j=0;j<n-1;j++){
			p[j]=p[j+1];
		}p[n-1]=temp;
	}
	print(p,n);
	return 0;
}
int main(){
	int n;
	cout<<"enter n\n";
	cin>>n;
	int arr[n];
	read(arr,n);
	print(arr,n);
	int d;
	cout<<"enter no.of time you want to rotate\n";
	cin>>d;
	rotateleft(arr,d,n);
//	print(arr,n);
	return 0;
}
