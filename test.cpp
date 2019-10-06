#include <iostream>
#include<queue>
using namespace std;
class Treenode{
public:
	int data;
	Treenode ** children;
	int child_count;
	Treenode (int d){
		data= d;
		children=NULL;
		child_count=0;
	}

};

class GenericTree{
private:
	Treenode* root;
	void PrintPreorder (Treenode * rt){
		if(rt==NULL)	return;
		cout<<rt->data<<" ";
		for(int i=0;i<rt->child_count;i++){
			PrintPreorder(rt->children[i]);
		}
	}
	void PrintPostorder(Treenode *rt){
		if(rt==NULL)	return;
		for(int i=0;i<rt->child_count;i++){
			PrintPostorder(rt->children[i]);
		}
		cout<<rt->data<<" ";
	}
public:
	GenericTree(){
		root =NULL;
	}
	Treenode* Takeinput(){
		int d,c;
		cout<<"ENTER the node data";
		cin>>d;
		Treenode *n =new Treenode(d);
		cout<<"ENTER the number of children for data ( "<<d<<" ) :";
		cin>>c;
		n->child_count=c;
		n->children= new Treenode *[c];
		for(int i=0;i<c;i++)
					n->children[i]=Takeinput();
		return n;
	}
	void FILLtree(){
		root=Takeinput();

	}
	void PrintPreorder(){
	    cout<<endl;
		PrintPreorder(root);
		cout<<endl;
	}
	void PrintPostorder(){
		PrintPostorder(root);
		cout<<endl;
	}
	void LEVELorderINPUT(){
		queue<Treenode*> q;
		int data;
		int c;
		cout<<"ENTER the root data ";
		cin>>data;
		root=new Treenode(data);
		q.push(root);
		while(!q.empty()){
			Treenode *n=q.front();
			q.pop();
			cout<<"ENTER the child_count for data "<<n->data<<" : ";
			cin>>c;
			n->child_count=c;
			n->children=new Treenode*[c];
			for(int i=0;i<c;i++){
				cout<<"ENTER the DATA for child# : "<< i<<" of data "<<n->data<<" :";
				cin>>data;
				n->children[i]=new Treenode(data);
				q.push(n->children[i]);
			}
		}
	}
	void PrintLEVELorder(){
		if(root==NULL) return;
		cout<<root->data<<endl;
		queue<Treenode*>q;
		q.push(root);
        q.push(NULL);
		while(!q.empty()){
			Treenode *n=q.front();
			q.pop();
			if(n==NULL){
				cout<<endl;
				if(!q.empty())	q.push(NULL);
			}
			else
			{
				for(int i=0;i<n->child_count;i++){
					cout<<n->children[i]->data<<" ";
					q.push(n->children[i]);
				}
			}
		}
	}
};
int main()
{
	GenericTree GT;
	//GT.FILLtree();
	GT.LEVELorderINPUT();
	GT.PrintPreorder();
	GT.PrintPostorder();
	GT.PrintLEVELorder();
}
