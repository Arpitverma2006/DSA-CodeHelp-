// Debug the code. It is trying to print the given pattern.
/*
Pattern
1
23
345
4567
*/


#include<iostream>
using namespace std;

int main(){
    int n=4;
    int count=1;
    // Outer Loop
    for(int row=1;row<=n;row++){
        //Inner Loop
        count=row;
        for(int col=1;col<=row;col++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}