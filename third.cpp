// Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 4
   *
  ***
 *****
*******
*/

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter Your Choice : ";
    cin>>num;

    // Outer loop
    for(int row=1;row<=num;row++){
        // INner Loop
        //Sapces
        for(int col=1;col<=num-row;col++){
            cout<<" ";
        }
        for(int col=1;col<=2*row-1;col++){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}