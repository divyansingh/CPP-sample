#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll two[100]={0};
bool cake(ll n){
    ll ten=0;
    while(!(n%10)){
       
       n/=10;
        ten++;
    }
    
    for(ll i=0;i<55;i++){
        if(two[i]==n){
            if(ten>=i)  return true; else return false;
        }
        if(two[i]>n)    return false;
    }
    return false;
}
int main(){
    ll t ; cin>>t;
    ll temp=1;
    for(ll i=0;i<55;i++){ 
        two[i]=temp;
        temp*=2;
    }
    
   while(t--){
       ll n;    cin>>n;
       if(cake(n))  cout<<"Yes"; else cout<<"No";
       cout<<endl;
   }
    
    return 0;
}
