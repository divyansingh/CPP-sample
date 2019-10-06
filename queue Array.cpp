#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int maxSize;
    int front;
    int rear;
    int currentSize;
public:
    Queue(int s=4){
    maxSize=s;
    front =0;
    rear=maxSize-1;
    currentSize=0;
    arr=new int[maxSize];
    }
    void push (int d){
        if(currentSize!=maxSize){
            rear=(rear+1)%maxSize;
            arr[rear]=d;
            currentSize++;
            return;
        }
        cout<<endl<<"queue us FULL"<<endl;
    }
    int pop(){
        if(currentSize!=0){
            int d=arr[front];
            front=(front+1)%maxSize;
            currentSize--;
            return d;
        }
        cout<<endl<<"queue us FULL"<<endl; return -1;
    }
    int getfront(){
        if(currentSize!=0)  return arr[front];
        cout<<endl<<"queue us FULL"<<endl;
    }

    bool isEmpty(){
        if(currentSize==0)  return true;return false;
    }
    ~Queue(){
        delete []arr;
    }
};
int main(){
    Queue Q;
    Q.push(5);
     Q.push(4);
      Q.push(3);
       Q.push(2);
         Q.push(2);
    cout<<Q.pop()<<endl;cout<<Q.pop()<<endl;cout<<Q.pop()<<endl;cout<<Q.pop()<<endl;cout<<Q.pop()<<endl;

}
