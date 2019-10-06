#include<bits/stdc++.h>
using namespace std;
typedef long long int ii;
int main(){
	ii tn,bi[2000]={0},ni[2000]={0},by[2000]={0};	cin>>tn;
	int bii=1,bif=2,i=0;ii t=1;
    while(i<1800){
	    for( i=bii;i<=bif;i++)    bi[i]=t;
	    bii+=26; bif+=26;t*=2;
	}
	
	 bii=3;bif=10;i=0;t=1;
    while(i<1800){
	    for( i=bii;i<=bif;i++)    ni[i]=t;
	    bii+=26; bif+=26;t*=2;
	}
	
	 bii=11;bif=26;i=0;t=1;
    while(i<1800){
	    for( i=bii;i<=bif;i++)   by[i]=t;
	    bii+=26; bif+=26;t*=2;
	}
	while(tn--){
		ii n;	cin>>n;
		cout<<bi[n]<<" "<<ni[n]<<" "<<by[n]<<endl;;
	}

}