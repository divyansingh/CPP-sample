#include <iostream>
#include <queue>
using namespace std;


class Treenode{
public:
    int data;
    Treenode ** children;
    int child_count;
    Treenode (int d){
        data=d;
        children=NULL;
        child_count=0;

    }

};
class GenericTree{
private:
    Treenode *root;

    Treenode* takeInput(){
        int d,c;
        cin>>d;
        Treenode * n=new Treenode(d);
        cin>>c;
        n->child_count=c;
        if (c>0){
            n->children=new Treenode * [c];
            for (int i=0;i<c;i++){
                n->children[i]=takeInput();
            }
        }
        return n;
    }
     void get2Largest (Treenode * n,int &l,int &l2){
        if (n==NULL) return;
        if(n->data>l)   {
            l2=l;
            l=n->data;
        }
        else
            if(n->data<l&&n->data>l2)   l2=n->data;

        for (int i=0;i<n->child_count;i++){
            get2Largest (n->children[i],l,l2);
        }
    }

public:
    void FillTree(){
        root=takeInput();
    }
    void Print2Largest(){
        int l=0,l2=0;
        get2Largest(root,l,l2);
        cout<<endl<<l2;
    }

};
int main(){
    GenericTree gt;
    gt.FillTree();
    gt.Print2Largest();


}
