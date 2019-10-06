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
     void justlarger (Treenode * n,int &l,int n1){
        if (n==NULL) return;
        int temp=(n->data)-n1;
        if(temp>0&&temp<l)   l=n->data;;

        for (int i=0;i<n->child_count;i++){
            justlarger (n->children[i],l,n1);
        }
    }
public:
    void FillTree(){
        root=takeInput();
    }
    void jl(int n){
        int l=100000;
        justlarger(root,l,n);
        cout<<endl<<l;
    }
};
int main(){
    GenericTree gt;
    gt.FillTree();
    int n;cin>>n;
    gt.jl(n);
}

