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
     void similar (Treenode * n1,Treenode *n2,bool &f){
        if (n1==NULL&&n2==NULL) return;
        if(n1->data==n2->data){
            if(n1->child_count==n2->child_count)
                for (int i=0;i<n1->child_count;i++)
                    similar (n1->children[i],n2->children[i],f);
        }
        else {
                f=false;
                return;
            }
    }
public:
    void FillTree(){
        root=takeInput();
    }
    void issimilar(GenericTree G){
        bool f=true;
        similar(root,G.root,f);
        if(f) cout<<"true";   else cout<<"false";

    }
};
int main(){
    GenericTree g1,g2;
    g1.FillTree();
    g2.FillTree();
    g1.issimilar(g2);
}
