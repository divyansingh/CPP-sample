#include <iostream>
#include<unordered_map>
using namespace std;
class TrieNode{
public:
	char data;
	bool isTerminal;
	unordered_map<char,TrieNode*>	childmap;
	TrieNode (char ch){
		data=ch;
		isTerminal=false;
	}
};
class trie{
private:
	TrieNode *root;
	void recAddWord(char * word,TrieNode* n){
		if(word[0]=='\0'){
			n->isTerminal=true;
			return ;
		}
		char ch=word[0];
		auto it=n->childmap.find(ch);
		TrieNode * nChild;
		if(it==n->childmap.end())	{					///key value naot found
					nChild=new TrieNode(ch);
					n->childmap[ch]=nChild;
				}
			else {
					nChild=it->second;
			}
			recAddWord(word+1,nChild);

	}
public:
	trie(){
		root= new TrieNode('\0');
	}

	void addWord(char *word){
		recAddWord(word,root);
	}
	bool Search(char * word){
		TrieNode *temp=root;
		for(int i=0;word[i]!='\0';i++){
				char ch=word[i];
				auto it=temp->childmap.find(ch);
				if(it==temp->childmap.end())	{
					return false;
				}
				else {
					temp=it->second;
				}
		}
		///if(temp->isTerminal==true)	return true;	else return false;
		return temp->isTerminal;
	}
};
int main(){
	trie T;
	char s1[]="a";
	char s2[]="ball";
	char s3[]="apple";
	char s4[]="ape";
	char s5[]="not";
	char s6[]="no";
	char s7[]="code";
	T.addWord(s1);
	T.addWord(s2);
	T.addWord(s3);
	T.addWord(s4);
	T.addWord(s5);
	T.addWord(s6);
	T.addWord(s7);
	cout<<T.Search("apple")<<endl;
	cout<<T.Search("apples")<<endl;

}
