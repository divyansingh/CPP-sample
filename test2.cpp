#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;
struct Node
{
    int rno;
    string cname;
    struct Node *next;
};

int size=0;
void push(Node** current, int rno, string cname,int pos)
{

    if (pos < 1 || pos > size + 1)
        cout << "Invalid postion!" << endl;
    else {

        while (pos--) {

            if (pos == 0) {

                Node* temp = new Node;
                temp->rno=rno;
                temp->cname = cname;
                temp->next=NULL;

                temp->next = *current;

                *current = temp;
            }
            else
                    current = &(*current)->next;
            }
        size++;
    }
}
void printList(struct Node *head){

    struct Node *temp = head;
    if (head != NULL)
    {
        do
        {
        cout<<temp->rno<<"  "<< temp->cname<<endl;
        temp = temp->next;
        }
        while (temp != head);
    }
    cout<<endl;
}
void DeleteLast(struct Node *head)
{
    if(head==NULL){
        cout<<"Linked List is empty"<<endl;
        return;
    }
    struct Node *t ,*temp;
    t=head;
    while(t->next!=head)
    {
    temp=t;
    t=t->next;
    }
    temp->next=head;
    cout<<endl<<" The deleted node is : "<<t->cname<<endl;
    free(t);
}
void Reverse(Node* current)
    {
        Node *head=current;
        Node *prev = NULL, *next = NULL;
        while (current != NULL)
        {

            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

int main()
{
    int choice,rno,pos;
    string cname;
    struct Node* head = NULL;
    while (1)
    {
    cout<<endl<<"----------------------------"<<endl;
    cout<<endl<<"Information about Students"<<endl;
    cout<<endl<<"----------------------------"<<endl;
    cout<<"1.Add at begining"<<endl;
    cout<<"2.Delete"<<endl;
    cout<<"3.Display all Student details"<<endl;
    cout<<"4.Reverse the linked list"<<endl;
    cout<<"5.Quit"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    switch ( choice )
        {
        case 1:
        cout<<"Enter posotion:-   ";
        cin>>pos;
        cout<<"Enter roll no, name : ";
        cin>>rno;
        cin.clear();
        cin>>cname;
        push(&head,rno,cname,pos);
        cout<<endl;
        break;
        case 2:
        DeleteLast(head);
        cout<<endl;
        break;
        case 3:
        printList(head);
        cout<<endl;
        break;
         case 4:
        Reverse(head);
        cout<<endl;
        break;
        case 5:
        return 0;
        default:
        cout<<"Wrong choice"<<endl;
        }
    }
return 0;
}
