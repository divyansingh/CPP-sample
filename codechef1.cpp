#include <bits/stdc++.h>

using namespace std;
int main(){
	int t;	cin>>t;
	for(int i=0;i<t;i++){
		string ct,et; int tt,dt;	cin>>ct;cin>>tt;cin>>et;cin>>dt;
    cout<<ct<<"      "<<et<<endl;
		int cth,ctm,eth,etm;
		cth=((ct[4]-'0'))*10+((ct[3]-'0')); cout<<cth<<endl;
		ctm=ct[1]*10+ct[0];
		eth=et[4]*10+et[3];
		etm=et[1]*10+et[0];
		cth+=tt/60;
            if(ctm+tt%60>60) cth+=1;
            ctm+=tt%60;
		eth+=dt/60;
            if(etm+dt%60>60)  eth+=1;
            etm+=dt%60;
            etm+=dt%60;
		cout<<cth;
		//if (eth>=cth&&etm>=ctm)
		//{
				///cout<<"cth=="<<cth<<"ctm=="<<ctm<<endl;
				//cout<<"Yes";
		//}
			//else cout<<"No";
			//cout<<"eth=="<<eth<<"etm=="<<etm<<endl;
		cout<<endl;
    }
}
