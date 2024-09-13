/*#include <iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"enter the number";
    cin>>n;
    
                        // VERTICAL NUMERIC PYRAMID

    /*
    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            cout<<row+1;
            if(col!=row)
               cout<<"*";
        }
    cout<<endl;
    }

    for(int row=0; row<n; row++){
        for(int col=0; col<n-row; col++){
            cout<<n-row;
            if(col!=n-row-1)
               cout<<"*";
        }
    cout<<endl;
    }

                           //NUMERIC PALINDROME PYRAMID

    /*for(int row=0; row<n; row++){

     for(int col=0; col<n-row-1; col++){
        cout<<" ";
     }
    
    //for(int row=0; row<n; row++){
        int col;
        for(col=0; col<row+1; col++){
            cout<<col+1;
        }
        col=col-1;

        //reverse counting
        for(; col>=1; col--){
            cout<<col;
        }
        cout<<endl;
    }
                             // HOLLOW TRIANGLE

    for(int row=0; row<n; row++){
        //spaces
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        //star
        for(int col=0; col<2*row+1; col++){
            if(col==0){
                //first star
            cout<<"*";
        }
        else if(col== 2*row){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
            cout<<"* ";
        }

        for(int row=0; row<n; row++){
            //row+1 element print krwata h
            for(int col=0; col<row+1; col++){
                cout<<row+ col+1<<" ";
            }
            cout<<endl;
        }

                                  //NUMERIC FULL PYRAMID

        for(int row=0; row<n; row++){
            for(int col=0; col<n-row-1; col++){
                cout<<" ";
            }
            for(int col=0; col<row+1;col++){
                cout<<row+col+1;
            }
            // reverse counting

            int start= 2*row;
            for(int col=0; col<row; col++){
                cout<<start;
                start--;
                                     
            }
            cout<<endl;
        }

                               //NUMERIC HOLLOW PYRAMID

        for(int row=0; row<n; row++){
            for(int col=0; col<n-row-1; col++){
                cout<<" ";
            }
            int start=1;
            for(int col=0; col<2*row+1;col++){
                if(row==0|| row==n-1){
                    if(col%2==0){
                        cout<<start;
                        start++;
                    }
                    else{
                        cout<<" ";
                    }
                }
                else{
                    if(col==0){
                        cout<<1;
                    }
                    else if(col==2*row){
                        cout<<row+1;
                    }
                    else{
                        cout<<" ";
                    }
                }
            }
                cout<<endl;
                
            }

for(int row=0; row<n; row++){
    for(int col=0; col<row+1; col++){
       if(row==0 || col==0|| col==row+1-1 ){
          cout<<col+1;
     }
     else{
        cout<<" ";
     }
    }
    cout<<endl;
}
for(int i=0; i<n; i++){
    cout<<i+1;
    }
}*/

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int findtriplet(int arr[], int size, int target){
    int sum=0;
    sort(arr, arr+size);
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            for(int k=j+1; k<size; k++){
                //if(i<=j<=k){
              if(arr[i]+arr[j]+arr[k]==target){
                   // if(i + j+k==target){
                        sum++;
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
    }
        return sum;
    }
}
int main(){
    int arr[]= {5,7,9, 1,2,4,6,8,3};
    int size= 9;
    int target = 10;
    int result= findtriplet(arr, size, target);
    cout<<" result is "<<result<<endl;
}
