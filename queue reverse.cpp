#include<iostream>
#include<queue>
using namespace std;
void reverse(queue<int>& q){
   if(q.empty())   return;
   int k=q.front();
    q.pop();
    reverse(q);
    ///cout<<k<<" ";
    q.push(45);

}
int main(){
    queue<int> q;
    int n,k;    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        q.push(k);
    }

   reverse(q);

    for(int i=0;!q.empty();i++){
       cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"END";
}
