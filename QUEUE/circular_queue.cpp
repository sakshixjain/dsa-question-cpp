#include <iostream>
using namespace std;

class circularQueue{
  public:
  int *arr;
  int size;
  int front;
  int rear;

  circularQueue(int size){
    this->size= size;
    arr= new int[size];
    int fornt=-1;
    int rear=-1;
  }

  void push(int data){
    //queue full
    if(front==0 && rear==size -1){
      cout<<" Queue is full , cant insert"<<endl;
    }
        // single element case
    else if(front ==-1){
      front=rear=0;
      arr[rear]=data;
    }
       //circular nature
        else if(rear==size-1 && front!=0){
          rear=0;
          arr[rear]= data;
        }
    // normal flow
         else{
          rear++;
          arr[rear]=data;
         }
  }
         void pop(){
          //empty check
          if(front== -1){
                 cout<<" q is empty() ,cant pop"<<endl;
          }
          //single element
          else if(front== rear){
            arr[front]=-1;
            front =-1;
            rear= -1;
          }
          //circular nature
          else if(front==size-1){
            front=0;
          }
          //normal flow
        else{
          front++;
        }
         
  }
};

int main() {

  return 0;
}