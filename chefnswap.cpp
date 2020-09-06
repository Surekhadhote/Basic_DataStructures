
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int is_niceswap(int * ,int );



int is_niceswap(int *p ,int f){
    int m,k,w,counter=0;
    for(int i=1;i<=f;i++){
       
    m=p[i]; k=m;
   
    if(m>=1&&m<f){
    	 
        int j;
        j=m;
         int fsum=0,lsum=0;
        while(j){
            fsum=fsum+p[j--];
           
        }
       w=f-m;
       int a=f;
       while(a>m){
           lsum=lsum+p[a];
           
            a--;
       }
       if(lsum==fsum){
        counter++;   
       
       }
        
    }
    
    } 
    
  return counter;
}



int main() {
	// your code goes here
	 	ios_base::sync_with_stdio(false);
		cin.tie(NULL);
	  int t,g=0,*p;
	  cin>>t;
	  int ti[t],to[t];
	 
	 
	  while(g<t){
	   
	   cin>>ti[g];
	   
	   g++;
     }

g=0;
while(g<t){
int n;
n=ti[g];
	     int s[n];
	     
		   for(int i=1;i<=n;i++){
	    s[i]=i;  
	
	    }
	    
	       int nice_swap;
	     nice_swap=0;int c=0;
	for(int i=1;i<=n;i++){
	    
	   
	    for(int j=i+1;j<=n;j++){
	        int t=0;
	        t=s[i];
	        s[i]=s[j];
	        s[j]=t;
	        
	         
	           c=is_niceswap(s,n);
	        
	        nice_swap=nice_swap+c;
	    
		
		   t=0;
	        t=s[i];
	        s[i]=s[j];
	        s[j]=t;
		}
	      
	}
	
	to[g]=nice_swap;      
	 g++;   
	}
	
	g=0;
	 while(g<t){
	   
	   cout<<to[g];
	   
	   g++;
     }
	

	return 0;
}


