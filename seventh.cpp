//Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 4
   1
  232
 34543
4567654
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter your Choice : ";
    cin>>n;
    int count=1;
    //Outer Loop
    for(int row=1;row<=n;row++){
        //Inner Loop
        for(int col=1;col<=n-row;col++){
            cout<<" ";
        }
        count=row;
        for(int col=1;col<=row;col++){
            cout<<count;
            count++;
        }
        if(row>1){
            for(int col=count-2;col>=row;col--){
                cout<<col;
            }
        }
        cout<<endl;
    }
    return 0;
}