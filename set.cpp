// set is an ordered data structure basically jab bhi ap values ko print kraoge ordered me print krega 
// unordered set random print krega 

//set is a data structure that stores unique values like 5 baar 5 insert kroge toh vo sirf ek hi baar lega

// insert find erase and count all 4 methods complexity is O(logn) 
// size, begin, end, empty complexity is O(1)

#include<iostream>
#include<set>

using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(10);    
    s.insert(10);    
    s.insert(10);    
    s.insert(10);
    s.insert(15);
    s.insert(15);
    s.insert(15);
    s.insert(15);
    s.insert(20);
    s.insert(25);

    s.insert(2);

    cout<<"Size of my set is "<<s.size()<<endl;

    // for(int ele:s){ // we can use auto keyword also 
    //     cout<<ele<<" "; // prints in ordered manner ie. ascending order
    // }

    for(auto ele:s){ // automatically detects the data type 
        cout<<ele<<" ";
    }cout<<endl;

    //in order to remove elements from the set 

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it); // takes the pointer iterator as a paramter and delete value present at that iterator
    // this will remove my 10

    for(int ele: s){
        cout<<ele<<" ";
    }cout<<endl;

    set<int>::iterator it_at_ten = s.find(15);
    while(it_at_ten!=s.end()){
        cout<<*it_at_ten<<" ";
        it_at_ten++; // set print values from 15
    }cout<<endl;
    return 0;
}