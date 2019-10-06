#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;
struct node
{
    int ID;
    string emp_name;

    struct node *next;
    struct node *prev;
};
void push(struct node** head, int ID,string emp_name)
{

    struct node* new_node = new node;


    new_node->ID = ID;
    new_node->emp_name=emp_name;
    new_node->next = (*head);
    new_node->prev = NULL;
    if ((*head) != NULL)
        (*head)->prev = new_node;
    (*head) = new_node;
    cout<<emp_name<<" added"<<endl;
}

struct node *delete_(struct node *head)
{
  struct node *temp =head;
  struct node *t;
  if(head->next==NULL)
  {
    free(head);
    head=NULL;
  }
  else
  {
     while(temp->next != NULL)
     {
        t=temp;
        temp=temp->next;
     }
     cout<<"the deleted ID is  "<<t->next->ID<<endl;
     free(t->next);
     t->next=NULL;
     t->prev=NULL;
  }
  return head;
}

void display(struct node* head)
{
    struct node* last;

    cout<<endl<<"Traversal in forward direction"<<endl;
    while (head != NULL) {
        cout<< head->ID<<"   "<<head->emp_name;
        last = head;
        head = head->next;
        cout<<endl;
    }
}
int main()
{
    int choice,ID;
    string emp_name;
    struct node* head = NULL;
    while (1)
    {
        cout<<endl<<"----------------------------"<<endl;
        cout<<endl<<"Information about Employes"<<endl;
        cout<<endl<<"----------------------------"<<endl;

        cout<<"1.Add at begining"<<endl;
        cout<<"2.Delete"<<endl;
        cout<<"3.Display all Employes"<<endl;

        cout<<"4.Quit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch ( choice )
        {

        case 1:
            cout<<"Enter the ID: ";
            cin>>ID;
            cout<<"Enter Employe name"<<endl;
            cin.clear();
            cin>>emp_name;


            push(&head,ID,emp_name);

            cout<<endl;
            break;
        case 2:
            head=delete_(head);
            cout<<endl;
            break;

        case 3:
            display(head);
            cout<<endl;
            break;


        case 4:
            return 0;
        default:
            cout<<"Wrong choice"<<endl;
        }
    }
    return 0;
}


