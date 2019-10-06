#include<iostream>
using namespace std;
void print(int a[][100],int r,int c ,int r1,int c1){
    if(r1>r||c1>c){

        return;
    }
    cout<<a[r1][c1]<<", ";
    print(a,r,c,r1+1,c);
   // print(a,r,c,r1,c+1);
}
int main() {
    int a[100][100],r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>a[i][j];
    print(a,r,c,0,0);
    cout<<"END";
	return 0;
}
