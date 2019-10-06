#include<iostream>
using namespace std;
int fun(int n){
	if(n<=1)	return 0;
	cout<<endl;
	cout<<fun(n-1);
}
int main(){
	int n;	cin>>n;
	cout<<fun(n)<<endl;
	return 0;
}
