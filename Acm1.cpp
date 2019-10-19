#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MAX =100000;
ll test(string s[MAX],ll *bc,ll n){
     ll sum=0;
     for(ll i=0;i<n;i++)    {
         for(ll j=i+1;j<n;j++){
             if(bc[j]==-1||bc[i]==-1)  break;
             //out<<s[i]<<bc[i]<<"  "<<s[j]<<bc[j]<<endl;
             
             if(((s[i].compare( s[j])) == 0)&&(bc[i]^bc[j]))   {
                sum++;
                 bc[j]=-1;
                 bc[i]=-1;
                 continue;
                 
             } 
             
         }
        
     }
      for(ll i=0;i<n;i++) {
        //cout<<bc[i]<<" ";
        if(bc[i]!=-1) sum++;
      }
    // cout<<endl;
     return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;cin>>t;
	while(t--){
	        ll n,bc[MAX];cin>>n;
		 string s[MAX];
		 for(ll i=0;i<n;i++)    cin>>s[i]>>bc[i];
		
		 cout<<test(s,bc,n)<<endl;
	}
	return 0;
} 
