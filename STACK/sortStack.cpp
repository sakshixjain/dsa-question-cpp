#include <iostream>
#include<stack>
using namespace std;
void insertSorted(stack<int>& s, int& target){

  if(s.empty()){
    s.push(target);
    return ;
  }
  if(s.top()>=target){
    s.push(target);
    return;
  }
  int topElement= s.top();
  s.pop();
//recursion
 insertSorted (s,target);
  //backTracking
  s.push(topElement);

}
void sortStack(stack<int>& s){
  if(s.empty()){
    return ;
  }
  int target= s.top();
  s.pop();
  sortStack(s);

  insertSorted(s,target);
}
int main() {
  stack<int>s;

  s.push(70);
  s.push(11);
  s.push(90);
  s.push(4);
  s.push(50);

    sortStack(s);
  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }
  cout<<endl;


  return 0;
}