#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
void push( struct node **head,int data){
    struct node *new_node=new node;
    new_node->data=data;
    new_node->next=(*head);
    *head=new_node;

    cout<<"added "<<new_node->data<<endl;

}
void display(struct node *head){
    if(head==NULL)  {cout<<"EMPTY"; }
    cout<<head->data;
    while(head!=NULL){

    cout<<head->data<<endl;
    head=head->next;
    }
}
void top(struct node *head){
    cout<<head->data<<endl;
    return;
}
struct node*pop(struct node *head){
    if(head==NULL)  {cout<<"EMPTY"; return NULL;}
    struct node *t;
    t=head;
    head=head->next;
    return head;
}


int main()
{
    struct node *head=NULL;
    push(&head,9);
    push(&head,8);
    push(&head,7);
    push(&head,6);
    push(&head,5);
    push(&head,4);
    push(&head,3);
    push(&head,2);
    push(&head,1);
    while(head!=NULL){
        top(head);
        head=pop(head);
    }
   return 0;
}
