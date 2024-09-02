#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
  // step 1 choose pivot element

  int pivotIndex = s;
  int pivotElement= arr[s];


// find right positon of the pivot element 

int count= 0;
for(int i=s+1; i<=e; i++){
  if(arr[i] <= pivotElement){
    count++;
  }
}

// jab mai loop se bahar aaya to mera puvot element right position pr aa jaega

int rightIndex= s+count;
swap(arr[pivotIndex], arr[rightIndex]);
pivotIndex= rightIndex;

// left mai chote right mai bade

int i=s; 
int j= e;
while(i<pivotIndex && j>pivotIndex){
  while(arr[i]<pivotElement){
    i++;
  }
  while(arr[j]>pivotElement){
    j--;
  }

  if(i<pivotIndex && j>pivotIndex)
    swap(arr[i], arr[j]);
  
  }
 return  pivotIndex;
}


void quickSort(int arr[], int s, int e){
  // base case 
  if(s>=e)  return ;

  int p= partition (arr, s, e);

  // recursion in left
quickSort(arr, s, p-1);

  // recursion in right
  quickSort(arr, p+1,e);
}
int main() {
int arr[]= {4,8,7,3,1,2,1,3,9,1};
int n=10;
int s= 0;
int e= n-1;
quickSort(arr, s,e);
for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";
}
cout<<endl;
  return 0;
}