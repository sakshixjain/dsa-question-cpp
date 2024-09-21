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

void interLeave(queue<int>&q){
    //step:A seperare both halfs
    int n= q.size();
    if (q.empty()) return ;

    int k= n/2;
    int count=0;

    queue<int>q2;

    while(!q.empty()){
        int temp= q.front();
        q.pop();
        q2.push(temp);
        count++;

        if(count==k) 
        break;
    }

    //step :B interleaving start krdo
    while(!q.empty() && !q2.empty()){
        int first = q2.front();
        q2.pop();

        q.push(first);
        int second= q.front();
        q.pop();
        q.push(second);
    }

    if(n&1){
        int element= q.front();
        q.pop();

        q.push(element);
    }
}

int main() {

queue<int>q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);

// reverseQueue(q);
// reverseQueueByRecursion(q);
// reverseByK(q,5);
interLeave(q);

// cout<<" printing queue "<<endl;
cout<<" printing queue using recursion function  "<<endl;
while(!q.empty()){
  cout<<q.front()<<" ";
  q.pop();
}
cout<<endl;

cout<<endl;
  return 0;
}