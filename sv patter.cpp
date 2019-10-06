#include<iostream>
using namespace std;
int main(){
	int n;  cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int ci,cj;
			if(i>n/2+1)	ci=n-i+1;	else	ci=i;
			if(j>n/2+1)	cj=n-j+1;	else	cj=j;
			if(ci+cj<=n/2+1)	cout<<"* ";	else cout<<"  ";
		}
		cout<<endl;
	}
	return 0;
}

