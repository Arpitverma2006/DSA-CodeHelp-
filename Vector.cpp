#include<iostream>
#include<vector>
using namespace std;
int main(){

    // vector<int> marks;

    vector<int> first;

    vector<int> second;


    first.push_back(10);
    first.push_back(11);
    first.push_back(12);
    first.push_back(13);


    // Traverse the vector using iterators 

    //create iterator
    vector<int>::iterator it=first.begin();
    while(it!=first.end()){
        cout<<*it++<<endl;
    }

    // second.push_back(20);
    // second.push_back(21);
    // second.push_back(22);
    // second.push_back(23);

    // first.swap(second);

    // // cout<<first[0]<<endl<<first[1]<<endl<<first[2]<<endl<<first[3]<<endl;

    // // For each loop

    // for(int i:first){
    //     cout<<i<<endl;
    // }

    // for(int i:second){
    //     cout<<i<<endl;
    // }


    // vector<int> age;
    // marks.reserve(10);

    // cout<<age[0];

    // vector<int> miles(10);

    // vector<int> distances(10,0);

    // marks.push_back(10);
    // marks.push_back(20);
    // marks.push_back(30);
    // marks.push_back(40);
    // marks.clear();

    // marks.insert(marks.begin(),50);
    // // marks.push_back(50);
    // // marks.push_back(60);

    // cout<<marks.size()<<endl;
    // cout<<marks[0]<<endl;

    // marks.erase(marks.begin(),marks.end());

    // cout<<marks.size();


    // cout<<"Size : "<<marks.size()<<endl;

    // marks.pop_back();

    // cout<<marks.size()<<endl;

    // cout<<(*marks.begin())<<endl;

    // cout<<(*marks.end())<<endl;

    // cout<<marks.front()<<endl;

    // cout<<marks.back()<<endl;

    // if(marks.empty()==true){
    //     cout<<"Vector is empty .";
    // }
    // else{
    //     cout<<"Vector is not empty . ";
    // }

    // cout<<endl;
    // marks[0]=100;
    // cout<<marks[0]<<endl;

    // cout<<marks[0]<<endl;
    // cout<<marks.at(0)<<endl;

    // cout<<marks.capacity()<<endl;
    // cout<<marks.size()<<endl;

    // cout<<age.capacity()<<endl;

    // cout<<marks.max_size()<<endl;

    return 0;
}