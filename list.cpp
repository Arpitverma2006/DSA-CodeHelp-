#include<iostream>
#include<list>
using namespace std;
int main(){


    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);

    first.insert(first.begin(),30);

    cout<<first.size()<<endl;
    first.erase(first.begin(),first.end());

    cout<<first.size()<<endl;


    // list<int>::iterator it=first.begin();

    // while(it!=first.end()){
    //     cout<<*it++<<" ";
    // }cout<<endl;
    // list<int> second;
    // second.push_back(1);
    // second.push_back(2);
    // second.push_back(3);
    // // Before removing 
    // cout<<"Before Removing : "<<endl;
    // // cout<<myList.front()<<endl;
    // // cout<<myList.back()<<endl;
    // list<int>::iterator it=first.begin();

    // while(it!=first.end()){
    //     cout<<*it++<<" ";
    // }cout<<endl;

    // first.swap(second);

    // cout<<"After Removing : "<<endl;

    // list<int>::iterator it2=first.begin();

    // while(it2!=first.end()){
    //     cout<<*it2++<<" ";
    // }cout<<endl;











    // Creation
    // list<int> myList;

    // // Insertion
    // myList.push_back(10);
    // //10
    // myList.push_back(20);
    // //10 20
    // myList.push_back(30);
    // //10 20 30
    // myList.push_back(40);
    // //10 20 30 40
    // // cout<<myList.size()<<endl;
    // myList.push_front(5);
    // myList.push_back(10);
    // //5 10 20 30 40

    // // Before removing 
    // cout<<"Before Removing : "<<endl;
    // // cout<<myList.front()<<endl;
    // // cout<<myList.back()<<endl;
    // list<int>::iterator it=myList.begin();

    // while(it!=myList.end()){
    //     cout<<*it++<<" ";
    // }cout<<endl;

    // myList.remove(10);

    // cout<<"After Removing : "<<endl;

    // list<int>::iterator it2=myList.begin();

    // while(it2!=myList.end()){
    //     cout<<*it2++<<" ";
    // }cout<<endl;



    
    // myList.pop_back();
    // //5 10 20 30 
    // myList.pop_front();
    // 10 20 30
    // myList.clear();
    // cout<<myList.size();
    // if(myList.empty()==true){
    //     cout<<"List is empty ";
    // }
    // else{
    //     cout<<"List is not empty";
    // }



    return 0;
}