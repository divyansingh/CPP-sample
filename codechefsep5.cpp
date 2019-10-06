#include<bits/stdc++.h>
using namespace std;
bool sqrtchek(int n){
	float s=sqrt(n);
	if(floor(s)==ceil(s))	return true;
		return false;
}
void andsqr(int a[1000], int n,int l,int r)
{
	int sum,an=0,k;
	for (int i=l; i <r; i++){
        for (int j=i; j<r; j++){
		    for ( k=i,sum=a[k]; k<=j; k++){
		    	sum&=a[k];
		    	}
		if(sqrtchek(sum))	an++;
        }
	}
	cout<<an<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,q,r,l,a[1000];	cin>>n>>q;
		for(int i=0;i<n;i++)	cin>>a[i];
			while(q--){
				cin>>l>>r;
				andsqr(a,n,--l,r);
			}
	}
}
