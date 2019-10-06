#include<bits/stdc++.h>
using namespace std;
typedef long long int  ii;

 bool isCircular(ii a[],ii size)
{
   ii count = 0;
	for(ii i=0; i<size; i++)
        if(a[i] > a[(i+1)%size]) count ++;
    return (count <= 1);
}

int main(){
	ii t;	cin>>t;
	while(t--){
	ii n;	cin>>n;
	ii a[n];
	for(ii i=0;i<n;i++)	cin>>a[i];
	if(isCircular(a,n))	cout<<"YES";else cout<<"NO";
	cout<<endl;
	}

	return 0;
}
