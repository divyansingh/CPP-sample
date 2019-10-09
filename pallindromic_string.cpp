#include <iostream>
#include<cstring>
using namespace std;
bool ispallindrome(char a[],int n){
    if(n<=1)    return true;
    return (a[0]==a[n-1]&&ispallindrome(a+1,n-2));
}
int main()
{
    char a[1000];
    cin.getline(a,1000);
    if(ispallindrome(a,strlen(a)))  cout<<"YES";
        else    cout<<"NO";
    return 0;
}
