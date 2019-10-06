#include<iostream>
using namespace std;
void pattern1(int n,int i,int j){
    if(i>n)    return;
    cout<<"*"<<" ";
    j++;
    if(j>i) {
        i++,j=1;
        cout<<endl;
        }
    pattern1(n,i,j);
}
int main() {
    int n;  cin>>n;
    pattern1(n,1,1);
	return 0;
}
