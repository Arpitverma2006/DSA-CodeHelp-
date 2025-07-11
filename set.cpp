#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
     // Create
    set<int> s;  //  Both unordered and unordered sets has same functions .

    s.insert(10);
    s.insert(20);
    s.insert(8);
    s.insert(4);

    // unordered_set<int>::iterator it=s.begin();
    // while(it!=s.end()){
    //     cout<<*it++<<endl;
    // }



    // Count Method

    if(s.count(20)==1){
        cout<<"Found";
    }
    if(s.count(20)==0){
        cout<<"Not found"<<endl;
    }
    
    // // Find Method
    // if(s.find(210)!=s.end()){
    //    cout<<"Found!!"<<endl;
    // }
    // else{
    //     cout<<"Not Found!!"<<endl;
    // }
    

    // cout<<s.size()<<endl;

    // s.erase(s.begin(),s.end());

    // cout<<s.size()<<endl;

    // s.clear();
    // cout<<s.size()<<endl;

    // if(s.empty()==true){
    //     cout<<"Empty Set . ";
    // }
    // else{
    //     cout<<"Not Empty .";
    // }


     

    return 0;
}