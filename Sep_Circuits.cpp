#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	long int s,x,n,d=0,t;cin>>s>>x>>n;
	int a[1000]={0};

	for(int i=0;i<n;i++){
		cin>>t;
		cin>>a[t-1];
	}

	while(s>=0){
		if(a[d]>0&&a[d]<x){
			s-=a[d]
		}
		else	s-=x;
		i++;
	}
	cout<<d;
}