#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MAX =10000000;
ll bit[MAX]={0};
ll tmp[MAX];
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
bool chk(){
    for(int i=0;i<MAX;i++)  if(tmp[i]>1)    return false;
    return true;
}

void printPowerSet(ll *set, ll size,ll k)
{
    ll pow_set_size = pow(2, size);
    ll counter, j,sumi=0;
    for(counter = 0; counter < pow_set_size; counter++)
    {
        if(bitseti(counter)<=k){
            for(int i=0;i<MAX;i++)  tmp[i]=0;
            for(j = 0; j < size; j++)
            {
                if((counter & (1 << j))){
                        tmp[set[j]]++;
                       // cout<<set[j]<<" ";
                    }
            }
           if(chk())  sumi++;
            //cout<<"                         "<<bitseti(counter)<<"  "<<accumulate(tmp,tmp+MAX,0)<<endl;

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
