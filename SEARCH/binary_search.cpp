#include<iostream>
#include<vector>
#include<cmath> 
using namespace std;
// find element by using binary search

int binarysearch(int arr[], int size, int target){
    int start=0; 
    int end= size-1;
    int mid= (start+end)/2;
    while(start<=end){
        int element =arr[mid];
    if(element==target){
        return mid;
    }
    else if(target<element){
        //start in left
        end= mid-1 ;
        //return arr[mid];
    }
    else{
        //start in right
        start=mid+1;
        
    }
    mid= (start+end)/2;
    }
    return -1;
}
int main(){
    int arr[]={1,3,5,7,8,9,10,13,16,20};
    int size= 10;
    int target= 10;
    int index=binarysearch(arr,size,target);
    if(index==-1){
        cout<<"not found "<<index<<" index "<<endl;
    }
    else{
        cout<<" found "<<index<<" index "<<endl;
    }
}

// find first and last occurance of common element 

// int findocc(int arr[], int size, int target){
//     int start=0; 
//     int end= size-1;
//    // int mid = (end+start)/2;
//    int mid= start+(end-start)/2;
//     int output = -1;
//     while(start<=end){
//         if(target==arr[mid]){
//           output =mid;
//          // end= mid-1;
//          start=mid+1;
//         }
//         else if(target< arr[mid]){
//             end= mid-1;
//         }
//         else if(target>arr[mid]){
//             start=mid+1;
//         }
//        // mid= (start+end)/2;
//        mid= start+(end-start)/2;
//     }
//     return output;
// }
// int main(){
//     int arr[]={2,4,4,5,6,6,6,7,8,9};
//     int size=8;
//     int target= 6;
//     int output= findocc(arr, size,target);
//     cout<<" target 6 is at "<<output<<endl;
//     return 0;
// }

//FIND SQUARE ROOT BY USING BINARY SEarch

/*int findsqrt(int n){
    int s=0;
    int e=n;
    double result=-1;
    int mid= s+(e-s)/2;
    while(s<=e){
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            e=mid-1;
        }
        else {
            result= mid;
            s=mid+1;
        }
        mid= s+(e-s)/2;
    }
    return result;
}
int main(){
    int n; 
    cout<<"enter the number"<<endl;
    cin>>n;
    double result= findsqrt(n);
    cout<<"square root of n is "<<result<<endl;

    double step =0.1;
    int precision;
    double finalans= n;
    for(double i=0; i<precision; i++){
        for(double j= finalans; j*j<=result; j=j+step){
            finalans= j;
        }
        step = step/10;
    }
    return 0;
}

//FIND MID VALUE IN 2D MATRIX BY BINARY SEARCH


int findindex(int arr[][4], int row, int col, int target){
    int s=0;
    int e=row*col-1;
    int mid = (s+e)/2;
    while(s<=e){
        int rowindex= mid/col;
        int colindex= mid%col;
        if (arr[rowindex][colindex]==target){
             cout<<"found at "<<rowindex<<" "<<colindex<<endl;
            return true;
        }
        else if(arr[rowindex][colindex]<target){
            s= mid+1;
        }
        else{
            e=mid-1;
        }
        mid= (s+e)/2;
    }
    return false;

}
int main(){
    int arr[5][4]={ { 3,5,4,7}, {1,9,8,3}, {1,2,3,4}, {5,6,7,8}, {11,12,13,14}};
    int row= 5;
    int col=4;
    int target= 12;
    int output= findindex(arr,row,col,target);
    if(output){
        cout<<" index of  an arr is found  "<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}

//SEARCH IN NEARLY SORTED ARRAY


int binarysearch(vector<int>arr, int target){
    int s=0;
    int e= arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
         if(mid-1>=0 && arr[mid-1]==target){
            return mid-1;
        }
        if( mid+1<arr.size() && arr[mid+1]==target){
            return mid+1;
        }
        if(target>arr[mid]){
            s=mid+2;
        }
        else{
            e= mid-2;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    vector<int>arr{10,3,40,20,50,80,70};
    int target= 50;
    int ans= binarysearch(arr, target);
    cout<<"index of "<<target<<" is "<<ans<<endl;
    return 0;
}

//FIND THE QUOTENT 

int findque(int dividend, int divisor){
    int s=0;
    int e=abs(dividend);
    int ans=0;
    int mid =s+ (e-s)/2;
    while(s<=e){
        if (abs(mid*divisor)==abs(dividend)){
            return mid;
        }
         if(abs(mid*divisor)>abs(dividend)){
            e= mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid= s+(e-s)/2;
    }
    if((divisor<0 && dividend<0) || (divisor>0 && dividend>0))
    return ans;
    else{
     return -ans;
    }
}
int main(){
    int dividend=-32;
    int divisor=6;
    int output= findque(dividend, divisor);
    cout<<" ans is "<<output<<endl;
    return 0;
}*/

