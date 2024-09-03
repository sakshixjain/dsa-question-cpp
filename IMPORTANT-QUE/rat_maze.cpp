#include <iostream>
#include<vector>
using namespace std;

bool isSafe(int x, int y, int row, int col, int rat[][4], vector<vector<bool> > &visited){

  if(((x>=0 && x<row) &&(y>=0 && y<col)) && 
  ( rat[x][y]==1) && 
  ( visited[x][y]==false)){
    return true;
  }
  else{
   return false;
  }
}

void solvemaze(int rat[][4], int row, int col, int x, int y,vector<vector<bool>> &visited, vector<string>& path, string output){

  //base case
  if(x==row-1 && y== col-1){
    //answer found
    path.push_back(output);
    return ;
  }

  // down  i+1,j

if(isSafe(x+1, y,row,col,rat, visited)){
  visited[x+1][y]= true;
  solvemaze(rat,row,col,x+1, y,visited , path, output + 'D');
  //backTracking 

  visited[x+1][y]= false;
}

// right i,j+1

if(isSafe(x, y+1,row,col,rat, visited)){
  visited[x][y+1]= true;
  solvemaze(rat,row,col,x, y+1,visited , path, output + 'R');
  //backTracking 

   visited[x][y+1]= false;
}
//left i, j-1

if(isSafe(x, y-1,row,col,rat, visited)){
  visited[x][y-1]= true;
  solvemaze(rat,row,col,x, y-1,visited , path, output + 'L');
  //backTracking 

  visited[x][y-1]= false;
}
//up i-1,j

if(isSafe(x-1, y,row,col,rat, visited)){
  visited[x-1][y]= true;
  solvemaze(rat,row,col,x-1, y,visited , path, output + 'U');
  //backTracking 

  visited[x-1][y]= false;
}
}

int main() {
int rat[4][4] = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
int row=4;
int col=4;

if(rat[0][0]==0){
  cout<<" No Path Exists "<<endl;
  return 0;
}

 vector<vector<bool> > visited(row,vector<bool>(col, false));

 visited[0][0]=true;

 vector<string>path;
 string output="";

 solvemaze(rat,row,col,0,0,visited,path, output);

cout<<" printing the results "<<endl;
for(auto i: path){
  cout<<i<<" ";
}
cout<<endl;

if(path.size()==0){
  cout<<" No Destination exists"<<endl;
}
  return 0;
}