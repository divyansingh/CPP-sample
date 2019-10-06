#include<iostream>
using namespace std;
void counthi(char a[],int s,char o1[],int p1,char o2[],int p2,int &cnt){
    if(a[s]=='\0'){
        o1[p1]='\0';
        o2[p2]='\0';
        return;
    }
    if(a[s]=='h'&&a[s+1]=='i'){
        cnt+=1;
        o2[p2++]='b';
        o2[p2++]='y';
        o2[p2++]='e';
        counthi(a,s+2,o1,p1,o2,p2,cnt);
    }
    else{
        o1[p1++]=a[s];
        o2[p2++]=a[s];
        counthi(a,s+1,o1,p1,o2,p2,cnt);
    }

}
int main(){
    int cnt=0;
    char a[100],o1[100],o2[100];
    cin.getline(a,100);
    counthi(a,0,o1,0,o2,0,cnt);
    cout<<cnt<<endl<<o1<<endl<<o2;
    return 0;
}
