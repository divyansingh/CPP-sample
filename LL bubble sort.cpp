#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node (int  d):data(d),next(NULL){ }
};
class Linkedlist{
private:
    Node * head;
public:
    Linkedlist(){
        head=NULL;
        }
     void InsertAtFront(int d){
            Node *N=new Node (d);
            N->next=head;
            head=N;
        }
        int Lenght(){
            int l=0;
            Node *N=head;
            while(N!=NULL) {l++;
            N=N->next;
        }
        return l;
        }


};
int main(){
        Linkedlist LL;
        int n;  cin>>n;
        while(n!=-1)   {
        LL.InsertAtFront(n);
        cin>>n;
        }
        int k;  cin>>k;
        int j=LL.Lenght()-k+1;
        LL.Kfromlast(j);
    return 0;

}
