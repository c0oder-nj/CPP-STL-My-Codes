#include<iostream>
#include<array> // stl header file for array
using namespace std;
int main(){
    // int arr[3] = {10,20,30};
    // for(int i=0; i<3; i++){
    //     cout<<arr[i]<<endl;
    // }

    array<int,4> arr = {1,2,3,4};

    int size = arr.size();
    cout<<size<<endl;
    // for(int i=0; i<size; i++){
    //     // cout<<arr[i]<<endl; // accessing stl array using ith index
    //     // cout<<arr.at(i)<<endl;// accessing using .at function
    //     // cout<<arr.empty()<<endl; // 0 0 0 0 that specifies my array is not empyt 
    // }

    int first = arr.front();
    cout<<"First value is "<<first<<endl;
    int last  = arr.back();
    cout<<"Last value is "<< last<<endl;

    return 0;
}