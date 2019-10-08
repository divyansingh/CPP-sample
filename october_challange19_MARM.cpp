#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MAX =10000;


int main(){
	int t;cin>>t;
	while(t--){
		ll n,k,str[MAX];	cin>>n>>k;
		for(ll i=0;i<n;i++)	cin>>str[i];
		for(ll i=0;i<k;i++){
			str[i%n]=str[i%n]^str[n-(i%n)-1];
		}
       	for(ll i=0;i<n;i++)	cout<<str[i]<<" ";

	}
	return 0;
}
