#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int main(){
    

                      // MAXIMUM AND MINIMUM NUMBER IN AN ARRAY


//     int arr[]= {2,4,5,6,8,4,98,76,43,56,12};
//     int size =11;
// int maxi= INT_MIN;
// int mini= INT_MAX ;
// for(int i=0; i<size; i++){
//     if(arr[i]<mini){
//         mini=arr[i];
//     }
//     if(arr[i]>maxi){
//         maxi=arr[i];
//     }
// }
// cout<<"minimum number is "<<mini<<endl;
// cout<<"maxmum number is "<<maxi<<endl;


                           //start end printing


// int arr[9]={10,20,30,40,50,60,70,80,90};
// int size=9;
// int start=0;
// int end =size-1;
// while(true){
//     if(start>end)
//     break;

//     cout<<arr[start]<<" ";
//     cout<<arr[end]<<" ";
//     start++;
//     end--;
// }

// END AND START SORTED ARRAY


int arr[9]={10,20,30,40,50,60,70,80,90};
int size=9;
int start=0;
int end =size-1;
while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
for(int i=0; i<size;i++){
    cout<<arr[i]<<" ";
}

// //sort of 0's and 1's

// vector<int>arr={0,1,1,0,1,0,1,0,1,0,0,1};
// int start=0;
// int end=arr.size()-1;
// int i=0;
// while(i!=end ){
//     if(arr[i]==0){
//         swap(arr[start],arr[i]);
//         i++;
//         start++;
//     }
//     else{
//         swap(arr[end],arr[i]);
//         end--;
//     }
// }
// //print
// for(auto value:arr){
//     cout<<value<<" ";
// }

return 0;
}