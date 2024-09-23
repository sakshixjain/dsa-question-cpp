    #include <iostream>
    using namespace std;
 
// //  void print(int arr[], int n, int i){
// //     //base case
// //      if(i>=n)return;
     
// //         // recursive relation
// //      cout<<arr[i]<<" ";
// //      print(arr,n,i+1);
// //  }

// // // void printCount(int n){
// // // if (n==0) return ;

// // // printCount(n-1);
// // // cout<<n<<" ";
// // // }
// //  //FIBONACCI SERIES

  int fib(int n){
    if(n==1) return 0;
    if(n==2) return 1;

    int ans= fib(n-1)+fib(n-2);
    return ans; 
  }

// // //FACTORIAL NUMBER

// // // int factorial(int n){
// // //       cout<<" factorial of n is "<<n<<endl;
// // //       // base case
// // //     if(n==1) return 1;

// // //   // recursive relation
// // //     int chotiproblem= factorial(n-1);
// // //     int badiproblem= n* chotiproblem;

// // //     return badiproblem;
// // // }

 int main(){
// //         int arr[5]= {10, 20,30,40,50};
// //         int n=5;
// //         int i=0;
// //         print(arr, n,i);


        int n; 
        cout<<"enter the number: "<<endl;
 cin>>n;
// //         // printCount(n);
 int out= fib(n);
// //         //int output= factorial(n);

// // // cout<<" Answer of number is "<<outPUT<<endl;
       cout<<" Answer of number is "<<out<<endl;
    }
 

//                        //**    FIND OCCURENCE OF CHARACTER IN STRING


// // #include <iostream>
// // using namespace std;
// // int findChar(string& str, int& n, char& k, int i ){
// //     //base case
// //     if(i>= n) return -1 ;
// //     //recursive relation
// //     if(str[i]==k){
// //         return i;
// //     }


// //     return findChar(str,n, k, i+1);
    
// // }

// // int main(){
// //     string str= "lovebabbar";
// //     int n= str.length();
// //     char  k ='v';
// //     int i=0;

// //   int check=  findChar(str,n, k, i);
// //   cout<<" answer is "<<check<<endl;
// // }


// //PRINT ALL DIGITS IN NUMBER

// // #include <iostream>
// // using namespace std;

// // void printAllDigit(int n){
// //     // base case
// //     if (n==0){
// //         return;
// //     }
// //     //recursive relation 

// //     printAllDigit(n/10);

// //     int digit = n%10;
// //     cout<<digit<<" ";

// // }

// // int main (){
// //     int n= 04567;

// //     printAllDigit(n);

// // }


// #include <iostream>
// using namespace std;
//  bool findSorted(int arr[], int& n, int i){
//    if(i==n-1) return true;

//    if(arr[i]> arr[i+1]){
//     return false;
//    }

//     findSorted(arr,n,i+1);

//  }

// int main(){
//     int arr[]= {1,5,7,9,15};
//     int n=6;
//     int i=0;
//     int isSorted= findSorted(arr, n,i);
   
//    if(isSorted){
//     cout<<"array is sorted"<<endl;
//    }
//    else{
//     cout<<"array is not sorted"<<endl;
//    }

// }

                  // FIND THE TARGET VALUE IN ARRAY USING BINARY SEARH IN RECURSION

// #include <iostream>
// #include <vector>
// using namespace std;
// int findKey(vector<int>& arr, int& key, int& s, int& e ){

//    int mid = (s+e)/2;

//    if(s>e) {return -1;}

//    if(arr[mid]==key)
//    {return mid;}


//    // return (arr[mid]<key)? findKey(arr,key, mid+1,e):findKey(arr,key, mid-1,s);

//    if(arr[mid]<key){
//       s= mid=1;
//       return findKey(arr,key, s,e);
//    }
// else{
//    e=mid-1;
//   return  findKey(arr, key,e,s);
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

// #include <iostream>
// using namespace std;
// void printSubSequence(string str, string output, int i ){
//    if(i>= str.length()){
//       cout<<output<<endl;
//    }
//   //exclude
//    printSubSequence(str, output ,i+1);

//    //include
//    output.push_back(str[i]);
//    printSubSequence(str, output, i+1);
// }

// int main(){
//    string str ="xyz";
//    string output = " ";
//    int i=0;

//    printSubSequence(str, output, i);
// }
