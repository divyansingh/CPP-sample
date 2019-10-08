#include <bits/stdc++.h>
using namespace std;
bool goodchk(int *str,int i,int n){
    for(int j=i-1;j>=0&&j>=(i-5);j--){
				if(str[i]>=str[j])	return false;
			}
	return true;
}
int good(int *str,int n){
		int cnt=0;
	
		for(int i=0;i<n;i++){
			if(goodchk(str,i,n))    cnt++;
			
		}
	return cnt;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,str[150];	cin>>n;
		for(int i=0;i<n;i++)	cin>>str[i];
		cout<<good(str,n)<<endl;
	}
	return 0;
}
