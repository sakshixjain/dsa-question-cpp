#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
                        // SQUARE PATTERN

    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n; col++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    //   for(int i=n; i>=1; i--){
    //     for(int j=1; j<i; j++){
    //         cout<<" ";
    //     }
    //     for(int k=5; k>=i; k--){
    //       cout<<"*";
    //     }
    //     cout<<endl;
    // };

    // for (int i=6; i>=1; i--){
    //   for(int j=1; j<=i; j++){
    //     cout<<" * ";
    //   }
    //   cout<<endl;
    // }
    for(int row=0; row<n; row++){
      // for(int col=0; col<n-row-1; col++){
      //   cout<<" ";
      // }
      for(int col=0; col<row+1; col++){
        cout<<"* ";
      }
      
      cout<<endl;
    }
                               // HOLLOW RECTANGLE

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if((i==0)|| i==n-1||(j==0)||j==n-1){
    //         cout<<"*";
    //     } 
    //     else{
    //         cout<<" ";
    //     }
    // }
    //     cout<<endl;
    // }
        
                               // HOLLOW HALF PYRAMID
    
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i; j++){
    //         if((i==0)||(j==0)||j==n-i-1){
    //         cout<<"*";
    //     } 
    //     else{
    //         cout<<" ";
    //     }
    // }
    //     cout<<endl;
    // }

                                // HOLLOW FULL PYRAMID
     /*
    for(int i=0; i<n; i++){
        int k=0;
        for(int j=0; j<((2*n)-1); j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else if(k <2*i+1){
                if(k==0 || k==2*i ||i==n-1)
                cout<<"*";
                else
                cout<<" ";
                k++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }*/

                                         //FULL PYRAMID

    // for(int row=0; row<n; row++){
    //     //spaces
    //     for(int col=0; col<n-row-1; col++){
    //         cout<<" ";
    //     }
    //     //star
    //     for(int col=0; col<2*row+1; col++){
    //         if(col==0){
    //             //first star
    //         cout<<"*";
    //     }
    //     else if(col== 2*row){
    //         cout<<"*";
    //     }
    //     else{
    //         cout<<" ";
    //     }
    //     }
    //     cout<<endl;
    // }

                                      //REVERSE FULL PYRAMID

    // for(int row=0; row<n; row++){
    //     //spaces
    //     for(int col=0; col<row; col++){
    //         cout<<" ";
    //     }
    //     //star
    //     for(int col=0; col<2*n-2*row-1; col++){
    //         if(col==0 || col==2*n-2*row-2){
    //         cout<<"*";
    //     }
    //     else{
    //         cout<<" ";
    //     }
    //     }
    //     cout<<endl;
    // }

                                       //PARDA IN DIAMOND SHAPE

     /*for (int row=0; row<n; row++){
     //half pyramid
     for (int col=0; col<n-row; col++){
        if(row==0 || col==0|| col==row-n-1 ){
          cout<<"*";
     }
     else{
        cout<<" ";
     }
     }
     
     //full pyramid
       for(int col=0; col<2*row +1; col++){
        cout<<" ";
       }

     //half pyramid
     for (int col=0; col<n-row; col++){
        cout<<"*";
     }
      cout<<endl;
     }


     for (int row=0; row<n; row++){
     //half pyramid
     for (int col=0; col<row+1; col++){
        cout<<"*";
     }
     
     //full pyramid
       for(int col=0; col<2*n-2*row -1; col++){
        cout<<" ";
       }

     //half pyramid
     for (int col=0; col<row+1; col++){
        cout<<"*";
     }
      cout<<endl;
     }*/

}


