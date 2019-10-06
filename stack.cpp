#include<iostream>
using namespace std;
class Node{
    int data;
    Node* next;
public:
    Node(int d){
            data=d;
            next=NULL;
    }
    friend class stack;
};
class stack{
    Node* head;
    int currentsize;
public:
    stack(){
        head=NULL;
        currentsize=0;
    }
    ~stack(){
        while(!isempty())   pop();
    }
    void push(int d){

        currentsize++;
        Node * newNode=new Node(d);
        newNode->next=head;
        head=newNode;

    }
    int pop(){
        if(head!=NULL){
        int d=head->data;
        currentsize--;
        Node*t=head;
        head=t->next;
        delete t;
        return d;
        }
        cout<<endl<<"EMpty";

    }
    int top()   const{                      ///does not writes data
        if(head!=NULL){
        return head->data;
        }

    }
    bool isempty(){
        if(head==NULL)  return true;
        return false;
    }
    int size(){
            return currentsize;
    }



};
int main(){
    stack S;
    S.push(5);
    S.push(4);
    S.push(3);
    S.push(2);
    S.push(1);
    cout<<S.top();
    cout<<S.pop();
    cout<<endl<<13%5;

}
