//Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 4
1
21
321
4321
*/

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the desired Number : ";
    cin>>n;
    // Outer Loop
    for(int row=1;row<=n;row++){
        // Inner Loop
        for(int col=row;col>=1;col--){
            cout<<col;

        }
        cout<<endl;
    }

    return 0;
}