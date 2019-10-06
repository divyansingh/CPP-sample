#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 int nCrModpDP( int n,int r, int p) {
	 int C[r+1];
	memset(C, 0, sizeof(C));
	C[0] = 1;
	for (int i = 1; i <= n; i++) {
		for ( int j = min(i, r); j > 0; j--)
			C[j] = (C[j] + C[j-1])%p;
		}
	return C[r];
}
int nCrModpLucas( int n, int r, int p) {
	if (r==0)
	return 1;
	 int ni = n%p, ri = r%p;
	return (nCrModpLucas(n/p, r/p, p) *
		nCrModpDP(ni, ri, p)) % p;
}
void xoring( int eva[10000],int &evan,int &odan){
	evan=nCrModpLucas(evan, 2, 10007);
	odan=nCrModpLucas(odan, 2, 10007);
	for( int i=0;i<9999;i++){
		if(eva[i]>1)	evan-=nCrModpLucas(eva[i], 2, 10007);
		if(eva[i+1]>1)	odan-=nCrModpLucas(eva[i+1],2,10007);
	}
	int e1=eva[0]*eva[2];
    int o1=eva[1]*eva[3];
    evan-=e1; odan-=o1;
	cout<<evan+odan<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
               int n,a[10000],eva[10000],evan=0,odan=0;
		  cin>>n;
		for( int j=0;j<10000;j++)   eva[j]=0;

		for(  int j=0;j<n;j++)	{
        	cin>>a[j];
        	if(a[j]%2)	odan++; else evan++;
        	eva[a[j]]++;
        	}
		xoring(eva,evan,odan);
		}
}
