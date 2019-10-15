#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
#define f(x) for(int i=0;i<x;i++)
#define c(x) cin>>x;
#define cc(x) cout<<x<<endl;
using namespace std;
int main() {
	// your code goes here
	std::ios::sync_with_stdio(false);
	ll t;
	c(t)
	while(t--)
	{
	    ll a[3],b[3],c[3];
	    
	    f(3)
	    {
	        c(a[i])
	    }
	     f(3)
	    {
	        c(b[i])
	    }
	    f(3)
	    {
	        c(c[i])
	    }
	    
	    bool x=false,y=false,z=false, x1= false, y1= false, z1= false;
	    
	    // a b c
	    if(a[0]>=b[0] && b[0]>=c[0] ){
	        if(a[1]>=b[1] && b[1]>=c[1] ){
	            if(a[2]>=b[2] && b[2]>=c[2] ){
	                x= true;
	            }
	        }
	    }
	    // a c b 
	    if(a[0]>=c[0] && c[0]>=b[0] ){
	        if(a[1]>=c[1] && c[1]>=b[1] ){
	            if(a[2]>=c[2] && c[2]>=b[2] ){
	                x1= true;
	            }
	        }
	    }
	    // b a c
	    if(b[0]>=a[0] && a[0]>=c[0] ){
	        if(b[1]>=a[1] && a[1]>=c[1] ){
	            if(b[2]>=a[2] && a[2]>=c[2] ){
	                y= true;
	            }
	        }
	    }
	    // b c a
	    if(b[0]>=c[0] && c[0]>=a[0] ){
	        if(b[1]>=c[1] && c[1]>=a[1] ){
	            if(b[2]>=c[2] && c[2]>=a[2] ){
	                y1= true;
	            }
	        }
	    }
	    // c a b
	    if(c[0]>=a[0] && a[0]>=b[0] ){
	        if(c[1]>=a[1] && a[1]>=b[1] ){
	            if(c[2]>=a[2] && a[2]>=b[2] ){
	                z= true;
	            }
	        }
	    }
	    // c b a
	    
	    if(c[0]>=b[0] && b[0]>=a[0]){
	        if(c[1]>=b[1] && b[1]>=a[1] ){ 
	            if(c[2]>=b[2] && b[2]>=a[2] ){ 
	                z1= true;
	            }
	        }
	    }
	
	   if(c[0]==a[0]&&c[1]==a[1]&&c[2]==a[2] || c[0]==b[0]&&c[1]==b[1]&&c[2]==b[2] || a[0]==b[0]&&a[1]==b[1]&&a[2]==b[2] )
	  cc("no")
	    else if(x||x1||y||y1||z||z1)
	    cc("yes")
	    else
	    cc("no")
	}
	return 0;
}
