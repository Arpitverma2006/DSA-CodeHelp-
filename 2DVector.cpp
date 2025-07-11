#include<iostream>
#include<vector>

using namespace std;

int main(){

    // How to declear a 2D vector in the C++ ,
    // vector<vector<int>> arr(no. of rows,vector<int>(4,0));

    vector<vector<int>> arr(5,vector<int>(4,0));
    int totalrows=arr.size();
    int totalcolumns=arr[0].size();

    // 2D array created 
    //with 5 rows
    //with 3 columns

    vector<vector<int>> arr1(4);

    arr1[0]=vector<int>(4);
    arr1[1]=vector<int>(2);
    arr1[2]=vector<int>(5);
    arr1[3]=vector<int>(3);

    int totalcolumns1=arr1.size();
    cout<<totalcolumns;

    return 0;
}