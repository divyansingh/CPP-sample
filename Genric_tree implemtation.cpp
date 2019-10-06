#include<iostream.h>
#include<queue.h>
#include<stack.h>

using namespace std;
class Treenode{
public:
    int data;
    Treenode **children;
    int child_count;
    Treenode(int d){
        data=d;
        children=NULL;
        child_count=0
        ;
    }
};

class GenericTree{
private:
        Treenode *root;

        void preorder(Treenode *n){
             if(n==NULL) return;
             cout<<n->data<<",";
             for(int i=0;i<n->child_count;i++){
                preorder(n->children[i]);
             }

        }
         void preorderwithlevel(Treenode *n,int lvl){
             if(n==NULL) return;
             cout<<n->data<<"("<<lvl<<")"<<"  ,  ";
             for(int i=0;i<n->child_count;i++){
                preorderwithlevel(n->children[i],lvl+1);
             }

        }

public:
    Treenode* takeinput(){
        int d,c;
        cout<<"Enter the node data  ";
        cin>>d;
        Treenode *n=new Treenode(d);
        cout<<"Enter the number of children for "<<d<<endl;
        cin>>c;
        n->child_count=c;
            if(c>0){
                n->children=new Treenode *[c];
                for(int i=0;i<c;i++){
                    n->children[i]=takeinput();
                }
            }
        return n;
    }
    Treenode * filltreeLO(){
        queue <Treenode*> q;
        int data;
        cout<<"enter data  ";
        cin>>data;
        Treenode *n=new Treenode(data);
        q.push(n);
        while(!q.empty()){
            Treenode *tn=q.front();
            q.pop();
            cout<<"  enter the # of children for node - "<<tn->data<<" = ";
            int c;cin>>c;
            tn->child_count=c;
            if(c>0){
                tn->children=new Treenode *[c];
                for(int i=0;i<c;i++){
                    cout<<"       eNTER child # "<<i<<" of "<<tn->data<<" = ";
                    cin>>data;
                    tn->children[i]=new Treenode(data);
                    q.push(tn->children[i]);
                }
            }

        }
    }
   void  lorder(Treenode *n){
        queue <Treenode*> q;
        int data;
        q.push(n);
        q.push(NULL);
        while(!q.empty()){
            Treenode *tn=q.front();
            q.pop();
            if(tn!=NULL){    cout<<tn->data<<" ";
            int c=tn->child_count;
            for(int i=0;i<c;i++){
                   q.push(tn->children[i]);
                }

        }
        else {
                cout<<endl;
                if(!q.empty()) q.push(NULL);
             }
        }
    }
    int getlargest(Treenode *tn){
        int largest=tn->data;
        for(int i=0;i<tn->child_count;i++){


        }
    }
    void printpreorderwithlevel(int lvl){
        preorderwithlevel(root,0);
    }
    void Filltree(){
            root=takeinput();
        }

    void FilltreeLorder(){
            root=filltreeLO();
    }

    void PrintPreOrder(){
        preorder(root);

    }
    void printlorder(){
        lorder(root);
    }
    void printlargest(){
        cout<<getlargest(root);
    }
};
int main(){
    GenericTree gt;
    gt.Filltree();

    ///gt.FilltreeLorder();
    //gt.PrintPreOrder();
    gt.printpreorderwithlevel(3);
   /// gt.printlorder();
}
