#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//const ll MOD = 1000000007;
ll cost(ll *cor,ll *bom,ll n){
	ll cst=0;
	for(ll i=0;i<n;i++){
		for(ll j=i+1;j<n;j++){
			cst+=abs(cor[i]-cor[j])*max(bom[i],bom[j]);
		}
	}
	return cst;
}
int main(){
	int t;	cin>>t;
	while(t--){
		ll n,cor[200000],bom[200000];
		cin>>n;
		for(ll i=0;i<n;i++)	cin>>cor[i];
		for(ll i=0;i<n;i++)	cin>>bom[i];
		cout<<cost(cor,bom,n)<<endl;
	}
	return 0;
}
