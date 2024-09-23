    #include <iostream>
    using namespace std;
 
 void print(int arr[], int n, int i){
    //base case
     if(i>=n)return;
     
        // recursive relation
     cout<<arr[i]<<" ";
     print(arr,n,i+1);
 }

// void printCount(int n){
// if (n==0) return ;

// printCount(n-1);
// cout<<n<<" ";
// }
 //FIBONACCI SERIES

  // int fib(int n){
  //   if(n==1) return 0;
  //   if(n==2) return 1;

  //   int ans= fib(n-1)+fib(n-2);
  //   return ans; 
  // }

//FACTORIAL NUMBER

// int factorial(int n){
//       cout<<" factorial of n is "<<n<<endl;
//       // base case
//     if(n==1) return 1;

//   // recursive relation
//     int chotiproblem= factorial(n-1);
//     int badiproblem= n* chotiproblem;

//     return badiproblem;
// }

    int main(){
        int arr[5]= {10, 20,30,40,50};
        int n=5;
        int i=0;
        print(arr, n,i);


        // int n; 
        // cout<<"enter the number: "<<endl;
        // cin>>n;
        // printCount(n);
       // int out= fib(n);
        //int output= factorial(n);

// cout<<" Answer of number is "<<outPUT<<endl;
//         cout<<" Answer of number is "<<out<<endl;
    }