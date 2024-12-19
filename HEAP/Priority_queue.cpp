#include <iostream>
#include <queue>
using namespace std;

int main(){
   priority_queue<int>q;
    priority_queue<int, vector<int>, greater<int>>qt;
   q.push(3);
   q.push(11);
   q.push(6);
   q.push(9);
   q.push(4);

  qt.push(5);
   qt.push(8);
   qt.push(3);
   qt.push(2);
   qt.push(9);
cout<<" printing the priority queue top "<<q.top()<<endl;
cout<<" printing the priority queue top "<<qt.top();
} 
