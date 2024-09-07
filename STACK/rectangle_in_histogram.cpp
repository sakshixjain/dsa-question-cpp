#include <iostream>
#include <vector>
#include<stack>
#include<limits.h>
using namespace std;

vector<int>nextSmaller(vector<int>& input){

   stack<int>s;
   s.push(-1);

vector<int>ans(input.size());

   for(int i=input.size()-1; i>=0; i--){
  while(s.top()!= -1 && input[s.top()] >=input[i]){
    s.pop();
  }
  ans[i]=s.top();
  s.push(i);
 }
 return ans;
}

vector<int>prevSmaller(vector<int>& input){
     stack<int>s;
   s.push(-1);

vector<int>ans(input.size());

   for(int i=0; i<input.size(); i++){
  while(s.top()!= -1 && input[s.top()]>=input[i]){
    s.pop();
  }
  ans[i]=s.top();
  s.push(i);
 }
 return ans;
}

int getRectangleHistogram(vector<int>& heights){
  vector<int>prev= prevSmaller(heights);

  vector<int>next= nextSmaller(heights);

  int maxArea= INT_MIN;
  int size= heights.size();

  for(int i=0; i<heights.size(); i++){
    int length= heights[i];
  
    if(next[i]== -1){
        next[i]= size;
    }

    int width= next[i]-prev[i]-1;

    int area= length*width;

    maxArea=max(maxArea, area);
  }
  return maxArea;
}

int main() {
 vector<int>v;

v.push_back(2);
v.push_back(1);
 v.push_back(5);
v.push_back(6);
v.push_back(2);
v.push_back(3);

cout<<"ans is: "<<getRectangleHistogram(v);
  return 0;
}