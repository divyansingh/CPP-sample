#include <iostream>
using namespace std;

template <class anyclass>
class vector{
private:
    anyclass *arr;
    int index;
    int maxsize;
public:
    vector(int s=4){
    index=0;
    maxsize=s;
    arr=new anyclass[maxsize];
    }
    ~vector(){
        delete [] arr;
    }
    void push_back(anyclass d){
        if(index==maxsize){
            ///double the array
            cout<<"Doubling the array"<<endl;
            anyclass *temp=arr;
            maxsize*=2;
            arr=new anyclass[maxsize];
            for (int i=0;i<index;i++) arr[i]=temp[i];
            delete [] temp; temp=0;
        }
        arr[index]=d;
        index++;
    }

    anyclass pop_back(){
        if (index==0) return -1;
        index--;
        return arr[index];
    }
    int size(){
        return index;
    }
    anyclass at(int ind){
        //if (ind>=index) return -1;
        return arr[ind];
    }
    anyclass &operator[] (int ind){
        //if (ind>=index) return -1;
        return arr[ind];
    }

    void operator+(vector &v){
        for (int i=0;i<v.size();i++){
            push_back(v[i]);
        }
    }
};

template <class anyclass>
ostream& operator<<(ostream &os,vector<anyclass> &v){
    for (int i=0;i<v.size();i++) os<<v[i]<<" ";
    os<<endl;
    return os;
}

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<v.size()<<endl;
    cout<<v.at(3)<<endl;
    cout<<v[2]<<endl;
    v[1]=10;

    cout<<v.at(1)<<endl;
    cout<<v;

    vector<int> v1;
    v1.push_back(11);
    v1.push_back(12);
    v1.push_back(13);
    v1.push_back(14);
    v1.push_back(15);

    v+v1;
    cout<<v;

    v.pop_back();
    cout<<v;

    vector<char> vc;
    vc.push_back('a');
    vc.push_back('b');
    vc.push_back('c');
    vc.push_back('d');

    cout<<vc;


}
