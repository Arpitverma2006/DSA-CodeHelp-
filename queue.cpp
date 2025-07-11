#include<iostream>
#include<queue>
using namespace std;

int main(){


    queue<int> q1;
    queue<int> q2;

    q1.push(10);
    q1.push(20);

    q2.push(1);
    q2.push(2);

    q1.swap(q2);

    cout<<"Front of the q1 -> "<<q1.front()<<endl;







    // Creation 
    // queue<int> q;

    // // Insertion

    // q.push(10);
    // // 10
    // q.push(20);
    // //10 20
    // q.push(30);
    // // 10 20 30
    // q.push(40);
    // //10 20 30 40

    // cout<<q.size()<<endl;

    // //q.clear()  is not used here .

    // cout<<"Front -> "<<q.front()<<endl;
    // cout<<"Back -> "<<q.back()<<endl;

    // q.pop();
    // //20 30 40
    // cout<<q.size()<<endl;

    // if(q.empty()==true){
    //     cout<<"Queue is empty .";

    // }
    // else{
    //     cout<<"Queue is not empty .";
    // }






    return 0;
}