#include <iostream>
#include <queue>
using namespace std;

class Treenode
{
public:
    int data;
    Treenode ** children;
    int child_count;
    Treenode (int d)
    {
        data=d;
        children=NULL;
        child_count=0;

    }

};

class GenericTree
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
 _       cin>>c;
        n->child_count=c;

        if (c>0)
        {
            n->children=new Treenode * [c];
            for (int i=0; i<c; i++)
            {
                n->children[i]=takeInput();
            }
        }
        return n;
    }

    void PreOrder (Treenode * n)
    {
        if (n==NULL) return;
        cout<<n->data<<", ";

        for (int i=0; i<n->child_count; i++)
        {
            PreOrder (n->children[i]);
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
                tn->children=new Treenode *[c];
                for (int i=0; i<c; i++)
                {
                    cout<<"enter data for child#"<<i<<" of "<<tn->data<<":";
                    cin>>data;
                    tn->children[i]=new Treenode (data);
                    q.push(tn->children[i]);
                }
            }

        }
        return n;
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
                for (int i=0; i<c; i++)
                {
                    q.push(tn->children[i]);
                }
            }
            else
            {
                cout<<endl;
                if (!q.empty()) q.push(NULL);
            }
        }
    }
    int getLargest (Treenode* tn)
    {
        int Largest= tn->data;
        for (int i=0; i<tn->child_count; i++)
        {
            int childLargest=getLargest(tn->children[i]);
            if (childLargest>Largest) Largest=childLargest;
        }
        return Largest;
    }

    void PreOrderwithLevel (Treenode * n,int lvl)
    {
        if (n==NULL) return;
        cout<<n->data<<"("<<lvl<<"), ";

        for (int i=0; i<n->child_count; i++)
        {
            PreOrderwithLevel (n->children[i],lvl+1);
        }
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

    void PrintLargest()
    {
        cout<<getLargest(root)<<endl;
    }

    void PrintPreOrderWithLevel()
    {
        PreOrderwithLevel (root,0);
    }
};


int main()
{
    GenericTree gt;
    //gt.FillTree();
    //gt.PrintPreOrder();

    gt.FillTree();
    //gt.PrintLevelOrder();
    //gt.PrintLargest();
    gt.PrintPreOrderWithLevel();
}
