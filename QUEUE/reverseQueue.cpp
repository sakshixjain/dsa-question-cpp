#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseQueue(queue<int>&q){
  //base case
stack<int>s;
  // recursion 
  while(!q.empty()){
    int element = q.front();
    q.pop();
//stack mai push krna h
     s.push(element);
    
  }

  while(!s.empty()){
    int element= s.top();
    s.pop();

    q.push(element);
  }
}

void reverseQueueByRecursion(queue<int>&q){
  if(q.empty()){
    return ;
  }
  int temp = q.front();
  q.pop();

  reverseQueueByRecursion(q);

  q.push(temp);
}

void reverseByK(queue<int>&q, int k){
  // stepA : queue ke elements stack mai push 
  stack<int>s;
  int count=0;
  int n= q.size();

  if(k<=0 || k>n) return ;

  while(!q.empty()){
    int temp= q.front();
    q.pop();
    s.push(temp);
    count++;

    if(count==k){
      break;
    }
  }

//stack ke elemets q mai wapas

  while(!s.empty()){
    int temp= s.top();
    s.pop();
    q.push(temp);

  }
  //push n-k elemeents from q front to back
  count=0;
  while(!q.empty() && n-k !=0){
    int temp= q.front();
    q.pop();
    q.push(temp);
    count++;

    if(count==n-k){
      break;
    }
  }
}

int main() {

queue<int>q;
q.push(3);
q.push(4);
q.push(8);
q.push(2);
q.push(9);

// reverseQueue(q);
// reverseQueueByRecursion(q);
reverseByK(q,5);

// cout<<" printing queue "<<endl;
cout<<" printing queue using recursion function  "<<endl;
while(!q.empty()){
  cout<<q.front()<<" ";
  q.pop();
}
cout<<endl;

// while(!q.empty()){
//   cout<<q.front()<<" ";
//   q.pop();
// }

cout<<endl;
  return 0;
}