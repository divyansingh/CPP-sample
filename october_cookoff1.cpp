#include<bits/stdc++.h>
using namespace std;
bool comp(int a, int b) 
{ 
	return (a < b); 
} 

int main(){
    int t ; cin>>t;
    while(t--){
        int n,a[40],min=200,max=-1;    cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            max=std::max(a[i],max,comp);
            min=std::min(a[i],min,comp);
        }
        bool tmax=true,tmin=true;
        for(int i=0;i<n;i++){
            if(a[i]==max&&tmax) {  cout<<max<<" ";tmax=false;}
            if(a[i]==min&&tmin)  { cout<<min<<" ";tmin=false;}
        }
        
        cout<<endl;
    }
    return 0;
}
