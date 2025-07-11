#include<iostream>
#include<queue>
#include<deque>
using namespace std;

int main(){

     // Creation
    deque<int> dq;

    dq.push_back(10);
    // 10
    dq.push_back(20);
    // 10 20
    dq.push_back(30);
    // 10 20 30

    dq.push_front(200);
    // 200 10 20 30
    dq.push_front(300);
    // 300 200 10 20 30


    cout<<dq.size()<<endl;

    dq.erase(dq.begin(),dq.end());

    cout<<dq.size()<<endl;




    // cout<<dq.size()<<endl;
    // dq.clear();
    // // empty
    // cout<<dq.size()<<endl;

    // dq.insert(dq.begin(),100);
    // cout<<dq[0]<<endl;


    // cout<<dq.at(1)<<endl;
    // cout<<dq[1]<<endl;
    // cout<<dq[2]<<endl;
    // cout<<dq[3]<<endl;

    // deque<int>::iterator it=dq.begin();

    // while(it!=dq.end()){
    //     cout<<*it++<<endl;
    // }

    // dq.pop_front();
    // // 200 10 20 30
    // dq.pop_back();
    // // 200 10 20

    // cout<<dq.front()<<endl;
    // cout<<dq.back()<<endl;
    // cout<<dq.size()<<endl;

    // if(dq.empty()==true){
    //     cout<<"dqueue is empty . ";
    // }
    // else{
    //     cout<<"Deque is not empty . ";
    // }





    return 0;
}