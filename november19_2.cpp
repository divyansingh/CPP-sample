#include <bits/stdc++.h>
using namespace std;
int ser[200];

void make_ser(){
    ser[0]=0;ser[1]=0;ser[2]=1;
    for(int i=3;i<150;i++){
        int f=0;
        for( int j=i-2;(j>0)&&f!=1;j--){
            if(ser[j]==ser[i-1]) { 
                            ser[i]=i-1-j;
                            f=1;
                            //cout<<i<<endl;
                            
             }
        
        }if(f==0)   ser[i]=0;
    }
    
}
int main() {
    make_ser();
	int t;  cin>>t;
	while(t--){
	    int n;  cin>>n;
	    int t=ser[n-1],sum=0;
	    for(int i=0;i<n;i++) if(t==ser[i])  sum++;
	    cout<<sum<<endl;
	}
	return 0;
}
