#include<iostream>
#include<cstring>
using namespace std;
class hashnode{
public:
    string key;
    int val;
    hashnode* next;
    hashnode(string k,int value){
        key=k;
        val=value;
        next=NULL;
    }
    ~hashnode(){
    if(next!=NULL) delete next;
    }
};
class hashtable{
private:
    hashnode** buckets;
    int current_Size;
    int table_Size;
    int hashfn(string k){
      int ans=0;
      int power=1;
      for(int i=0;i<k.length();i++){
        ans+=k[i]*power;
        ans%=table_Size;
        power*=37;
        power%=table_Size;
        }
      return ans%table_Size;
    }
    void rehash(){
        int oldtable_Size=table_Size;
        table_Size=2*table_Size;
        int ols_Size=current_Size;
        current_Size=0;
        hashnode** oldbuckets=buckets;
        buckets=new hashnode* [table_Size];
        for(int i=0;i<table_Size;i++)   buckets[i]=NULL;
        for(int i=0;i<oldtable_Size;i++){
            hashnode* temp=oldbuckets[i];
            while(temp!=NULL){
                insert(temp->key,temp->val);
                temp->next;
            }
            delete oldbuckets[i];
        }
        delete [] oldbuckets;
    }
public:
    hashtable(int size=10){
        table_Size=size;
        current_Size=0;
        buckets=new hashnode*[table_Size];
        for(int i=0;i<table_Size;i++)   buckets[i]=NULL;
    }
    void insert(string k,int value){
        int hk=hashfn(k);
        hashnode* hn=new hashnode(k,value);
        hn->next=buckets[hk];
        buckets[hk]=hn;
        current_Size++;
        float lf=float(current_Size/table_Size);
        if(lf>0.7){
            cout<<"loadfactor is "<<lf<<endl;
            rehash();
        }
    }
    int* search(string k){              ///function is returning adree of value;
        int hk=hashfn(k);
        if(buckets[hk]!=NULL){
            hashnode* temp=buckets[hk];
            while(temp!=NULL){
                if(temp->key==k)    return &temp->val;
                 temp=temp->next;
            }

        }
        return NULL;
    }
    int  operator[](string k){
        int* res=search(k);
        if(res!=NULL)   return *res; else return -1;
    }

};
int main(){
    hashtable HT;
    HT.insert("DIV",19);
    HT.insert("DIVy",20);
    HT.insert("DIVya",191);
    HT.insert("DIVyan",1912);
    HT.insert("DIVyans",1912345);
    HT.insert("DIVyansh",19123);

    int* sr=HT.search("DI");
    if(sr!=NULL)    cout<<*sr<<endl;    else cout<<"             NOT FOuND!!!"<<endl;
    cout<<HT["DIV"]<<endl;
    return 0;
    ///for adding more values to the hash table
    /*int n;cin>>n;
    for(int i=0;i<n;i++){
        string k;int v;cin>>k>>v;
        HT.insert(k,v);
    }
    cout<<"enter the data to be searched  ";
    string k;
    cin>>k;
    while(k!="NO"){
        int* sr=HT.search(k);
    if(sr!=NULL)    cout<<*sr<<endl;    else cout<<"             NOT FOuND!!!"<<endl;
    cin>>k;
    }*/


}
