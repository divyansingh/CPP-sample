#include<iostream>
#include <queue>
using namespace std;
class TreeNode{
	int data;
	TreeNode* left;
	TreeNode* right;
public:
	TreeNode(int d=0):data(d),left(NULL),right(NULL){}
	friend class BST;
};
class BST{
	TreeNode* root;
public:
	BST(){
		root=NULL;
	}
	TreeNode* insert(TreeNode *n,int d){
	if(n==NULL){
            TreeNode*n=new TreeNode(d);
            return n;

	}
	else{
            if(d<n->data)    n->left=insert(n->left,d);
            else    n->right=insert(n->right,d);
        }
	}
	TreeNode* bstInput(){
		int d; cin>>d;
		TreeNode * n=NULL;
		while(d!=-1){
            n=insert(n,d);
            cin>>d;
		}
		return n;
	}
	void takebst(){
		root=bstInput();
    }
   bool ISfound(TreeNode * n,int k){
        if(n==NULL) return false;
        if(n->data==k) return true;
        if(n->data<k)   ISfound(n->right,k);
		else ISfound(n->left,k);
    }
    void FINDinBST(int k){
        if(ISfound(root,k))   cout<<"~FOUND~"<<endl;    else cout<<"NOT Found!!!"<<endl;
	}
	void LevelOrderPrint(TreeNode* sNode){
		queue<TreeNode*> q;

		q.push(sNode);
		q.push (NULL);

		while(!q.empty()){
			TreeNode* f=q.front();
			q.pop();

			if (f==NULL){
				cout<<endl;
				if(!q.empty()) q.push(NULL);
			}
			else{
				cout<<f->data<<" ";
				if(f->left!=NULL){
					q.push(f->left);
				}
				if(f->right!=NULL){
					q.push(f->right);
				}
			}
		}

	}
	void printLO(){
		LevelOrderPrint(root);
	}

	void inOrderPrint(TreeNode* sNode){
		if(sNode==NULL) return;
		inOrderPrint(sNode->left);
		cout << sNode->data<<" ";
		inOrderPrint(sNode->right);
	}
	void preOrderPrint(TreeNode* sNode){
		if(sNode==NULL) return;
		cout << sNode->data<<" ";
		preOrderPrint(sNode->left);
		preOrderPrint(sNode->right);
	}
	void postOrderPrint(TreeNode* sNode){
		if(sNode==NULL) return;
		postOrderPrint(sNode->left);
		postOrderPrint(sNode->right);
		cout << sNode->data<<" ";
	}
	void print (string str){
		if (str=="inorder") inOrderPrint(root);
		else if (str=="preorder") preOrderPrint(root);
		else if(str=="postorder") postOrderPrint(root);
		else LevelOrderPrint(root);
	}
};
int main(){
	BST BT;
	BT.takebst();
	BT.FINDinBST(1);
	cout<<endl<<"inorder- "<<endl; BT.print("inorder");
	cout<<endl<<"preorder- "<<endl; BT.print("preorder");
	cout<<endl<<"postorder- "<<endl; BT.print("postorder");
	cout<<endl<<"Levelorder- "<<endl; BT.print("LevelOrder");
}
