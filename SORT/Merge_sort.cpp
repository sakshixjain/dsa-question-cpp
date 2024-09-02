#include <iostream>
using namespace std;

void merging(int *arr, int s, int e){

int mid =(s+e)/2;

int len1= mid-s+1;
int len2 = e-mid;

// assume to create array for len1, len2
  int* left= new int[len1];
  int* right  = new int [len2];

//copy values
int k=s;
for(int i=0; i<len1; i++){
  left[i]=arr[k];
  k++;
}

k= mid+1;
for(int i=0; i<len2; i++){
  right[i]= arr[k];
  k++;
}

//merge logic
 int leftIndex =0;
 int rightIndex=0;
 int mainArrayIndex=s;

 while(leftIndex<len1 && rightIndex<len2){
  if(left[leftIndex]< right[rightIndex]){
    arr[mainArrayIndex++] = left[leftIndex++];
  }
  else{
    arr[mainArrayIndex++] = right[rightIndex++];
  }
 }

 while(leftIndex<len1){
  arr[mainArrayIndex++] = left[leftIndex++];
 }
 while(rightIndex<len2){
  arr[mainArrayIndex++] = right[rightIndex++];
 }
}

void mergerSort(int arr[], int s, int e){
  //base case 

  if(s>=e)
   return;

int mid =(s+e)/2;
//left merge sort recursion 
mergerSort(arr,s,mid);
//for right merge sort recursion 
mergerSort(arr, mid+1,e);

//merge the both left and right
merging(arr, s, e);

}
int main() {
int arr[] = {5,7,9,3,2,1,7,4};
int n= 8;
int s=0;
int e= n-1;
mergerSort(arr,s,e);

for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";
}
cout<<endl;
  return 0;
}