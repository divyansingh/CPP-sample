#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MAX =100000;


int main(){
	int t;cin>>t;
	while(t--){
		ll n,k,str[MAX],tk;	cin>>n>>k;
	for(ll i=0;i<n;i++)	cin>>str[i];
		if(k>n) {
		    tk=((k/n)%3)*n+k%n;
		    if(n&1) {

		        str[n/2]=0;
		    }
		}
        else{ tk=k;}



		for(ll i=0;i<tk;i++){
			str[i%n]=str[i%n]^str[n-(i%n)-1];


		}
       	for(ll i=0;i<n;i++)	cout<<str[i]<<" ";
       cout<<endl;
	}
	return 0;
}
