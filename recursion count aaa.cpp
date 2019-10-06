#include<iostream>
using namespace std;
void countaaa1(char a[],int s,int &n){
    if(a[s]=='\0') return ;
     if(a[s]=='a'&&a[s+1]=='a'&&a[s+2]=='a'){
        n+=1;
        countaaa1(a,s+1,n);
         }
  }
void countaaa2(char a[],int s,int &n){
    if(a[s]=='\0')  return ;
    if(a[s]=='a'&&a[s+1]=='a'&&a[s+2]=='a')   {
            n+=1;
            countaaa2(a,s+3,n);
    }

}
int main(){
    int n1=0,n2=0;
    char a[100];
    cin.getline(a,100);
    countaaa1(a,0,n1);countaaa2(a,0,n2);
    cout<<n1<<endl<<n2;
    return 0;
}
