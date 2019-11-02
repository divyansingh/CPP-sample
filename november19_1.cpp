#include <bits/stdc++.h>
using namespace std;
int fun(int n){
 int temp=n;int x[12]={0};
	    string s;
	    while(temp--){
	        cin>>s;
	        for(int i=0;i<10;i++)
	            x[i]^=int(s[i]-'0');

	    }
	    return accumulate(x,x+n,0);

}
int main() {
	int t;cin>>t;
	while(t--){
	    int n;  cin>>n;
        cout<<fun(n)<<endl;
	}
	return 0;
}
