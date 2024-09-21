#include <iostream>
using namespace std;

class deque{
  public:
  int *arr;
  int size;
  int front;
  int rear;

  deque(int size){
    this->size= size;
    arr= new int[size];
    front = -1;
    front= -1;
  }

  void pushRear(int data){
        if(front==0 && rear==size -1){
      cout<<" Queue is full , cant insert"<<endl;
      return ;    }
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
  
 void pushFront(int data){
      if(front==0 && rear==size -1){
      cout<<" Queue is full , cant insert"<<endl;
      return ;
    }
        // single element case
    else if(front ==-1){
      front=rear=0;
      arr[rear]=data;
    }
       //circular nature
        else if(front==0 && rear!=size-1 ){
          front=size-1;
          arr[rear]= data;
        }
    // normal flow
         else{
          front--;
          arr[rear]=data;
         }
  }
  
  void popFront(){
     //empty check
          if(front== -1){
                 cout<<" q is empty() ,cant pop"<<endl;
                 return;
          }
          //single element
          else if(front== rear){
            arr[front]=-1;
            front =-1;
            rear= -1;
          }
          //circular nature
          else if(front==size-1){
            arr[front] = -1;
            front=0;
          }
          //normal flow
        else{
          arr[front]= -1;
          front++;
        }
  }

  void popRear(){
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
          else if(front==0){
            arr[rear]= -1;
            rear=size-1;
          }
          //normal flow
        else{
          arr[rear]= -1;
          rear--;
        }
  }

  void print(){
    for(int i=0; i<size; i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
};

int main() {
 deque dq(10);
 dq.print();
 dq.pushRear(66);
  dq.pushRear(92);
   dq.pushRear(17);
    dq.pushRear(52);
     dq.pushRear(72);
      dq.pushRear(62);
       dq.pushRear(22);

       dq.print();

   dq.popRear();
   dq.print();
  return 0;
}