#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef long long int ii;
int main(){
	int t;	cin>>t;
	while(t--){
		ii n,m,time[100000000]={0},ma=-1;	cin>>n>>m;
		while(n--){
				ii l,r;    cin>>l>>r;
                ma=max(ma,r);
				for(ii i=l;i<=r;i++) time[i]=1;
		}
		while(m--){
				ii p,tim=0;	cin>>p;
				if(p>ma)	cout<<-1<<endl;
					else
						if(time[p]&&time[p+1])	cout<<tim<<endl;
							else
								{for(ii i=p;time[i]>0&&i<=ma;tim++,i++);
								cout<<++tim<<endl;}
		}
	}
	return 0;
}
