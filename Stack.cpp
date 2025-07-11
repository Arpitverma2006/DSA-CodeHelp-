#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> s1;
    stack<int> s2;

    s1.push(10);
    s1.push(20);

    s2.push(100);
    s2.push(200);

    s1.swap(s2);

    cout<<s1.top()<<endl;



// Create 
    // stack<int> s;
    // s.push(10);
    // //10
    // s.push(20);
    // // 20 10
    // s.push(30);
    // // 30 20 10
    // s.push(40);
    // // 40 30 20 10

    // cout<<s.size()<<endl;

    // s.pop();
    // //30 20 10
    // cout<<s.size()<<endl;

    // cout<<s.top()<<endl;
    // s.pop();

    // cout<<s.size()<<endl;

    // cout<<s.top()<<endl;


    // if(s.empty()==true){
    //     cout<<"stack is empty .";
    // }
    // else{
    //     cout<<"stack is not empty .";
    // }





    return 0;
}