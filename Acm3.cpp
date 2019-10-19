#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MAX=1000000;
bool chksafe(string s){
    ll tst[100]={0};
    for(ll i=0;i<s.length();i++){
        if(s[i]!='.') {
            for(ll j=i-int(s[i]-'0');j<=i+int(s[i]-'0');j++){
                if(j<0) j=0;
                if (j>s.length())  break;
                tst[j]+=1;
                if(tst[j]>1)  return false;
                
            }
        }
    }
    
    return true;
}
int main(){
	int t;	cin>>t;
	while(t--){
		
		string s;   cin>>s;
	
        if(chksafe(s)) {cout<<"safe";}
      else   cout<<"unsafe";
        
		cout<<endl;
	}
	return 0;
}
