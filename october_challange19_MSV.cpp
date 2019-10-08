#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MAX=1000000;
int star(ll *a,ll n){
	ll max_s=0;
	for(ll i=0;i<n;i++){
		if(a[i]==1)	return n-1;
		ll s=0;
		for(ll j=i+1;j<n;j++){
			if(a[j]%a[i]==0) s++;
		}
		if(s>max_s)	max_s=0;
	}
	return max_s;
}
int main(){
	int t;	cin>>t;
	while(t--){
		ll n,ll a[MAX];
		for(ll i=0;i<n;i++)	cin>>a[i];
		sort(a,a+n);

		cout<<star(a,n)<<endl;
	}
	return 0;
}
