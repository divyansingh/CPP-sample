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
            for (int i=0;i<c;i++)
                n->children[i]=takeInput();
            }
        return n;
    }
     void getsum (Treenode * n,int &sum,int k,int lvl){
        if (n==NULL) return;
        if(k==lvl)   sum+=n->data;
        for (int i=0;i<n->child_count;i++)
            getsum (n->children[i],sum,k,lvl+1);
    }
public:
    void FillTree(){
        root=takeInput();
    }
    void printsumatK(int k){
        int sum=0;
        getsum(root,sum,k,0);
        cout<<endl<<sum;
    }
};
int main(){
    GenericTree gt;
    gt.FillTree();
    int k; cin>>k;
    gt.printsumatK(k);
}
