#include <iostream>
#include <queue>
using namespace std;

int kthGreatestNumber(int arr[], int n, int k){
    priority_queue<int, vector<int>, greater<int>>qt;

    for(int i=0; i<k; i++){
        qt.push(arr[i]);
    }

    //push remaining eleemnt ,if less then top 
    for(int i=k; i<n; i++){
         int element= arr[i];
         if(element > qt.top()){
            qt.pop();
            qt.push(element);
         }
    }
    int ans= qt.top();
    return ans;

}


int kthSmallestNumber(int arr[], int n, int k){
    priority_queue<int>qt;

    for(int i=0; i<k; i++){
        qt.push(arr[i]);
    }

    //push remaining eleemnt ,if less then top 
    for(int i=k; i<n; i++){
         int element= arr[i];
         if(element <qt.top()){
            qt.pop();
            qt.push(element);
         }
    }
    int ans= qt.top();
    return ans;

}

int main(){
    int arr[]= {3,11,6,9,4,12,2,8};
    int n= 8;
    int k=5;

    int ans= kthSmallestNumber(arr,n,k);
    cout<<"ans is "<<ans<<endl;
    int ans1= kthGreatestNumber(arr,n,k);
    cout<<"ans is "<<ans1<<endl;
}