#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=0)    return 1;
    return n*factorial(n-1);
}
void printinc(int n){
    if(n==0)    return;
    printinc(n-1);
    cout<<n<<endl;
}
void printdec(int n){
    if(n==0)    return;
    cout<<n<<endl;
    printdec(n-1);


}
bool issorted(int a[],int n){
    if(n==1)    return true;
    return a[1]>=a[0]&&issorted(a+1,n-1);
}
int arraysum(int a[],int n){

    if(n==1)    return a[0];
    return (a[n-1]+arraysum(a,n-1));


}
void selsort(int a[],int n){
    if(n==1)    return ;
    int sm=0,i;
    for(i=0;i<n;i++ ){
        if(a[i]<a[sm]){
            sm=i;

        }
    }
    swap(a[0],a[sm]);
    selsort(a+1,n-1);
}
void numtd(int n){
    if(n==0)    return ;
    string ch[100]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    numtd(n/10);
    cout<<ch[n%10]<<" ";
}
int superpoer(int a,int n){
    if(n==0)    return 1;
    int hp=superpoer(a,n/2);
    if(n%2==0)  return hp*hp;
      return a*hp*hp;
}
int fibo(int n){
    if(n==0)    return 0;
    if(n==1)    return 1;
    return fibo(n-1)+fibo(n-2);
}
bool check7(int a[],int n){
    if(n==0) return false;
    return (a[0]==7)||(check7(a+1,n-1));

}
int check71(int a[],int s,int n){
    if(s>=n)    return -1;
    if(a[s]==7) return s;
    return check71(a,s+1,n);

}
int check72(int a[],int n,int c)
{
    if(n==0)    return -1;
    if(a[0]==7) return c;
    return check72(a+1,n-1,c+1);
}
int recheck71(int a[],int n){
    if(n==0)    return -1;
    if(a[n-1]==7) return n-1;
    return recheck71(a,n-1);
}
int check73(int a[],int n){
    if(n==0)    return -1;
    if(a[0]==7) return 0;
    int r=check73(a+1,n-1);
    if(r==-1)   return r;
    else return r+1;


}
void recheck711(int a[],int s,int n){
    if(s>=n)    return;
    if(a[s]==7) cout<<s<<" ";
    recheck711(a,s+1,n);
}

int main(){
   //int n;  cin>>n;
    //cout<<factorial(n);
    //printinc(n);
    //printdec(n);
   int a[5]={9,7,1,7,7};
    //cout<<issorted(a,5);
    //cout<<arraysum(a,5);
    //selsort(a,5);
    //cout<<fibo(n);
    ///for(int i=0;i<5;i++ )   cout<<a[i]<<" ";
    //numtd(n);
    //cout<<superpoer(a,n);
    //cout<<check7(a,5);

    cout<<check71(a,0,5)<<endl;
    cout<<check72(a,5,0)<<endl;
    cout<<check73(a,5)<<endl;
    cout<<recheck71(a,5)<<endl;
    recheck711(a,0,5);
    return 0;

}
