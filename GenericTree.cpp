#include<iostream>
#include<queue>
using namespace std;
class Treenode{
public:
    int data;
    Treenode **children;
    int child_count;
    Treenode (int d){
        data=d;
        children=NULL;
        child_count=0;
    }
};
class MaxOutput{
public:
    Treenode *node;
    int sum;
    int maxsum;
};
class GenericTree{
private:
    Treenode *root;
    Treenode* takeInput(){
        int d,c;
        cout<<"Enter the node data ";
        cin>>d;
        Treenode * n=new Treenode(d);

        cout<<"Enter the number of children for "<<d<<" : ";
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

    void PreOrder (Treenode * n){
        if (n==NULL) return;
        cout<<n->data<<", ";

        for (int i=0;i<n->child_count;i++){
            PreOrder (n->children[i]);
        }
    }
    Treenode * FillTreeLO(){
        queue<Treenode*> q;
        int data;
        cout<<"Enter the data:";
        cin>>data;

        Treenode* n= new Treenode (data);
        q.push(n);

        while (!q.empty()){
            Treenode * tn=q.front();
            q.pop();

            cout<<"Enter the # of children for Node-" <<tn->data<<":";
            int c; cin>>c;
            tn->child_count=c;
            if (c>0){
                tn->children=new Treenode *[c];
                for (int i=0;i<c;i++){
                    cout<<"enter data for child#"<<i<<" of "<<tn->data<<":";
                     cin>>data;
                    tn->children[i]=new Treenode (data);
                    q.push(tn->children[i]);
                }
            }

        }
        return n;
    }

    void LevelOrder(Treenode * n){
        queue<Treenode*> q;
        q.push(n);q.push(NULL);

        while (!q.empty()){
            Treenode * tn=q.front();
            q.pop();

            if (tn!=NULL){
                cout<<tn->data<<" ";

                int c=tn->child_count;

                for (int i=0;i<c;i++){
                    q.push(tn->children[i]);
                }
            }
            else {
                cout<<endl;
                if (!q.empty()) q.push(NULL);
            }
        }
    }
    int getLargest (Treenode* tn){
        int Largest= tn->data;
        for (int i=0;i<tn->child_count;i++){
            int childLargest=getLargest(tn->children[i]);
            if (childLargest>Largest) Largest=childLargest;
        }
        return Largest;
    }

    void PreOrderwithLevel (Treenode * n,int lvl){
        if (n==NULL) return;
        cout<<n->data<<"("<<lvl<<"), ";

        for (int i=0;i<n->child_count;i++){
            PreOrderwithLevel (n->children[i],lvl+1);
        }
    }
    int getheight(Treenode *tn){
        if(tn==NULL)    return 0;
        int h=0,ch;
            for(int i=0;i<tn->child_count;i++){
                ch=getheight(tn->children[i]);
                if(ch>h) h=ch;
                return h+1;
            }
    }
    int getcount(Treenode *tn){
        if(tn==NULL)    return 0;
        int cnt=1;
        for(int i=0;i<tn->child_count;i++){
            cnt+=getcount(tn->children[i]);
            return cnt;
            }
    }
    void print(Treenode *tn,int k,int lvl){
        if(tn==NULL)    return;
        if(lvl==k)  cout<<tn->data<<" ";
        for(int i=0;i<tn->child_count;i++){
            print(tn->children[i],k,lvl+1);
        }
    }
    void sum(Treenode *tn,int k,int lvl,int &cnt){
        if(tn==NULL)    return ;
        if(lvl==k){  cout<<tn->data<<" ";cnt+=tn->data;}
        for(int i=0;i<tn->child_count;i++){
            sum(tn->children[i],k,lvl+1,cnt);
        }
    }
    MaxOutput Maxsum(Treenode *tn){
        MaxOutput mout;
        if(tn==NULL){
             mout.node=NULL;
             mout.sum=0;
             mout.maxsum=0;
             return mout;
        }
        int mysum=tn->data;
        MaxOutput *coArr=new MaxOutput[tn->child_count];
        for(int i=0;i<tn->child_count;i++){
             coArr[i]=Maxsum(tn->children[i]);
             mysum+=coArr[i].sum;
        }
        mout.node=tn;
        mout.sum=mysum;
        mout.maxsum=mysum;
        for(int i=0;i<tn->child_count;i++){
            if(coArr[i].sum>coArr[i].maxsum)
                mout=coArr[i];}
        mout.sum=mysum;
        }
public:
    void FillTree(){
        root=takeInput();
    }


    void PrintPreOrder(){
        PreOrder (root);
    }

    void FillTreeLOrder(){
        root=FillTreeLO();
    }
    void PrintLevelOrder(){
        LevelOrder (root);
    }

    void PrintLargest(){
        cout<<getLargest(root)<<endl;
    }

    void PrintPreOrderWithLevel(){
        PreOrderwithLevel (root,0);
    }
    int height(){
        return getheight(root);
    }
    int count(){
        return getcount(root);
    }
    void printatK(int k){
        print(root,k,0);
    }
    int sumatK(int k){
            int cnt=0;
         sum(root,k,0,cnt);
         return cnt;
    }
    void maxo(){
        MaxOutput out=Maxsum(root);
        cout<<endl<<out.node->data<<"  "<<out.maxsum<<endl;
    }
};


int main(){
    GenericTree gt;
    //gt.FillTree();
    //gt.PrintPreOrder();

    gt.FillTree();
    //gt.PrintLevelOrder();
    //gt.PrintLargest();
    gt.PrintPreOrderWithLevel();
    cout<<endl<<gt.height()<<endl;
    cout<<gt.count()<<endl;
    gt.printatK(3);
    cout<<endl<<gt.sumatK(1);
    gt.maxo();

}
