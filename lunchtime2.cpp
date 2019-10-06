#include<bits/stdc++.h>
using namespace std;
typedef long int ii;
int main(){
	int t;	cin>>t;
	while(t--){
		ii n,s=0;	cin>>n;{
			while(n--){
				ii ti,fi;	cin>>ti>>fi;
				if(fi-ti>5)	s++;
			}
		cout<<s<<endl;
		}
	}
	return 0;
}