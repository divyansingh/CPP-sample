#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;
struct Node
{
	string cname;
	struct Node *next;
};

/* Function to insert a node at the beginning of
a Circular linked list */
void push(struct Node **head, string cname)
{
	// Create a new node and make head as next
	// of it.
	struct Node *t = new Node;

	t->cname = cname;
	t->next = *head;

	/* If linked list is not NULL then set the
	next of last node */
	if (*head != NULL)
	{
		// Find the node before head and update
		// next of it.
		struct Node *temp = *head;
		while (temp->next != *head)
			temp = temp->next;
		temp->next = t;
	}
	else
		t->next = t; /*For the first node */

	*head= t;
}

void printList(struct Node *head)
{
	struct Node *temp = head;
	if (head != NULL)
	{
		do
		{
			cout<< temp->cname<<endl;
			temp = temp->next;
		}
		while (temp != head);
	}

	cout<<endl;
}
void DeleteLast(struct Node *head)
{
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

int main()
{

    int choice;
    string cname;
    struct Node* head = NULL;
    while (1)
    {
        cout<<endl<<"----------------------------"<<endl;
        cout<<endl<<"Information about Colleges"<<endl;
        cout<<endl<<"----------------------------"<<endl;

        cout<<"1.Add at begining"<<endl;
        cout<<"2.Delete"<<endl;
        cout<<"3.Display all Colleges"<<endl;

        cout<<"4.Quit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch ( choice )
        {

        case 1:
            cout<<"Enter college name   :  ";
            cin.clear();
            cin>>cname;

            push(&head,cname);

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
            return 0;
        default:
            cout<<"Wrong choice"<<endl;
        }
    }

    return 0;
}
