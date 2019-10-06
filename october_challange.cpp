#include<bits/stdc++.h>
using namespace std;
typedef long long int ii;
bool serve(ii p1,ii p2,ii k){
	ii t=p1+p2;
	bool re=true;
	while((t-k)>=0){
		t-=k;
		if(re)	re=false;	else re=true;
	}

	return re;
}
int main(){
	ii t;	cin>>t;
	while(t--){
		ii p1,p2,k;	cin>>p1>>p2>>k;
		if(serve(p1,p2,k))	cout<<"CHEF";	else	cout<<"COOK";
		cout<<endl;
	}
	return 0;
}

