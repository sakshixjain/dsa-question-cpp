
                              // find the subsequence in  an array

// #include <iostream>
// using namespace std;
// void printSubSequence(string str, string output, int i ){
//    if(i>= str.length()){
//       cout<<output;
//       return ;
//    }
//   //exclude
//    printSubSequence(str, output ,i+1);

//    //include
//    //below line responsible for concatition of output string ans
//    output.push_back(str[i]);
//    printSubSequence(str, output, i+1);
// }

// int main(){
//    string str ="wxyz";
//    string output = " ";
//    int i=0;

//    printSubSequence(str, output, i);
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int findKey(vector<int>& arr, int& key, int s, int e ){

//    int mid = (s+e)/2;

//    if(s>e) {return -1;}

//    if(arr[mid]==key)
//    {return mid;}


//    // return (arr[mid]<key)? findKey(arr,key, mid+1,e):findKey(arr,key, mid-1,s);

//    if(arr[mid]<key){
      
//       return findKey(arr,key, mid+1,e);
//    }
// else{
  
//   return  findKey(arr, key,mid-1,s);
// }
   
// }

// int main(){
//    vector<int>arr{1,3,5,7,9,11,15,78};
//    int key= 78;
//    int n= arr.size();
//    int s=0;
//    int e=n-1;

//    int ans=findKey(arr,key,s,e);
//    cout<<ans<<endl;
// }

                                          // GET SUM OF NUMBER IN ARRAY TO RETURN OUTPUT

// #include <iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// int getTarget(vector<int>& arr, int target ){
//   if(target==0){
//     return 0;
//   }
//   if(target <0){
//     return INT_MAX;
//   }
//   int mini = INT_MAX;
//   for(int i=0; i<arr.size(); i++){
//     int ans =getTarget(arr, target-arr[i]);
//     if(ans!=INT_MAX)
//    { mini = min(ans+1, mini);}
//   }
//   return mini;
// }

// int main() {
//   vector<int> arr {1,2,3};
//   int target =12;
//   int ans = getTarget(arr, target);
//   cout<<"answer is : "<<ans;
//   return 0;
// }


                             //FIND MAXIMUM NUMBER OF SEGMENT 


//  #include <iostream>
// #include <vector>
// #include <limits.h>
// using namespace std;
// int solveSegment(int n, int x, int y, int z){
//   if(n==0){
//     return 0;
//   }
//   if(n<0){
//     return INT_MIN;
//   }
// int a= solveSegment(n-x, x,y,z)+1;

// int b=solveSegment(n-y, x,y,z)+1;

// int c= solveSegment(n-z,x,y,z)+1;

// int ans= max(a, max(b,c));
// return ans;

// }

// int main(){
//   int n=7;
//    int x=5;
//    int y=2;
//    int z=2;

//    int ans=solveSegment(n,x,y,z);
//    // I CASE OF VALID ANSWER AND ONE FOR INVALID ANSWER
//    if(ans<0)
//     ans=0; 
//    cout<<"answer is : "<<ans;
// }                                 

                       //MAXIMUM SUM OF NON- ADJACENT NUMBER USING RECURSION

// #include <iostream>
// #include <vector>
// #include <limits.h>
// using namespace std;
// void maxSum(vector<int>& arr, int sum, int& maxi, int i){
//   if(i>=arr.size()){
//     maxi = max(sum,maxi );
//     return;
//   }

//   // include 
//   maxSum(arr, sum+arr[i], maxi, i+2);

//   //exclude
//   maxSum(arr, sum, maxi, i+1);
// }


// int main(){
//   vector<int>arr{2,1,4,9};
//   int sum=0;
//   int maxi = INT_MIN;
//   int i=0;
//     maxSum(arr,sum,maxi,i);

//   cout<<" maximum sum of array is : "<<maxi<<endl;
  
// }


                             //LAST OCCURANCE OF CHAR IN  STRING

// #include <iostream>
// using namespace std;
// void lastOccLTR(string&x, char s, int i, int&ans){
//    //base case

//                //left to right
//    //if(i>=x.size()){
//                //right to left
//     if(i<0){
//     return ;
//    }
//    if(x[i]==s){
//     ans=i;
//     return;
    
//    }
//  lastOccRTL(x,s,i-1,ans);
//     lastOccLTR(x, s,i+1,ans);

// }
// int main(){
//   string x;
//   cin>>x;
//   char s;
//   cin>>s;
//     // left to right
//   //int ans =-1;
//   //right to left 
//   int ans = x.size()-1;
//   lastOccLTR(x,s,x.size()-1,ans);
//   cout<<ans;

// }

                              //REVERSE A STRING USING RECURSION
                                  
// #include <iostream>
// using namespace std;
// void reverseString(string&arr, int start ,  int end){
//   if(start>=end){
//     return ;
//   }
//   swap(arr[start], arr[end]);
//   reverseString(arr, start+1, end-1);

// }
// int main() {
//   string arr;
//   cin>>arr;
// int start= 0;
// int end= arr.size()-1;
//   reverseString(arr, start, end);
//   cout<<arr<<endl;
//   return 0;
// } 



                   // CHECK PALINDROME


// #include <iostream>
// using namespace std;
//  bool palind(string s, int start, int end){
//   //base case
// if(start>=end){
//   return true;
// }

//   //re

//   if(s[start]!=s[end]){
//     return false;
//   }
//   return palind(s, start+1, end-1);
//  }
// int main() {
// string s;
// cin>>s;
// cout<<palind(s, 0, s.size()-1);
//   return 0;
// }


           // PRINT ALL SUBSTRING 

#include <iostream>
#include <vector>
using namespace std;
void printSub(vector<int>&nums, int start, int end){
  //base case
if(end==nums.size()){
  return;
}

  //re
  for(int i=start; i<=end; i++){
    cout<<nums[i]<<" ";
  }
  cout<<endl;

printSub(nums, start,end+1);
}
void printSubstr(vector<int>&nums){
  for(int start=0; start<nums.size()-1; start++){
    int end=start;
    printSub(nums, start, end);
  }
}

int main() {
vector<int>nums{1,2,3,4,5,6};
printSubstr(nums);

  return 0;
}