#include<iostream>
#include<map>
using namespace std;

int main(){

    // Create 

    map<int, string> table;

    table.insert(make_pair(1,"Arpit"));
    table.insert(make_pair(4,"Shaym"));
    table.insert(make_pair(3,"Rahul"));


    map<int,string>::iterator it=table.begin();

    while(it!=table.end()){
        pair<int,string> pt=*it;
        cout<<pt.first<<"->"<<pt.second<<endl;
        it++;
    }







    return 0;
}