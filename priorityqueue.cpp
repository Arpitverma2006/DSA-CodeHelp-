#include<iostream>
#include<queue>
using namespace std;

int main(){


    // Min-heap -> Minimum value -> Hishest Priority 
    priority_queue<int,vector<int>,greater<int>> pq;

    pq.push(100);
    // 100
    pq.push(50);
    // 50 100
    pq.push(75);
    // 50 75 100

    cout<<pq.top()<<endl;
    pq.pop();
    // 75 100
    cout<<pq.top()<<endl;
    pq.pop();
    




    // // create 

    // priority_queue<int> pq;

    // // max- heap -> maximum value -> Highest priority

    // pq.push(10);
    // // 10
    // pq.push(20);
    // // 20 10
    // pq.push(21);
    // // 21 20 10
    // pq.push(31);
    // // 31 21 20 10

    // // top element -> Highest priority elements


    // cout<<pq.top()<<endl;



    // pq.pop();

    // cout<<pq.top()<<endl;

    // pq.pop();


    // cout<<pq.top()<<endl;

    // cout<<pq.size()<<endl;

    // if(pq.empty()==true){

    //     cout<<"Empty"<<endl;
    // }
    // else{
    //     cout<<"Not empty"<<endl;
    // }


    return 0;
}