#include <stdio.h>
int read(int *,int );
int print(int *,int );
int sel_sort(int *, int);
int lowsum();

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




int main(void) {
	// your code goes here
		int t;
	scanf("%d",&t);

	for(int i=0;i<t;i++){
	    lowsum();
	}
	return 0;
}


int lowsum(){
    int k,q;
    scanf("%d",&k);
    scanf("%d",&q);
    
    int m[k],s[k];
    read(m,k);
    read(s,k);
    int c;
    c=k*k;
    int low[c];int b=0;
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            low[b++]=m[i]+s[j];
        }
    }
    int que[q];
    for(int i=0;i<q;i++){
        scanf("%d",&que);
    }
    
   // sel_sort(low,c);
    for(int l=0;l<q;l++){
        printf("\n %d",low[que[l]]);
        
    }
    
    return 0;
}
  
  
  //or

#include <bits/stdc++.h> 
using namespace std; 
#include<vector>
#include<algorithm>
#include<cmath>



int main() {
	// your code goes here
		int t;
	cin>>t;

	for(int i=0;i<t;i++){
    int k,q;
    cin>>k>>q;
    
    int m[k],s[k];

    for(int i=0;i<k;i++){
	cin>>m[i];
}
for(int i=0;i<k;i++){
	cin>>s[i];
}
    
  
      vector<long long int>v;{
  long long int max=first[100]+second[100];
  for (c = 0; c < k; c++) {
  	for(int i=0;i<k&&m[c]+s[i]<max;i++){
	  
    v.push_back(m[c]+s[i]);
  }
}
}
sort(v.begin(),v.end());
    for(c=0;c<q;c++){
cout<<v[a[c]-1]<<endl;
}
}
    
    
    
   
    return 0;
}





