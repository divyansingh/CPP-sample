#include<bits/stdc++.h>
using namespace std;
typedef long long int ii;
ii N=10000;
void multiple_sort(ii a[10000],ii b[10000],ii c[10000],ii n){
	for(ii i=0;i<n;i++)
		for(int j=0;j<n-i-1;j++)
			if(c[j]<c[j+1]){
				swap(c[j],c[j+1]);
				swap(a[j],a[j+1]);
				swap(b[j],b[j+1]);
			}

}
int main(){
	ii n,m,a[N],b[N],c[N],max;	cin>>n>>m;
	for(ii i=0;i<n;i++)	cin>>a[i];
	for(ii i=0;i<n;i++)	cin>>b[i];
	for(ii i=0;i<n;i++)	c[i]=a[i]*b[i];
	multiple_sort(a,b,c,n);
	for(ii i=0;i<n;i++){
		if(a[i]>m)	
	}
	return 0;
}
