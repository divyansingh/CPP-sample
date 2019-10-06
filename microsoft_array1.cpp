#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MAX =10000000;
void set(ll *str,ll n,ll l){
    ll tmp=str[l+1],s[MAX];
    s[0]=str[l+r];
    for(ii i=1j=0,j;j<n;i++,i++) {
        if(i==(l-1))   j++;
        else s[i]=str[j];
    }
    for(ii i=0;i<n;i++) cout<<str[i]<<" ";
}




int main()
{
    ll n,l,str[max];
    cin>>n>>l;
    for(ii i=0;i<n;i++) cin>>str[i];
    alt(str,n,l);
    
    return 0;
}
