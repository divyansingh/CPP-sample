#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int trouble(vector<vector<ll>> &t_mat,ll n,ll m,vector<ll> xa, vector<ll> ya){
	int cnt=0;
	for(ll i=0;i<n;i++)	
			for(ll j=0;j<m;j++) 
				t_mat[i][j]+=xa[i]+ya[j];
	for(auto i:t_mat){
		for(auto j:i)
			if(j%2)	cnt++;
	}
    return cnt;
}

int main(){
	int t;cin>>t;
	while(t--){
		ll n,m,q;	cin>>n>>m>>q;
		vector<vector<ll>> t_mat(n,vector<ll>(m,0));
   
		vector<ll> xa(n,0),ya(m,0);
		for(ll i=0;i<n;i++)
		    for(ll j=0;j<m;j++) t_mat[i][j]=0;
		for(ll i=0;i<q;i++){
			ll  x,y	;cin>>x>>y;
			xa[x-1]++;
			ya[y-1]++;
			
		}
		cout<<trouble(t_mat,n,m,xa,ya)<<endl;
        

	}
	return 0;
}