// Debug the code. Take input a character, print 1, if its a capital alphabet, print 0, if its a lowercase alphabet, else print -1.

#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<<"Enter a Character: ";
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"1"<<endl;
    }
    else if(ch>=97 && ch<=122){
        cout<<"0"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}