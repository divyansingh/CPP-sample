#include<iostream>
using namespace std;
int fibo(int n){
    if(n<=0) return 0;
    if(n==1) return 1;
    else
            return fibo(n-1)+fibo(n-2);

}
void print(int n){
    if (n<=0)   return ;
    else
            //cout<<n<<endl;  //in case of printing in reverse          FORWARD tracking
            print(n-1);
           cout<<n<<endl; //in case of printing in increasing ;         bavkward Tracking
}
int main()
{
    int n;  cin>>n;
    //print(n);
    cout<<fibo(n);
    return 0;
}
