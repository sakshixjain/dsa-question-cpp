#include<iostream>
#include <vector>
using namespace std;
/*
int binarysearch(int arr[], int n){
    int start=0; 
    int end= n-1;
    int mid= (start+end)/2;
    while(start<=end){
        //int element =arr[mid];
    if(arr[mid]!=mid+1 && arr[mid-1]==mid){
        return mid+1;
    }
    else if(arr[mid]==mid+1){
        //start in left
        start= mid+1 ;
        //return arr[mid];
    }
    else{
        //start in right
        end=mid-1;
        
    }
    mid= (start+end)/2;
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,5,6,7,8,9,};
    int n= sizeof(arr)/sizeof(arr[0]);
    int index=binarysearch(arr,n);
    if(index==-1){
        cout<<"not found "<<index<<" index "<<endl;
    }
    else{
        cout<<" found "<<index<<endl;
    }
}*/

// ODD OCCURING IN  AN ARRAY

int findodd(vector<int>arr){
    int s=0; 
    int e= arr.size()-1;
    int mid= s+(e-s)/2;
    while(s<=e){
        if(s==e){
            return s;
        }
        if(mid%2==0){
        if (arr[mid]==arr[ mid+1]){
            s=mid+2;
        }
        else{
            e=mid;
        }
        }
        else{
             if(arr[mid]== arr[mid-1]){
            s= mid+1;
        }
        else{
            e=mid-1;
        }
        }
        mid= s+(e-s)/2;
    }
    return -1;
}
int main(){
    vector<int>arr{2,2,3,3,5,5,6,6,9,9,100,7,7,8,8};
    int odd= findodd(arr);
    cout<<" index of an array is "<<odd<<endl;
    cout<<" odd occuring in  an array is "<<arr[odd]<<endl;
}
 