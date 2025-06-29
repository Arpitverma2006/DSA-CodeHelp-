//Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the Choice : ";
    cin>>n;
    char ch='A';

    //Outer Loop
    for(int row=1;row<=n;row++){
        // Inner Loop
        for(int col=n-row;col<n;col++){
            cout<<char(ch+col);
        }
        cout<<endl;
    }
    return 0;
}