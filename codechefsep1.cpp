#include<iostream>
using namespace std;
int main()
{
	int t;	cin>>t;
	for(int i=0;i<t;i++){
		long int n,x,s,a,b;	cin>>n>>x>>s;
		for(long int j=0;j<s;j++){
			cin>>a>>b;
			if(a==x)	{x=b; continue;}
			if(b==x)	x=a;
		}
        cout<<x<<endl;
    }
}

