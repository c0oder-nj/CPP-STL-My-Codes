#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;

    //first what is size and capacity of vector
    // size --> no. of elements 
    // capacity --> memory allocated for the vector i.e. how many elements can be inserted into vector

    cout<<"Size of the Vector is "<<v.size()<<endl;
    cout<<"Capacity | Elements that could stored in vector is "<<v.capacity()<<endl;

    // method for inserting element into vector
    v.push_back(1); // add element at last | append

    v.push_back(2);
    cout<<"Size of the Vector is "<<v.size()<<endl;
    cout<<"Capacity | Elements that could stored in vector is "<<v.capacity()<<endl;
    for(int ele:v){
        cout<<ele<<endl;
    }

    v.push_back(3);
    // cout<<"Size of the Vector is "<<v.size()<<endl;
    // cout<<"Capacity | Elements that could stored in vector is "<<v.capacity()<<endl;
    // for(int ele:v){
    //     cout<<ele<<endl;
    // }

    int first_ele = v.front();
    int last_ele = v.back();

    cout<<"First element is "<<first_ele<<endl;
    cout<<"last element is "<<last_ele<<endl;

    //Before removing my vector is 

    cout<<"\n\nBefore removing the last element "<<endl;
    for(int ele: v){
        cout<<ele<<endl;
    }



    //removing element from the vector
    v.pop_back(); // removes last element from the vector | assumes vector as stack jo last me dala tha vo pehle bahar niklega ie. popped from last and no data is returned agr apko vo element chahiye toh pehle use retrive krlo then .pop_back() lagao

    cout<<"\nAfter removing the last element "<<endl;
    for(int ele:v){
        cout<<ele<<endl;
    }

    // int begin_iter = v.begin(); // google se thoda or smjhna hai 

    // different ways to initialize the vector

    vector<int> v1(5,1);
    cout<<endl;
    for(int ele:v1){
        cout<<ele<<endl;
    }

    vector<int> new_vec(v); // intialize new vector with existing one
    cout<<endl;
    for(int ele:new_vec){
        cout<<ele<<endl;
    }

    return 0;
}