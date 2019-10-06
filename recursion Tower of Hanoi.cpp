#include<iostream>
using namespace std;
void TOH(int n,char from,char to,char usin){
    if (n==0)   return ;
    TOH(n-1,from,usin,to);
    cout<<"Shifting Ring "<<n<<" from "<<from <<" to "<<to<<endl;
    TOH(n-1,usin,to,from);
}

int main(){
    int n;  cin>>n;
    TOH( n,'A','B','C');
    return 0;
}
