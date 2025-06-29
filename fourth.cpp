//Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 4
1
22
333
4444
*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Choice Here : ";
    cin>>num;
    // Outer Loop
    for(int row=1;row<=num;row++){
        //Inner Loop
        for(int col=1;col<=row;col++){
            cout<<row;
        }
        cout<<endl;
    }
    return 0;
}