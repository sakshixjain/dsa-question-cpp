#include <iostream>
using namespace std;

class Queue{
  public:
  int *arr;
  int size;
  int front;
  int rear;

  Queue(int size){
    this->size= size;
    arr= new int[size];
    front=0;
    rear=0;
  }

void push(int data){
  if(rear==size){
    cout<<"queue is full"<<endl;
  }
  else{
    arr[rear]=data;
    rear++;
  }
}
 void pop(){
  if(front==rear){
    cout<<"queue is empty"<<endl;
  }
  else{
    arr[front]=-1;
    front++;
    if(front==rear){
      front=0;
      rear=0;
    }
  }
 }

 int getFront(){
  if(front==rear){
    cout<<"queue is empty"<<endl;
    return -1;
  }
  else{
    return arr[front];
  }
 }
 bool isempty(){
  if(front==rear){
    return true;
  }
  else{
    return false;
  }
 }
 int getsize(){
  return rear-front;
 }

};

int main() {

Queue q(9);

q.push(23);
q.push(76);
q.push(36);
q.push(78);
q.push(12);

cout<<"size of quueue is "<<q.getsize()<<endl;
cout<<q.getFront()<<endl;

  return 0;
}