#include <bits/stdc++.h>
using namespace std;
#define ll long  int


ll trouble(ll n,ll m,ll *xa, ll *ya){
	ll cnt=0,xa_s=accumulate(xa, xa+n, 0);
	
    for(ll j=0;j<m;j++)
				
				if(ya[j])	cnt+=n-xa_s;     else cnt+=xa_s;
				
	
     return cnt;
}

int main(){
    
	int t;cin>>t;
	while(t--){
		ll n,m,q;	cin>>n>>m>>q;

		ll xa[100000]={0},ya[100000]={0};
	
		for(ll i=0;i<q;i++){
			ll  x,y;	cin>>x>>y;
			xa[x-1]=xa[x-1]?0:1;
			ya[y-1]=ya[y-1]?0:1;
			
		}
		
		cout<<trouble(n,m,xa,ya)<<endl;
        

	}

	return 0;
}
