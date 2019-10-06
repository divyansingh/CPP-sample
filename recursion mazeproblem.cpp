#include <iostream>
using namespace std;
void printm(char a[][1000],int R,int C){
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
           cout<<a[i][j]<<" ";
           // if(a[i][j]=='1')  cout<<1<<" ";
            //else cout<<0<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return;
}
void brc(char m[][1000],int R,int C,int r1,int c1,int &cnt){
    m[r1][c1]='1';
    if(r1==R-1&&c1==C-1&&cnt<1){
        printm(m, R, C);
        cnt+=1;
        return;
    }
    if(c1<C&&m[r1][c1]!='X')   brc(m,R,C,r1,c1+1,cnt);
    if(r1<R&&m[r1][c1]!='X') brc(m,R,C,r1+1,c1,cnt);

    m[r1][c1]='O';
}
int main() {
    int R,C,cnt=0;
    char m[1000][1000];
    cin>>R>>C;
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
                m[i][j]=cin.get();
    brc(m,R,C,0,0,cnt);
    return 0;
}
