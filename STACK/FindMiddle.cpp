#include <iostream>
#include<stack>
using namespace std;

void findMiddle(stack<int> &s, int &totalSize ){

  if(s.size()==totalSize/2 +1){
    cout<<"middle of the stack is :"<<s.top();
    return ;
  }

  int temp= s.top();
  s.pop();

 //recursion
  findMiddle(s,totalSize);

  //backtracking
  s.push(temp);
}

int main() {
stack<int>s;

s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);

int totalSize= s.size();
findMiddle(s, totalSize);
  return 0;
}