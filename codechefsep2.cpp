#include<iostream>
using namespace std;
bool know(long int k,long int x){
	k--;
	if(k%x==0&&k>=0)	return true;
	return false;
}

int main(){
	int t; cin>>t;
	for(int i=0;i<t;i++){
		long int k,p,x,y;	cin>>k>>p>>x>>y;
		if(know(k,x)&&know(p,y))	cout<<"Chefirnemo"<<endl;
		        else   if(know(--k,x)&&know(--p,y))	cout<<"Chefirnemo"<<endl;
			            else	cout<<"Pofik"<<endl;
	}
}
