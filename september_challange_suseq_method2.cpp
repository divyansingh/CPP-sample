#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MAX =10000000;
ll bit[MAX]={0};

ll bitseti(ll n){
    if (bit[n]) return bit[n];
    ll cnt=0;
    while(n){
       cnt+=1;
       n&=n-1;
    }
    bit[n]=cnt;
    return bit[n];
}
void printPowerSet(ll *set, ll size,ll k)
{
    ll pow_set_size = pow(2, size);
    ll counter, j,sum=1000000,sumi=0;
    for(counter = 0; counter < pow_set_size; counter++)
    {
        if(bitseti(counter)==k){
            int tmp=0;
            for(j = 0; j < size; j++)
            {
                if((counter & (1 << j)))
                tmp+=set[j];
            }
        if(tmp<sum){sum=tmp;sumi=1;}    else if(sum==tmp)   sumi++;
        }
    }
    cout<<sumi<<endl;
}


int main()
{
    int t;  cin>>t;
    while(t--){
        ll arr[100],n,k;   cin>>n>>k;
        for(ll i=0;i<n;i++)    cin>>arr[i];
        printPowerSet(arr, n,k);
    }
    return 0;
}
