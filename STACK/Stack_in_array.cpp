#include <iostream>
using namespace std;

class Stack{
  public:
  int *arr;
  int size;
  int top;

  Stack(int size){
    arr= new int[size];
    this->size= size;
    top=-1;
  }

  void push(int data){
    if(size-top>1){
      //space is available
      //insert
      top++;
  arr[top]=data;
    }
    else{
      cout<<"stack over flow"<<endl;
    }
  }
  void pop(){
    if(top==-1){
      cout<<" stack under flow"<<endl;
    }
    else{
      top--;
    }
  }
  int getTop(){
    if(top==-1){
      cout<<"there is no eleemnt in  stack"<<endl;
    }
    else{
      return arr[top];
    }
  }
  //return number of valid element
  int getSize(){
     return top+1;
  }

  bool isEmpty(){
    if(top==-1){
      return true;
    }
    else{
      return false;
    }

  }
};
int main() {
Stack s(10);

s.push(10);
s.push(20);
s.push(30);
s.push(40);

while(!s.isEmpty()){
  cout<<s.getTop()<<" ";
  s.pop();
}
cout<<endl;
cout<<"size of stack "<<s.getSize()<<endl;
  return 0;
}