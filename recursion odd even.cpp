#include<iostream>
using namespace std;

void printo(int n){
    if(n<=1)   {
            cout<<1<<endl;
            return ;

    }
    cout<<n<<endl;
    printo(n-2);
    cout<<n-1<<endl;
}
int main() {
    int n;  cin>>n;
    if(n%2==0)  printo(n-1);
    else printo(n);
	return 0;
}
