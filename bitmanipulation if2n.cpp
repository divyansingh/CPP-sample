#include <iostream>
using namespace std;

int main()
{
    int t,s=0,n;  cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        if((n&(n-1))==0)    s++;
    }
    cout<<s;
    return 0;
}
