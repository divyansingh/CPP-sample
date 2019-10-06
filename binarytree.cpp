#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class Treenode
{
public:
    int data;       
    Treenode *left;
    Treenode *right;
    int child_count;
    Treenode (int d)
    {
        data =d;
        left=NULL;
        right=NULL;
        child_count=0;
    }
};

class Binarytree
{
private:
    Treenode *root;
    Treenode* takeInput()
    {
        int d,c;
        cout<<"Enter the node data ";
        cin>>d;
        Treenode * n=new Treenode(d);

        cout<<"Enter the number of children for "<<d<<":";
        cin>>c;
        n->child_count=c;

        if (c>0)
        {

            switch(c)
            {

            case 1:
                n->left=takeInput();

            case 2:

                n->left=takeInput();
                n->right=takeInput();

            }
        }
        return n;
    }
    void PreOrder (Treenode * n)
    {
        if (n==NULL) return;
        cout<<n->data<<", ";

        int c=n->child_count;
        if (c>0)
        {

            switch(c)
            {

            case 1:
                PreOrder(n->left) ;

            case 2:

                PreOrder(n->left);
                PreOrder(n->right);

            }
        }
    }
    void LevelOrder(Treenode * n)
    {
        queue<Treenode*> q;
        q.push(n);
        q.push(NULL);

        while (!q.empty())
        {
            Treenode * tn=q.front();
            q.pop();

            if (tn!=NULL)
            {
                cout<<tn->data<<" ";

                int c=tn->child_count;
                if (c>0)
                {

                    switch(c)
                    {

                    case 1:

                        q.push(tn->left);

                    case 2:

                        q.push(tn->left);
                        q.push(tn->right);

                    }

                }
                else
                {
                    cout<<endl;
                    if (!q.empty()) q.push(NULL);
                }
            }
        }
    }
    Treenode * FillTreeLO()
    {
        queue<Treenode*> q;
        int data;
        cout<<"Enter the data:";
        cin>>data;

        Treenode* n= new Treenode (data);
        q.push(n);

        while (!q.empty())
        {
            Treenode * tn=q.front();
            q.pop();

            cout<<"Enter the # of children for Node-" <<tn->data<<":";
            int c;
            cin>>c;
            tn->child_count=c;
            if (c>0)
            {

                switch(c)
                {

                case 1:
                    cout<<"enter data for child# of "<<tn->data<<":";
                    cin>>data;

                    q.push(tn->left);


                case 2:

                    q.push(tn->left);
                    q.push(tn->right);

                }

            }
        }


        return n;
    }

public:
    void FillTree()
    {
        root=takeInput();
    }
    void PrintPreOrder()
    {
        PreOrder (root);
    }
    void FillTreeLOrder()
    {
        root=FillTreeLO();
    }
    void PrintLevelOrder()
    {
        LevelOrder (root);
    }

    pair<int,int> Diameter(Treenode *rt){
        pair<int,int>p;
        if(rt==NULL){
            p.first=0; p.second=0;
            return p;
        }
        pair<int,int>   pl=Diameter(rt->left);
        pair<int,int>   pr=Diameter(rt->right);
        p.first=max(pl.first,pr.first)+1;
        p.second=max(p.first,max(pl.first,pr.first))+1;
        return p;
    }
    void Diameter(){
        pair<int,int>p=Diameter(root);
        cout<<p.second<<endl;
    }
    void printPREorderiterative(){
        cout<<"PreOrder iterative"<<endl;
        stack<Treenode*> stk;
        if(root==NULL) return;
        stk.push(root);
        while(!stk.empty()){
            Treenode*  temp=stk.top();
            stk.pop();
            cout<<temp->data<<" ";
            if(temp->right!=NULL)   stk.push(temp->right);
            if(temp->left!=NULL)    stk.push(temp->>left);
        }
    }
    Treenode* BuildTree_pre_in(int inorder[],int infm,int into,int preorder[],int prefm,int preto){

    }
    void BuildTree_pre_in(){
        int inorder[];
        int preorder[];
        BuildTree_pre_in(inorder,0,5,preorder,0,5);

    }

};
int main()
{
    Binarytree gt;
    gt.FillTree();
    ///gt.FillTreeLOrder();
    /// gt.PrintPreOrder();
    gt.PrintLevelOrder();
    gt.Diameter();
}
