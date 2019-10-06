#include<iostream>
using namespace std;

struct node
{
    int info;
    struct node *next;
}*front,*rear,*temp,*front1;

int frontelement();
void enq(int data);
void deq();
void empty();
void display();
void create();
void queuesize();

int count = 0;

int  main()
{
    int no, ch, e;

    cout<<"\n 1 - Enque";
    cout<<"\n 2 - Deque";
    cout<<"\n 3 - Front element";
    cout<<"\n 4 - Empty";
    cout<<"\n 5 - Exit";
    cout<<"\n 6 - Display";
    cout<<"\n 7 - Queue size";
    create();
    while (1)
    {
        cout<<"\n Enter choice : ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Enter data : ";
            cin>>no;
            enq(no);
            break;
        case 2:
            deq();
            break;
        case 3:
            e = frontelement();
            if (e != 0)
                cout<<"Front element :  "<< e;
            else
                cout<<"\n No front element in Queue as queue is empty";
            break;
        case 4:
            empty();
            break;
        case 5:
            return 0;
        case 6:
            display();
            break;
        case 7:
            queuesize();
            break;

        default:
            cout<<"Wrong choice, Please enter correct choice  ";
            break;
        }
    }
    return 0;
}

void create()
{
    front = rear = NULL;
}
void queuesize()
{
    cout<<"\n Queue size : "<< count;
}

void display()
{
    front1 = front;

    if ((front1 == NULL) && (rear == NULL))
    {
        cout<<"Queue is empty";
        return;
    }
    while (front1 != rear)
    {
        cout<< front1->info<<"  ";
        front1 = front1->next;
    }
    if (front1 == rear)
        cout<< front1->info<<"  ";
}
void enq(int data)
{
    if (rear == NULL)
    {
        rear = new node;
        rear->next = NULL;
        rear->info = data;
        front = rear;
    }
    else
    {
        temp=new node;
        rear->next = temp;
        temp->info = data;
        temp->next = NULL;

        rear = temp;
    }
    count++;
}

void deq()
{
    front1 = front;

    if (front1 == NULL)
    {
        cout<<"\n Error: Trying to display elements from empty queue";
        return;
    }
    else
        if (front1->next != NULL)
        {
            front1 = front1->next;
            cout<<"\n Dequed value : "<< front->info;
            delete(front);
            front = front1;
        }
        else
        {
            cout<<"\n Dequed value :  "<< front->info;
            delete(front);
            front = NULL;
            rear = NULL;
        }
        count--;
}

int frontelement()
{
    if ((front != NULL) && (rear != NULL))
        return(front->info);
    else
        return 0;
}

void empty()
{
     if ((front == NULL) && (rear == NULL))
        cout<<"\n Queue empty";
    else
       cout<<"Queue not empty";
}
