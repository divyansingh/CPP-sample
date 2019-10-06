#include<iostream>
using namespace std;
int main(){
    int n;  cin>>n;
    int a[100][100];
    int rs=0,cs=0,re=n-1,ce=n-1,flag,p=0;
    while(cs<=ce&&rs<=re){

        flag=p%2;

        for(int i=cs;i<=ce;i++)   a[rs][i]=flag;
        rs++;
        for(int i=rs;i<=re;i++)   a[i][ce]=flag;
        ce--;
        if(rs<=re){
        for(int i=ce;i>=cs;i--)  a[re][i]=flag;
        re--;
        }
        if(cs<=ce){
        for(int i=re;i>=rs;i--)    a[i][cs]=flag;
        cs++;
        }
        p++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }


    return 0;
}
