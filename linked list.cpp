#include<iostream>
using namespace std;
template<class anyclass>
class Node
{
public:
    anyclass data;
    Node* next;
    Node (anyclass d):data(d),next(NULL) { }                /// `NEW concept\\\

};
template<class anyclass>
class Linkedlist
{
private:
    Node<anyclass>* head;
public:
    Linkedlist()
    {
        head=NULL;

    }
    void InsertAtFront(anyclass d)
    {
        Node<anyclass> *N=new Node<anyclass> (d);
        ///*N.next=head;
        N->next=head;
        head=N;
    }

    void InsertAt(int i, anyclass d)
    {
        int t=1;
        if(i==0)
        {
            InsertAtFront(d);
            return;
        }
        Node<anyclass> *N=head;
        Node<anyclass> *N1=new Node<anyclass> (d);
        while(N!=NULL&&t<i)
        {
            t++;
            N=N->next;
        }
        N1->next=N->next;
        N->next=N1;

    }
    void PrintList()
    {
        Node<anyclass> *N=head;
        while(N!=NULL)
        {
            cout<<N->data<<" -> ";
            N=N->next;
        }
    }
    int Lenght()
    {
        int l=0;
        Node<anyclass> *N=head;
        while(N!=NULL)
        {
            l++;
            N=N->next;
        }
        return l;
    }
    void removefromend()
    {
        Node<anyclass> *N=head;
        while(N->next->next!=NULL)
        {
            N=N->next->next;
        }
        N=NULL;
    }
    void removefromfront()
    {
        if(head==NULL)  return;
        Node<anyclass> *temp=head;
        head=head->next;
        delete temp;

    }
    void InsertAtEnd(anyclass d)
    {
        Node<anyclass> *N=head;
        while(N->next!=NULL)
        {
            N=N->next;
        }
        Node<anyclass> *N1=new Node<anyclass> (d);
        N->next=N1;
        N1->next=NULL;
    }
    void Removefrom(int i)
    {
        Node<anyclass> *N=head;
        int t=1;
        while(N->next!=NULL&&t<i)
        {
            t++;
            N= N->next;
        }
        N->next=N->next->next;
    }
    void midofLL()
    {
        Node<anyclass> *N1=head;
        Node<anyclass> *N=head;
        while(N1!=NULL&&N1->next!=NULL)
        {
            N1=N1->next->next;
            N=N->next;
        }
        cout<<endl<<N->data<<endl;
    }
    void Kfromlast(int k)
    {
        int t=1;
        Node<anyclass> *N=head;
        Node<anyclass> *N1=head;
        while(t<=k&&N->next!=NULL)
        {
            N=N->next;
            t++;
        }

        while(N!=NULL)
        {
            N1=N1->next;
            N=N->next;
        }
        cout<<endl<<N1->data<<endl;
    }
    void BubbleSort()
    {
        int l=Lenght();
        for(int i=0; i<l; i++)
        {
            Node<anyclass>  *cur=head;
            Node<anyclass>  *prev=NULL;
            while(cur!=NULL&&cur->next!=NULL)
            {
                Node<anyclass>   *Next=cur->next;
                if(cur->data>Next->data)
                {
                    ///swap nodes
                    if(prev!=NULL) prev->next=Next;
                    else head=Next;

                    cur->next=Next->next;
                    Next->next=cur;
                    prev=cur;
                    cur=Next;
                }
                prev=cur;
                cur=Next;
            }
        }
    }
    Node<anyclass> *Merge(Node<anyclass> *a,Node<anyclass>*b)
    {
        if(a==NULL) return b;
        if(b==NULL) return a;
        Node<anyclass> *newhead;
        if(a->data<b->data)
        {
            newhead=a;
            newhead->next=Merge(a->next,b);
        }
        else
        {
            newhead=b;
            newhead->next=Merge(a,b->next);
        }
        return newhead;
    }
    Node<anyclass> *Mid(Node<anyclass> *root)
    {
        if(root==NULL||root->next==NULL)    return root;
        Node<anyclass> *N1=root->next;                                  ///mid would not work in case of 2 element
        Node<anyclass> *N=root;
        while(N1!=NULL&&N1->next!=NULL)
        {
            N1=N1->next->next;
            N=N->next;
        }
        return N;
    }
    Node<anyclass>  *MergeSortRec(Node<anyclass> *root)
    {
        if(root==NULL||root->next==NULL)    return root;
        Node<anyclass> *Md=Mid(root);
        Node<anyclass>  *a=root;
        Node<anyclass>  *b=Md->next;
        Md->next=NULL;
        a=MergeSortRec(a);
        b=MergeSortRec(b);
        return Merge(a,b);
    }
    void MergeSort()
    {
        head=MergeSortRec(head);
    }
};
int main()
{
    Linkedlist<int> LL;
    LL.InsertAtFront(1);
    LL.InsertAtFront(2);
    LL.InsertAtFront(3);
    LL.InsertAtFront(4);
    LL.InsertAtFront(5);
    LL.InsertAtEnd(0);

    LL.InsertAtEnd(-1);
    LL.InsertAtEnd(-2);
    LL.InsertAt(3,89);
    /* LL.PrintList();cout<<endl;
    ///  LL.removefromend();

     LL.PrintList();cout<<endl;
     LL.midofLL();
    LL.Kfromlast(2);*/
    LL.MergeSort();
    ///LL.BubbleSort();
    LL.PrintList();
    cout<<endl;
    cout<<endl<<LL.Lenght();
}
