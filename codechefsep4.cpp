#include<iostream>
using namespace std;
int main()
{
	
	int n;	cin>>n;
	if(n<=1||n>=17)	return 0;
	for(int i=1;i<=n;i++)	cout<<i<<" ";
	cout<<endl;
	for(int i=n;i>=1;i--)	cout<<i<<" ";



	return 0;
}