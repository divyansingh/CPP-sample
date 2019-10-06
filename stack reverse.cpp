#include<iostream>
#include<stack>
using namespace std;
void reverse(stack <int>&s){
    if(s.empty())   return;
    int t=s.top();
    s.pop();
    reverse(s);
    s.push(t);

}
int main(){
    int n,k;cin>>n;
    stack<int> s,t;
    for(int i=0;i<n;i++){
            cin>>k;
            s.push(k); }

    for(int i=0;i<n;i++){
       t.push(s.top());
        s.pop();
    }
    reverse(t);
    s=t;
    for(int i=0;i<n;i++){
        cout<<s.top()<<endl;
        s.pop();
    }

}
